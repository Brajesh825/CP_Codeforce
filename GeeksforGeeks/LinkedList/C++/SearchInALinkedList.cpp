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

Node* insert(Node* head,int position,int data)
{
	Node* temp=new Node(data);
	if(position==1)
	{
		temp->next=head;
		return temp;
	}
	Node *curr = head;

	for (int i = 1; i <= position-2&&curr!=NULL; ++i)
	{
		curr=curr->next;
	}
	if(curr==NULL)
		return head;

	temp->next = curr ->next;
	curr->next = temp;
	return head;

}

int searchIterative(Node* head ,int x)
{
	Node* curr = head;

	int pos=1;
	while(curr!=NULL)
	{
		if(curr->data==x)
			return pos;

		curr=curr->next;
		pos++;
	}
	return -1;
}

int searchRecursive(Node* head ,int x)
{
	if(head==NULL)return -1;
    if(head->data==x)return 1;
    else{
        int res=searchRecursive(head->next,x);
        if(res==-1)return -1;
        else return res+1;
    }
}


int main()
{
	Node* head = NULL;
	head=insertAtTheEnd(head,10);
	head=insertAtTheEnd(head,20);
	head=insertAtTheEnd(head,30); 
	printList(head);
	
	cout<<searchRecursive(head,20);
	return 0; 
}