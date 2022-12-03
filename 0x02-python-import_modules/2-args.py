#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    size = len(sys.argv)
    if size == 1:
        print((size - 1), "arguments.")
    elif size == 2:
        print((size - 1), "argument:")
        print("1: {}".format(sys.argv[1]))
    else:
        print("{} arguments:".format(size - 1))
        for i in range(1, size):
            print("{}: {}".format(i, sys.argv[i]))
