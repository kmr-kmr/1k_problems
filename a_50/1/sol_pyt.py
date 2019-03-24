from functools import reduce
def problem1(l1):
    new_list = []
    product = reduce((lambda x, y: x*y), l1)
    for element in l1:
        new_list.append(int(product/element))
    print(new_list)

problem1([1, 3, 4, 6, 2])
