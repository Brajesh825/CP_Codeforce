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

int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->prev = head;
	head->next->next = new Node(30);
	head->next->next->prev = head->next;

	cout<<head->data<<" ";
	cout<<head->next->data<<" ";
	cout<<head->next->next->data<<" ";
}