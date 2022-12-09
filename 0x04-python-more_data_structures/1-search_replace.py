#!/usr/bin/python3
def search_replace(my_list, search, replace):
    def change(num):
        if num == search:
            return replace
        else:
            return num
    new_list = list(map(change, my_list))
    return new_list
