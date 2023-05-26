#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLingkedList {
private:
	Node* START = NULL;
public:

	void addNode();
	bool search(int rolNo, Node** previous, Node** current);
	bool delNode(int rollNo);
	bool listEmpty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchData();
};

void DoubleLingkedList::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the Roll number of the student : ";
	cin >> nim;
	cout << "\nEnter the  name of the student : ";
	cin >> nm;

	Node* newNode = new Node(); //step 1
	newNode->noMhs = nim; //step2
	newNode->name = nm; //step 2

	/*insert a node ind the begining of a doubly - lingked list*/
	if (START == NULL || nim <= START->noMhs) { //check if data null
		if (START != NULL && nim == START->noMhs) {
			cout << "\nduplicate number not allowed" << endl;
			return;
		}
		newNode->next = START; //Step 3
		if (START != NULL)
			START->prev = newNode;	//step 4
		newNode->prev = NULL;	//
		START = newNode;	//step 6
		return;
	}

	/*inserting a node between two nodes in the list */
	Node* current = START;	//1.a
	Node* previous = NULL;	//1.b
	while (current->next != NULL && current->next->noMhs < nim)	//step1. c
	{
		previous = current; //1.d
		current = current->next; //1.e
	}
	if (current->next != NULL && nim == current->next->noMhs) {
		cout << "\nDuplicate roll numbers not allowed" << endl;
		return;
	}

	