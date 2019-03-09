"""
  Simple solution

  Step-1: Find the sum (s) of all the values in array[]
  Step-2: Replace every arra[i] with s/arra[i] 
"""


def solution(input_list):
    product = 1
    for i in input_list:
        product *= i

    for i in range(len(input_list)):
        input_list[i] = int(product / input_list[i])


if __name__ == '__main__':
    input_list = [3, 1, 6, 7, 4]
    print("Input:\n", input_list)
    solution(input_list)
    print("Output:\n", input_list)

