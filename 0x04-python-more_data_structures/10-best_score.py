#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary:
        value_list = sorted(list(a_dictionary.values()))
        max_value = value_list[-1]
        for i, j in a_dictionary.items():
            if max_value == j:
                return i
