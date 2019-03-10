/*
  Simple solution

  Step-1: Find left product of ever arra[i]
  Step-2: Find right product of every array[i]
  Step-3: Multiply lef and right 
*/


#include <iostream>
#include <cstdlib>

int * solution(int *inputArray, int size) {

    int i = 0;
    int *outputArray = (int*) malloc(sizeof(int)*size);

    int temp = 1;

    for (i=0; i<size; i++) {
        *(outputArray + i) = temp;
        temp *= *(inputArray + i);
    }

    temp = 1;
    for (i=size - 1; i >= 0; i--) {
        *(outputArray + i) *= temp;
        temp *= *(inputArray + i);
    }

    return outputArray;

}

int main() {

    int size;
    int inputArray[] = {1, 2, 3, 4};
    int * outputArray;
    size = sizeof(inputArray)/sizeof(inputArray[0]);
    std::cout << "Input :\n";
    for(int i=0; i<size; i++) {
        std::cout << *(inputArray + i) << " ";
    }
    outputArray = solution(inputArray, size);
    std::cout << "\nOutput :\n";
    for(int i=0; i<size; i++) {
        std::cout << *(outputArray + i) << " ";
    }
    std::cout << "\n";
}