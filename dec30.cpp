#include <string>
#include <iostream>
using std:: cout;
using std:: cin;

struct Node {
    int data;
    Node* next;
    Node* prev;
};
struct Node* head;

void InsertAtHead(int x);
void Print() {
    Node* temp = head;
    cout << "Forward: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << '\n';
}
void ReversePrint() {
    Node* temp = head;
    if(temp == NULL) return;
    while(temp->next != NULL) {
        temp = temp->next; 
    }
    cout << "Reverse: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << '\n';
}

int main() {
    cout << "hi\n";

    InsertAtHead(2);
    InsertAtHead(4);
    Print();
    ReversePrint();

    int n;
    cin >> n;
    return n;
}

Node* GetNewNode(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void InsertAtHead(int x) {
    Node* newNode = GetNewNode(x);
    if(head == NULL) {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}