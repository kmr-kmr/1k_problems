"""
  Simple solution
  Step1: Iterate all elements in range of first element of list to last element
  Step2: From new list find elements which are not present in input_list

"""

def solution(input_list):
    new_list = [element for element in range(input_list[0], input_list[-1]+1)]
    return list(set(input_list) ^ set(new_list))


if __name__ == '__main__':
    input_list = [1, 2, 3, 4, 5, 6, 8, 9, 11, 14]
    print("Input:\n", input_list)
    out_put_value=solution(input_list)
    print("Output:\n", out_put_value)