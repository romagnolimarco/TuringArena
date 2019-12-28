import os as _os

def main(_solution):
    # checkpoint
    print(0)
    # read n
    print(end="", flush=True)
    [n] = map(int, input().split())
    # call iterazioni = collatz(n)
    iterazioni = int(_solution.collatz(n))
    # write iterazioni
    print(iterazioni)
    # exit
    print(end="", flush=True)
    _os._exit(0)


if __name__ == '__main__':
    import sys
    import runpy
    
    if len(sys.argv) != 2:
        print("Usage: {} <solution>".format(sys.argv[0]))
    
    class Wrapper: pass 
    solution = Wrapper()
    solution.__dict__ = runpy.run_path(sys.argv[1])
    main(solution)

