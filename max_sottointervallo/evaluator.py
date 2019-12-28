import random

import turingarena as ta

for i in range(10):

    #Create a random sequence:
    seq = random.choices(range(-10 ** 5, 10 ** 5), k=(i+1)*20)
    length = random.randint(2, (i+1)*20)
    first = random.randint(0, (i+1)*20-length)
    for j in range (length):
        seq[j+first] = j

    #Search max subsequence:
    length = 1
    n = 1
    for j in range((i+1)*20-1):
        if seq[j]<seq[j+1]:
            n = n+1
        else:
            if n>length:
                length = n
            n = 1
    if n>length:
        length = n

    try:
        with ta.run_algorithm(ta.submission.source) as process:
            index = process.functions.max_sottointervallo(len(seq), seq)
        if index == length:
            print("Correct!")
        else:
            ta.goals["correct"] = False
            print("Wrong! You said the longest subsequence is", index, "while it was", length)
    except ta.AlgorithmError as e:
        ta.goals["correct"] = False
        print("Something went wrong...")
        print(e)

ta.goals.setdefault("correct", True)
