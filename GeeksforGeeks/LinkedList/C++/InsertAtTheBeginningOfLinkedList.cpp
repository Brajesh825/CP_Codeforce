#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;

	Node(int x)
	{
		data=x;
		next=NULL;	
	}
};

void printList(Node* head)
{
	Node * curr = head;
	while(curr!=NULL)
	{
		cout<<curr->data<<' ';
		curr=curr->next;
	}
}

Node* insertAtTheBeginning(Node* head,int data)
{
	Node* temp = new Node(data);
	temp->next=head;
	return temp;
}

int main()
{
	Node* head = NULL;
	head = insertAtTheBeginning(head,20);
	head = insertAtTheBeginning(head,30); 
	printList(head);
	return 0; 
}