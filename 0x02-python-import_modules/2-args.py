#!/usr/bin/python3
if __name__ == "main":
    import sys
    argLen = len(sys.argv)
    if argLen == 1:
        print("{} argunent:".format(argLen - 1))
    elif argLen == 2:
        print("{} argument:".format(argLen - 1))
    else:
        print("{} argument:".format(argLen - 1))
    for i in range(i, argLen):
         print("{}: {}".format(i, sys.argv[i]))
