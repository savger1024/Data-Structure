#include <iostream>
#include <string>
using std::cout;
using std::cin;

//linked list
struct Node {
    int data;
    Node* link;
};

Node* Insert (Node* head, int x);
void Print(Node* head);

int main() {
    cout << "hi\n";

    Node* headNodeAddr = headNodeAddr = NULL;
    cout << "How many numbers? ";
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "enter number: ";
        int x;
        cin >> x;
        headNodeAddr = Insert(headNodeAddr ,x); //or Insert(&head, x)
        Print(headNodeAddr); 
    }

    int end;
    cin >> end;
    return 0;
}

Node* Insert(Node* head, int x){ //or void Insert (Node** pointerHead, int x)
    Node* temp = new Node();
    //Node* temp = (Node* /*type casting*/)malloc/*variable creation*/(sizeof(Node)); //C

    //(*temp /*dereferencing*/).data = 2;
    temp->data = x;
    //(*temp).link = NULL;
    temp->link = head;
    head = temp; //or *pointerHead = temp etc.
    return head;
}
void Print(Node* head) {
    Node* temp = head;
    //traversal(?)
    cout << "List is: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << '\n';
}