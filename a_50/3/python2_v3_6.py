"""
  Simple solution

"""

from functools import reduce

def solution(input_list):
    return reduce((lambda x, y: x ^ y), (input_list))


if __name__ == '__main__':
    input_list = [1, 3,  4, 6, 2, 1, 4, 6, 2]
    print("Input:\n", input_list)
    out_put_value=solution(input_list)
    print("Output:\n", out_put_value)
