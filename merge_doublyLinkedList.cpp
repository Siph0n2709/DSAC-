#include <iostream>
#include <list>
using namespace std;

int main() {

    int arr1[]= {16, 22, 77, 129};
    int arr2[] = {1, 2, 7, 29, 77, 155, 166};

    list<int> list1 (arr1, arr1 + sizeof(arr1) / sizeof(int));
    list<int> list2 (arr2, arr2 + sizeof(arr2) / sizeof(int));

    list<int> list3;

    list<int>::iterator l1 = list1.begin();
    list<int>::iterator l2 = list2.begin();

    while (l1 != list1.end() && l2 != list2.end()) {
        if (*l1 < *l2) {
            list3.push_back(*l1);
            l1++;
        }
        else if (*l2 < *l1) {
            list3.push_back(*l2);
            l2++;
        }
        else {
            list3.push_back(*l1);
            l1++;
            l2++;
        }
    }

    while (l1 != list1.end()) {
        list3.push_back(*l1);
        l1++;
    }
    while (l2 != list2.end()) {
        list3.push_back(*l2);
        l2++;
    }

    for (list<int>::iterator i = list3.begin(); i != list3.end(); i++) {
        cout << *i << endl;
    }
    return 0;
}
