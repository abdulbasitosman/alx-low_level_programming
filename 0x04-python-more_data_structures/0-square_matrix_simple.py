#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_matrix = []
    for i in matrix:
        temp = list(map(lambda x: x**2, i))
        new_matrix.append(temp)
    return new_matrix
