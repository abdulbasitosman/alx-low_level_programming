#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    i = 0
    for j in range(x):
        try:
            num = int(my_list[j])
            print("{:d}".format(num), end='')
            i = i + 1
        except Exception:
            continue
    print()
    return i
