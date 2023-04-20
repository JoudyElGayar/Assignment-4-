#include <iostream>
#include<vector>
#include "LinkedList.cpp"
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of integers:"<<endl;
    cin>>n;
    vector<int>v(n); // takes n from the user and store it in a vector 
    cout<<"Enter the integers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    LinkedList list; // creation of a list with the elements of the vector 
    list.createLinkedList(v);
    cout<<"Intital linked list: "<<endl;
    list.printLinkedList(); // print the initial linked list

    int firstValue, secondValue;
    cout<<"Enter the first value: "<<endl;
    cin>>firstValue;
    cout<<"Enter the second value: "<<endl;
    cin>>secondValue;  // user entry of first and second value 
    list.insertAfter(firstValue, secondValue); // insert the second value after each occurence of first value in the linked list. 
    cout<<"Updated linked list:"<<endl; // print the updated linked list. 
    list.printLinkedList();
    int sum= list.CalculateSum(); // to calculate the sum of all the nodes in this linked list.
    cout<<"Sum of all nodes in the linked list : "<<sum <<endl;
return 0; 


}