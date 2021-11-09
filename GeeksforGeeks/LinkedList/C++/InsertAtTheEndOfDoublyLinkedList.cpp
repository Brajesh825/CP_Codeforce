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

Node *insertEnd(Node* head,int data)
{
	Node* temphead = head;
	Node* newNode = new Node(data);
	if(head==NULL)
		return newNode;
	while(temphead->next!=NULL)
	{
		temphead=temphead->next;
	}

	temphead->next=newNode;
	newNode->prev=temphead;
	return head;
}

int main()
{
	Node* head = insertEnd(head,10);
	head = insertEnd(head,20);
	head = insertEnd(head,30);
	cout<<head->data<<'\n';
	cout<<head->next->data<<'\n';
	cout<<head->next->next->data<<'\n';

}