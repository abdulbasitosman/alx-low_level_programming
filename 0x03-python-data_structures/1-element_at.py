#!/usr/bin/python3
def element_at(my_list, idx):
    for item in my_list:
        if idx < 0:
            print(idx)
        if idx > len(my_list):
            print(idx)
