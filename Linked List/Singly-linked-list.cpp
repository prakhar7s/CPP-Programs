#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node *next;

	Node(int d) {
		data = d;
		next = NULL;
	}
};

Node* insert(Node *head, int data) {
	Node* x = new Node(data);
	if(head==NULL) { //LL not created
		head=x;
	} else { //LL already created
		Node *last;
		for(last=head; last->next!=NULL; last=last->next);
		last->next=x;
	}
	return head;
}

void display(Node *head) {
	if(head==NULL) {
		cout<<"LinkedList is empty..."<<endl;
	}
	else {
		for(Node *start=head; start!=NULL; start=start->next) {
			cout<<start->data<<endl;
		}
	}
}

int main() {
	int n, x;
	Node* head = NULL;
	cin>>n;
	while(n-->0) {
		cin>>x;
		head = insert(head, x);
	}
	display(head);
}
