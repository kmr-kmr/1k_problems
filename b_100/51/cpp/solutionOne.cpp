#include <iostream>
#include <stack>


class MinStack {
  private:
    int minVal;
    int size;
    int top;
    int *arr;

  public:
    MinStack(int siz) {
        size = siz;
        arr = new int[size];
        top = -1;
    }

    int topVal();
    bool isFull();
    bool isEmpty();
    int push(int);
    int pop();
    int getMinVal();
};

int MinStack::getMinVal() {
    if(!isEmpty()) {
        return minVal;
    } else {
        return 0;
    }
}

int MinStack::topVal() {
    return arr[top];
}

bool MinStack::isFull() {
    if(top == size - 1) {
        return 1;
    } else {
        return 0;
    }
}

bool MinStack::isEmpty() {
    if(top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int MinStack::push(int val) {

    if(top < size - 1) {
        if (top == -1) {
            minVal = val;
            arr[++top] = val;
        } else {
            if (val < minVal) {
                arr[++top] = (2 * val - minVal);
                minVal = val;
            } else {
                arr[++top] = val;
            }
        }
        return 1;
    } else {
        return 0;
    }
}

int MinStack::pop() {
    if (top > -1) {
        int t = arr[top--];
        if (t < minVal) {
            minVal = (2*minVal - t);
        }
        return t;
    } else {
        return 0;
    }
}

int main() {
    MinStack ms(10);
    ms.push(23);
    ms.push(-1);
    ms.push(234);
    ms.push(2);
    ms.push(3);
    ms.push(-2);
    ms.push(4);

    std::cout << "Min value is: " << ms.getMinVal() << "\n";
    ms.pop();
    ms.pop();
    std::cout << "Min value is: " << ms.getMinVal() << "\n";
}

