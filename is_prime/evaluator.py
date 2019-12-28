import random

import turingarena as ta

n = 1	#caso base vediamo se lo studente lo sa gestire
prime = 0
try:
    with ta.run_algorithm(ta.submission.source) as process:
        prime_utente = process.functions.is_prime(n)
        if prime == prime_utente:
            print("Correct!")
        else:            
            print("Wrong! You said ", prime_utente, "while it is: ", prime)
            ta.goals["correct"] = False
except AlgorithmError as e:
    ta.goals["correct"] = False
    print("Something went wrong...")
    print(e)        
# fine caso base

n = 37	#caso numero primo vediamo se lo studente lo sa gestire
prime = 1
try:
    with ta.run_algorithm(ta.submission.source) as process:
        prime_utente = process.functions.is_prime(n)
        if prime == prime_utente:
            print("Correct!")
        else:            
            print("Wrong! You said ", prime_utente, "while it is: ", prime)
            ta.goals["correct"] = False
except AlgorithmError as e:
    ta.goals["correct"] = False
    print("Something went wrong...")
    print(e)        
# fine caso base
for _ in range(10):
    prime = 1
    n = random.randint(2, 10000)
    divisore = 2
    while divisore < n:
        if(n%divisore==0):
            prime = 0
        divisore = divisore +1	
    try:
        with ta.run_algorithm(ta.submission.source) as process:
            prime_utente = process.functions.is_prime(n)
        if prime == prime_utente:
            print("Correct!")
        else:
            ta.goals["correct"] = False
            print("Wrong! You said ", prime_utente, "while it is: ", prime)
    except ta.AlgorithmError as e:
        ta.goals["correct"] = False
        print("Something went wrong...")
        print(e)

ta.goals.setdefault("correct", True)
