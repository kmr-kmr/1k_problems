"""
  Simple solution

  Step-1: Iterate through list and create new list element except that index element
  Step-2: Multiply all the elements from new list again by iterating
"""


def solution(input_list):
    product_list = []
    for index, element in enumerate(input_list):
        product = 1
        for i in input_list[:index] + input_list[index+1:]:
            product *= i
        product_list.append(product)
    return product_list


if __name__ == '__main__':
    input_list = [1, 3, 2, 1, 2]
    print("Input:\n", input_list)
    out_put_value = solution(input_list)
    print("Output:\n", out_put_value)
