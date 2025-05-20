//
// Created by Agnivesh Kaundinya on 5/20/2025.
//

#include <iostream>
#include <list>
using namespace std;


int main() {
    list<int> myList(4, 100); // creates a doubly lined list
    myList.push_front(200);
    for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {
        cout << ' ' << *it << endl;
    }
    return 0;
}

