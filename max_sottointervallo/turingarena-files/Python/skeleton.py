import os as _os

def main(_solution):
    # checkpoint
    print(0)
    # read N
    print(end="", flush=True)
    [N] = map(int, input().split())
    # for i to N {...}
    seq = [None] * N
    for i in range(N):
        # read seq[i]
        print(end="", flush=True)
        [seq[i]] = map(int, input().split())
    # call index = max_sottointervallo(N, seq)
    index = int(_solution.max_sottointervallo(N, seq))
    # write index
    print(index)
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

