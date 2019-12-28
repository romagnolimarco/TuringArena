import random

import turingarena as ta

n = 1	#caso base vediamo se lo studente lo sa gestire
iterazioni = 1
try:
    with ta.run_algorithm(ta.submission.source) as process:
        iterazioni_utente = process.functions.collatz(n)
        if iterazioni == iterazioni_utente:
            print("Correct!")
        else:            
            print("Wrong! You said the iteration are",  iterazioni_utente, "while they were: ", iterazioni)
            ta.goals["correct"] = False
except AlgorithmError as e:
    ta.goals["correct"] = False
    print("Something went wrong...")
    print(e)        
# fine caso base

for _ in range(10):
    n = random.randint(2, 10000)
    num=n
    iterazioni=1
    while n != 1:
        iterazioni +=1
        if(n%2==0):
            n=n/2
        else:
            n=3*n+1	
    try:
        with ta.run_algorithm(ta.submission.source) as process:
            iterazioni_utente = process.functions.collatz(num)
        if iterazioni == iterazioni_utente:
            print("Correct!")
        else:
            ta.goals["correct"] = False
            print("Wrong! You said the iteration are",  iterazioni_utente, "while they were: ", iterazioni)
    except ta.AlgorithmError as e:
        ta.goals["correct"] = False
        print("Something went wrong...")
        print(e)

ta.goals.setdefault("correct", True)
