#include <iostream>
#include <string>
#include "h1.hpp"

using namespace std;

int main(){
    ListNode Linkedlist; 
    Linkedlist.insertfront(1000);
    Linkedlist.insertfront(19);
    Linkedlist.insertfront(80);
    Linkedlist.insertattheend(10);
    Linkedlist.insert(2,22);
    Linkedlist.print();
    cout<<(Linkedlist.search(80));
    Linkedlist.swapNode(2,3);
    Linkedlist.print();
    Linkedlist.swapValue(3,4);
    Linkedlist.print();
}