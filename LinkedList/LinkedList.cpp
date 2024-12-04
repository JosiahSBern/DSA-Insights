#include <LinkedList.h>
#include <iostream>


using namespace std;



LinkedList::LinkedList(){

    head = nullptr;
    size = 0;

}


void LinkedList::append(int data){
    Node* n = new Node(data);
    

    if(head == nullptr){
        head = n;
    }
    else{
        Node* current = head;

        while(current->next != nullptr){
            current = current -> next;
        }
        current-> next = n;

}

size++;

}




void LinkedList::remove(int delData){
 
    Node* current = head;
    Node* prev = nullptr;
    while(current->next != nullptr && current->data != delData){
            prev = current;
            current = current -> next;
        }
    if(current == NULL){
        cout << delData << "Not Found in list" << endl;
    }


    prev->next = current->next;
    size--;
}