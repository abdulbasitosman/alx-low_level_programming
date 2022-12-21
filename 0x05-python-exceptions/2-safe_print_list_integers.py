#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    i = 0
    for j in range(x):
        try:
            num = int(my_list[j])
            print("{:d}".format(num), end='')
            i = i + 1
        except (ValueError, TypeError):
            continue
    print()
    return i
