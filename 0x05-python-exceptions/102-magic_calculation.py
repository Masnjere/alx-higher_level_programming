#!/usr/bin/python3
def magic_calculation(a, b):
    result = 0
    for y in range(1, 3):
        try:
            if y > a:
                raise Exception("Too far")
            else:
                result += a ** b / y
        except Exception:
            result = b + a
            break
        return result
