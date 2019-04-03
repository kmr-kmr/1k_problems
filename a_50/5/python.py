"""
  Simple solution
  Step1: Find the last number(n) in a list:
  Step2: Sum of first n natural numbers
  Step3: Subtract above sum from sum of list elements

"""

def solution(input_list):
    number = int(sum(input_list) - (((input_list[-1]) * ((input_list[-1]) + 1))/2))
    return number


if __name__ == '__main__':
    input_list = [1, 2, 3, 4, 5, 6, 7, 8,  9, 8, 10]
    print("Input:\n", input_list)
    out_put_value=solution(input_list)
    print("Output:\n", out_put_value)
