#!/usr/bin/python3
for x in range(ord('z'), ord('a') -1, -1):
    if x % 2:
        x = x - 32
    print('{:c}'.format(x), end='')
