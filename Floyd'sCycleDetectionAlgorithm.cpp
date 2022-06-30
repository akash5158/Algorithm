#include <bits/stdc++.h>
using namespace std;
 class N {
public:
    int data;
    N* next;
	N(int data)
    {
        this->data = data;
		  next = NULL;
    }
};
N* head = NULL;
class Linkedlist{
public:
    void insert(int value){
        N* newN = new N(value);
        if (head == NULL)
            head = newN;
        else {
            newN->next = head;
            head = newN;
        }
   }
    bool detectLoop(){
        N *slowPointer = head,
             *fastPointer = head;
 
        while (slowPointer != NULL
               && fastPointer != NULL
               && fastPointer->next != NULL) {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
            if (slowPointer == fastPointer)
                return 1;
        }
        return 0;
    }
};

int main(){
    Linkedlist l1;

    l1.insert(10);
    l1.insert(20);
    l1.insert(30);
    l1.insert(40);
	l1.insert(50);
    
    N* temp = head;

    while (temp->next != NULL)

        temp = temp->next;

    temp->next = head;
    if (l1.detectLoop())
        cout << "Loop exist in the Linked List" << endl;
    else
        cout << "Loop does not exist in the Linked List " << endl;
	return 0;
}
