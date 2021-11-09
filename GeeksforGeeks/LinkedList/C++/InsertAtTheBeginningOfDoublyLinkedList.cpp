#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* prev;
	Node* next;

	Node(int d){
		data=d;
		prev=NULL;
		next=NULL;
	}
};

Node *insertBegin(Node* head,int data)
{
	Node* newNode = new Node(data);
	if(head==NULL){
		return newNode;
	}
	newNode->next=head;
	head->prev=newNode;
		return newNode;
}

int main()
{
	Node* head = new Node(10);
	head = insertBegin(head,20);

	cout<<head->data<<'\n';
	cout<<head->next->data<<'\n';
	cout<<head->next->prev->data<<'\n';

}