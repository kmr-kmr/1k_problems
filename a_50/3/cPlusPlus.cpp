/*
  We use XOR to solve this problem efficently.

  We assume that, there must be only one number not repeated.
*/

#include<iostream>


int solution(int *inputArray, int size) {

    int totalXOR = 0;

    for (int i=0; i<size; i++) {
        totalXOR ^= * (inputArray + i);
    }

    return totalXOR;
}

int main() {
    int nonRepeated;
    int inputArray[] = {3, 3, 4, 6, 2, 1, 4, 6, 2};
    nonRepeated = solution(inputArray, sizeof(inputArray)/sizeof(inputArray[0]));
    std::cout << "Not repeated element is : " << nonRepeated << "\n";
}