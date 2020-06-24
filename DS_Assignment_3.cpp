#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
};
void display(node *head){ //display function
	node *current = head; // assigns the first current node as the head
	while (current != NULL && current->next != NULL) { // repeats until it reaches the end of the list
		cout << current -> data << "->";
		current = current -> next;
	}
	cout << current->data << endl;
}
void remove_duplicates(node *head) {// duplicates removal function
	node *current = head; // assigns the first current node as the head
	node *link; // new variable as a node
	while (current != NULL && current->next != NULL) { //repeats until it reaches the end of the list
		if (current->data == current->next->data){ // checking if the current value is same as the next one
			link = current->next->next; // if they are same then the link variable is connecting to the 2nd next data
			current -> next = link; // link is holding that data
		}
		if (current -> data != current ->next->data) { // this is for if the value repeats twice in the linked list
			current = current -> next;
		}
	}
}
int main() {
    int x;
    node *head = NULL; // head is nothing at the begining
    cout << "Enter list: ";
	while(cin >> x) { // while the user enters x value
		if (x < 50) {
			node *q = head; //q node is the head
			node *p = NULL; //p node is nothing
			while (q != NULL && q->data < x) { //this is where node swapping happens from least to greatest
				p = q;
				q = q->next;
			}
			node *current = new node;
			current -> next = q;
			current -> data = x;
			if (p == NULL){
				head = current;
			}
			else {
				p -> next = current;
			}
		}
		else {cout << "Try less than 50. Only less than 50 is accepted like below" << endl; break;}
	}
	cout << "Entered list: ";
	display(head);
	cout << "Modified List: ";
	remove_duplicates(head);
	display(head);
	return 0;
}
