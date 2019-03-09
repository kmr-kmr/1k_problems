/*
  Simple solution

  Step-1: Find the sum (s) of all the values in array[]
  Step-2: Replace every arra[i] with s/arra[i] 
*/

#include <iostream>

void solution(int *inputArray, int size) {
    // Step-1
    int totalProduct = 1;
    for (int i=0; i < size; i++) {
        totalProduct *= *(inputArray + i);
    }

    //Step-2
    for (int i=0; i<size; i++) {
        *(inputArray + i) = totalProduct / *(inputArray + i);
    }
}

int main() {
    int inputArray[] = {3, 1, 6, 7, 4};
    int size = sizeof(inputArray)/sizeof(inputArray[0]);

    std::cout << "Input:\n";
    for (int i=0; i<size; i++) {
        std::cout << inputArray[i] << " ";
    }
    std::cout << "\n";
    // Apply solution
    solution(inputArray, size);

    std::cout << "Output:\n";
    for (int i=0; i<size; i++) {
        std::cout << inputArray[i] << " ";
    }
    std::cout << "\n";
}