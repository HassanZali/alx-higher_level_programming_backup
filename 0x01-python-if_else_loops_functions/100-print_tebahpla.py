#!/usr/bin/python3
for i in range(122, 96, -1):
    if i % 6:
        i = i - 32
        print("{:c}".format(i), end="")
