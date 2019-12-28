import random

import turingarena as ta
from turingarena import *
from turingarena.evallib.algorithm import run_algorithm

def main():
    with run_algorithm(submission.source) as process:
        maxAttempts=10; #you can set here the maximum number of attempts the challenger can make
        att=0
        Nguess=0
        code = random.choices(range(0, 6), k=4)	#you can set here your random or customized secret code
        print()
        print('SECRET CODE:', code[0], '-', code[1], '-',code[2], '-', code[3])
        print()

        #Return the number of black pegs:
        def blackScore(c1, c2, c3, c4):
            nonlocal Nguess, code, maxAttempts
            print('Is the code', c1, '-', c2, '-', c3, '-', c4, '?')
            Nguess+=0.5
            prov = [c1, c2, c3, c4]
            ok=0
            for i in range(4):
                if prov[i]==code[i]:
                    ok+=1
            print('Black pegs: ', ok)
            if ok==4:
                ta.goals["correct"] = True
                #Other tasks:
                if Nguess <= 12:
                    ta.goals["correct"] = True
                    if Nguess <= 6:
                        ta.goals["perfect"] = True
                print('Right! the code is', c1, '-', c2, '-', c3, '-', c4, ', you made ', Nguess, ' attempts!')
                exit();
            if Nguess >= maxAttempts:
                print('You didnt find the code!')
                exit();
            return ok

        #Return the number of white pegs:
        def whiteScore(c1, c2, c3, c4):
            nonlocal Nguess, code
            Nguess+=0.5
            prov = [c1, c2, c3, c4]
            contato = [0, 0, 0, 0]
            ok=0
            for i in range(4):
                if prov[i]==code[i]:
                    contato[i]=2
            for i in range(4):
                if contato[i]!=2:
                    for j in range(4):
                        if contato[j]==0 and i!=j:
                            if prov[i]==code[j]:
                                ok+=1
                                contato[j]=1
                                break
            print('White pegs: ', ok)
            print()
            return ok

        #Call to challenger's program:
        process.functions.play(callbacks=[blackScore, whiteScore])
        print('For some reason your program stopped before you find the code...')

main()

ta.goals.setdefault("correct", False)
ta.goals.setdefault("in_game", False)
ta.goals.setdefault("perfect", False)
