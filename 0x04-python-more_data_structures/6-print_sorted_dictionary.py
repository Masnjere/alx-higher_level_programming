#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    y = sorted(a_dictionary)
    for x in y:
        print('{}: {}'.format(x, a_dictionary[x]))
