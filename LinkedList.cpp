#include "LinkedList.h"
LinkedList::LinkedList() //constructor 
{
    head=nullptr;
}
LinkedList::~LinkedList() //destructor 
{
    Node* temp;
    while(head!=nullptr)
    {
        temp=head;
        head=temp->next;
        delete temp;
    }

}
void LinkedList::createLinkedList(vector<int>&v) // to create linked list using vector elements. 
{
for (int i=0;i<v.size();i++)
{
    bool found=false;
    Node* curr=head;
    while(curr!= nullptr)
    {
        if(curr->value == v[i])
        {
            curr->count++;
            found=true;
            break;
        }
        curr=curr->next;
    }
    if(!found) // to create a new node and add it to the beginning of the list
    {
        Node* newNode = new Node;
        newNode -> value= v[i];
        newNode-> count=1;
        newNode-> next= head;
        head=newNode;
    }
}
}
void LinkedList::insertAfter(int firstValue, int secondValue)
{
    Node*curr=head;
    while(curr!=nullptr)
    {
        if(curr->value==firstValue) // create new node and insert it after the current one
        {
            Node* newNode= new Node; 
            newNode-> value =secondValue;
            newNode -> count =1;
            newNode->next=curr->next;
            curr->next=newNode;
            curr=curr->next; // move to the new added/ inserted node 
        }
        curr=curr->next;
    }
}
void LinkedList::printLinkedList() //print the elements of the list
{
    Node* curr = head;
    while (curr!=nullptr)
    {
        for(int i=0;i<curr->count;i++)
        {
            cout<<curr->value<<" ";
        }
        curr=curr-> next; 
    }
    cout<<endl;
}
int LinkedList::CalculateSum() // to calculate the sum of all nodes. 
{
    int sum=0;
    Node* curr = head;
    while(curr!=nullptr)
    {
        sum+=curr->value*curr->count;
        curr=curr->next;
    }
    return sum;
}