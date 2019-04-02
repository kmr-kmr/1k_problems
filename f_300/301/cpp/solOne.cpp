/*
CPP solutions one:

The solution is...
  1. When ever we get open bracket entity like ( or { or[ we push this to stack.
  2. When we get a closing entity then we pop from stack and match it with input.
*/


#include <iostream>
#include <string>
#include <stack>
#include <map>

using namespace std;


bool solution(string input) {
    
    stack<char> charStack;
    char temp;
    map<char, char> charMap;

    charMap['}'] = '{';
    charMap[')'] = '(';
    charMap[']'] = '[';

    for (int i=0; i< input.length(); i++) {
        if (input[i] == '{' || input[i] == '(' || input[i] == '[') {
            charStack.push(input[i]);
            continue;
        } else {
            temp = charStack.top();
            charStack.pop();

            if (charMap[input[i]] != temp) {
                return false;
            }
            break;
        }
        
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);
    if (solution(s)) {
        cout << "balanced\n";
    } else {
        cout << "Not balanced\n";
    }
}