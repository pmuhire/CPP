#include <iostream>
using namespace std;

class Node{
	public:
		int data;
	Node * next;
	public:
		Node() {
			this -> next = NULL;
		}
		Node(int data) {
			this -> data = data;
			this -> next = NULL;
		}
};

class LinkedList{
	public:
		Node * head;
	public:
		LinkedList() {
			head = NULL;
		}
	void addNewNode(int data) {
		Node * newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			return;
		}
		Node * temp = head;
		while(temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = newNode;
	}
	void deleteNode(int position){
		if (head==NULL)
		{
			cout<<"Empty list";
			return;
		}
		if (position==1)
		{
			Node *temp=head;
			head=head->next;
			delete temp;
			return;
		}
		Node *prev;
		Node *current=head;
		int count=this->size();
		if (count<position)
		{
			cout<<"Invalid operation"<<endl;
			return;
		}
		while (position>1)
		{
			prev=current;
			current=current->next;
			position--;
		}
		prev->next=current->next;
		delete current;
		
		
	}
	int size(){
		if (head==NULL) return 0;
		Node *current=head;
		int count=0;
		while (current->next!=NULL)
		{
			current=current->next;
			count++;
		}
		return count;
	}
	void display() {
		if (head == NULL) {
			cout << "Empty list " <<endl;
			return;
		}
		Node *current = head;
		while(current != NULL) {
			cout << current -> data << " ";
			current = current -> next;
		}
	}
};

int main() {
	LinkedList list;
	list.addNewNode(2);
	list.addNewNode(3);
	list.addNewNode(4);
	list.addNewNode(5);
	list.addNewNode(6);
	list.display();
	return 0;
}