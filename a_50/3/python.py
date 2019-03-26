"""
  Simple solution

  Step-1: Create a dictionary with key is the value of the element and value is the number of times it is repeated in list
  Step-2: find the key where value is equal to 1
"""


def solution(input_list):
    element_dict = dict()
    for element in input_list:
        if element not in element_dict:
            element_dict[element] = 1
        else:
            element_dict[element] = element_dict[element] + 1
    for key, value in element_dict.items():
        if value == 1:
            return key



if __name__ == '__main__':
    input_list = [1, 3, 3, 9, 4, 6, 2, 1, 4, 6, 2]
    print("Input:\n", input_list)
    out_put_value=solution(input_list)
    print("Output:\n", out_put_value)
