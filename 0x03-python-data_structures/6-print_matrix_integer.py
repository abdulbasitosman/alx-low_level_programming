#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for item in matrix:
        for sub_item in item:
            print('{:d}'.format(sub_item), end="" if sub_item != item[-1] else '')
        print()
