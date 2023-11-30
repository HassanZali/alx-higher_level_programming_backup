#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    arguments = sys.argv[1:]
    result = 0
    for i in arguments:
        result += int(i)
    print(result)
