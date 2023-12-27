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
Node* Insert (Node* head, int data, int n);

int main() {
    cout << "hi\n";

    Node* headNodeAddr = NULL;
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

    Node* head2 = NULL;
    cout << "How many numbers? ";
    cin >> n;


    for(int i = 0; i < n; i++) {
        cout << "enter number: ";
        int x;
        cin >> x;
        cout << "enter index (starting from 1): ";
        int y;
        cin >> y;
        head2 = Insert(head2 ,x, y); //or Insert(&head, x, y)
        Print(head2); 
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

Node* Insert (Node* head, int data, int n) {
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->link = NULL;
    if(n == 1) {
        temp1->link = head;
        head = temp1;
        return head;
    }
    Node* temp2 = head;
    for(int i = 0; i<n-2; i++) {
        temp2 = temp2->link;
    }
    temp1->link = temp2->link;
    temp2->link = temp1;
    return head;
}