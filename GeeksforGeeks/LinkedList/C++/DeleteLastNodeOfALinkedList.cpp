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
	cout<<'\n';
}

Node* insertAtTheBeginning(Node* head,int data)
{
	Node* temp = new Node(data);
	temp->next=head;
	return temp;
}

Node* insertAtTheEnd(Node* head,int data)
{
	if(head==NULL)
	{
		head = new Node(data);
		return head;
	}
	else
	{
		Node* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;

		temp->next= new Node(data);
		return head;
	}
}

Node* deleteFirstNode(Node* head)
{
	if(head==NULL){
		return head;
	}
	else{
		Node* temp=head->next;
		delete head;
		return temp;
	}
}

Node* deleteLastNode(Node* head)
{
	if(head==NULL){
		return head;
	}
	else if(head->next==NULL)
	{
			delete head;
			return NULL;
	}
	else{
		Node* temp=head;
		while(temp->next->next!=NULL)
			temp=temp->next;

		delete temp->next;
		temp->next=NULL;
		return head;
	}
}

int main()
{
	Node* head = NULL;
	head=insertAtTheEnd(head,10);
	head=insertAtTheEnd(head,20);
	head=insertAtTheEnd(head,30); 
	printList(head);
	head=deleteLastNode(head);
	printList(head);
	head=deleteLastNode(head);
	printList(head);
	head=deleteLastNode(head);
	printList(head);
	return 0; 
}