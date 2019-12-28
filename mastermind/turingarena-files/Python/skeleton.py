import os as _os

def main(_solution):
    # checkpoint
    print(0)
    # call ans = play() callbacks {...}
    def _callback_blackScore(c1, c2, c3, c4):
        # callback blackScore
        print(1, 0)
        # write c1, c2, c3, c4
        print(c1, c2, c3, c4)
        # read ans
        print(end="", flush=True)
        [ans] = map(int, input().split())
        # return ans
        return ans
    def _callback_whiteScore(c1, c2, c3, c4):
        # callback whiteScore
        print(1, 1)
        # write c1, c2, c3, c4
        print(c1, c2, c3, c4)
        # read ans
        print(end="", flush=True)
        [ans] = map(int, input().split())
        # return ans
        return ans
    ans = int(_solution.play(_callback_blackScore, _callback_whiteScore))
    # no more callbacks
    print(0, 0)
    # write ans
    print(ans)
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

