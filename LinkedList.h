//
// Created by Agnivesh Kaundinya on 5/5/2025.
//

#ifndef MAIN_H
#define MAIN_H

class Node {
    public:
    Node *next;
    int data;
    Node(int d) : data(d), next(nullptr) {}
};

class List {
private:
    Node *head;
    Node *tail;

public:
    List(): head(nullptr), tail(nullptr) {}
    bool isEmpty();
    void push_front(int x);
    int head_element();

};

bool List::isEmpty() {
    return head == nullptr;
}

void List::push_front(int x) {
    Node *newNode = new Node(x);
    if (isEmpty()) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

int List::head_element() {
    if (isEmpty()) {
        return -1;
    }
    else{return head->data;}
}




#endif //MAIN_H
