#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include<vector> 
using namespace std;

struct Node{
    int value;
    int count;
    Node* next;
};
class LinkedList{
    public: 
    LinkedList(); // constructor 
    ~LinkedList(); // destructor 
    void createLinkedList(vector<int>&v); // to create linked list using the vector elements 
    void insertAfter(int firstValue, int secondValue); // insert the second value after each occurence of first value in the linked list. 
    void printLinkedList(); // print the updated linked list. 
    int CalculateSum(); // to calculate the sum of all the nodes in this linked list.
    private : 
    Node* head; // pointer to the head node ( first node) in the linked list.
};
#endif
