#ifndef LINKED_LIST_H
#define LINKED_LIST_H




class LinkedList{

    private:
        typedef struct Node
        {
            int data;
            Node* next;

            // Node Constructor
            Node(int data, Node* next = nullptr){
                this-> data = data;
                this-> next = next;
            }
        };

        Node* head;
        int size;


    public:
        //Constructor
        LinkedList();

        //Destructor 
        ~LinkedList();

        //Insert at end
        void append(int data);


        //Insert at start of list
        void prepend(int data);
        

        //Remove data
        void remove(int delData);


        void PrintList();



    


};





#endif