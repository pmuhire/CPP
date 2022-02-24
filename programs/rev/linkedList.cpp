#include <iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
    public: 
        Node(){
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Linkedlist{
    public: 
        Node *head;
    public: 
        Linkedlist(){
            this->head = NULL;
        }
        void addNewNode(int data){
            Node *newNode = new Node(data);
            if(this->head == NULL){
                head = newNode;
                return;
            }
            Node *current = head;
            while(current->next != NULL){
                current = current->next;
            }
            current->next = newNode;
        }
        void deleteNode(int position){
            if(head == NULL){
                cout<<"Empty list"<<endl;
                return;
            }
            if(position == 1){
                Node *temp = head;
                head = head->next;
                delete temp;
                return;
            }
            Node *previous;
            Node *current = head;
            int nodesCount = this->size();
            if(nodesCount < position){
                cout<<"Invalid operation"<<endl;
                return;
            }
            while(position > 1){
                previous = current;
                current = current->next;
                position--;
            }
            previous->next = current->next;
            delete current;
        }

        void insertNode(int position, int data){
            Node *newNode = new Node(data);
            if(this->head == NULL){
                if(position > 1){
                    cout<<"Invalid operation"<<endl;
                    return;
                }
                head = newNode;
                return;
            }
            if(position == 1){
                Node *temp = head;
                newNode->next = temp;
                head = newNode;
                return;
            }
            Node *current = head;
            int size = this->size(); 
            if(size < position){
                cout<<"Invalid operation"<<endl;
                return;
            } 
            Node *previous;
            current = head;
            while(position > 1){
                position--;
                previous = current;
                current = current->next;
            }
            previous->next = newNode;
            newNode->next = current;
        }
        Node *findByPosition(int position){
            if(this->head == NULL) return NULL;
            int count = 0;
            Node *current = head;
            while(current != NULL){
                count++;
                if(count == position)
                    return current;
                current = current->next;
            }
            cout<<"Position beyond the size of the list."<<endl;
            return NULL;
        }
        int size(){
            if(head == NULL) return 0;
            Node *current = head;
            int count = 0;
            while(current != NULL){
                current = current->next;
                count++;
            }
            return count;
        }
        void display(){
            if(this->head == NULL){
                cout<<"Empty list"<<endl;
                return;
            }
            Node *current = this->head;
            while(current != NULL){
                cout<<current->data<<endl;
                current = current->next;
            }
        }
};


int main(){
    // cout<<"Hello World"<<endl;
    Linkedlist list;
    list.addNewNode(2);
    list.addNewNode(5);
    list.addNewNode(10);
    cout<<list.findByPosition(2)<<endl;
    // list.display();
    // list.insertNode(1, 12);
    // cout<<"After insertion"<<endl;
    // list.display();
}