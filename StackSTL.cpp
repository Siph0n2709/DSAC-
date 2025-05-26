//
// Created by Agnivesh Kaundinya on 5/21/2025.
//

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stk;
    stk.push(10);
    stk.push(20);

    if (!stk.empty()) {
        cout << stk.top() << endl;
        stk.pop();
        cout << stk.top() << endl;
    }

    cout << stk.size() << endl;
}