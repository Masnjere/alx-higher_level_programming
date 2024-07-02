#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    ret = 0
    for m in range(x):
        try:
            print('{}'.format(my_list[m]), end='')
            ret += 1
        except IndexError:
            break
        print('')
        return ret
