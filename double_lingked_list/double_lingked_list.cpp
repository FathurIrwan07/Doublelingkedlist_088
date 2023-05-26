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
	bool deNode(int rollNo);
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

	