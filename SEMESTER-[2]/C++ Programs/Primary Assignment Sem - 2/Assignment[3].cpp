/* Write a program to implement linked list.
Include functions for insertion, deletion and search of a number,
reverse the list and concatenate two linked lists (include a function
and also overload operator +) */
#include<iostream>
using namespace std;
class Node{
    public:
        int info;
        Node *next;
        Node(int val){
            info = val;
            next = NULL;
        }
};
class SL{
    private:
        Node *head;
    public:
        SL(){
            head = NULL;
        }
        void insertBegin(int n){
            Node *ptr = new Node(n);
            ptr->next = head;
            head = ptr;
            cout<<"\nInserted "<<n<<" at the beginning.";
        }
        void insertEnd(int n){
            Node *ptr = new Node(n);
            if(head==NULL) head = ptr;
            else{
                Node *t = head;
                while(t->next!=NULL)
                    t = t->next;
                t->next = ptr;
            }
            cout<<"\nInserted "<<n<<" at the end.";
        }
        void display(){
            Node *t = head;
            cout<<"\nThe list : ";
            while(t!=NULL){
                cout<<t->info<<" ";
                t = t->next;
            }
        }
};
int main(){
    SL *obj;
    obj->insertBegin(13);
    obj->display();
    obj->insertEnd(19);
    obj->display();
    return 0;
}