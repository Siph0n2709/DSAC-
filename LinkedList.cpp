#include <iostream>
#include <list>
#include "LinkedList.h"

using namespace std;

int main() {
    List obj;
    cout << obj.head_element() << endl; // SINGLE LINKED LIST
    obj.push_front(5);
    cout << obj.head_element() << endl;
    obj.push_front(10);
    cout << obj.head_element() << endl;
    obj.push_front(15);
    cout << obj.head_element() << endl;
}
