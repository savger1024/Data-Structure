#include <stack> //Reverse + Stack
#include <cstring> //strlen(C)
#include <iostream>
#include <string>
using std::cout;
using std::cin;

//linked list + stacks
//insert and delete from the beginning

struct Node {
    int data;
    Node* link;
};
Node* top = NULL;

void Push(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;
}
void Pop() {
    Node *temp;
    if(top == NULL) return;
    temp = top;
    top = top->link;
    delete temp;
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

//Reverse a string: "hihi\0" \0: end of string
//Stack: 'h', 'i', 'h' 'i'
/*class Stack {
    private:
        char A[101];
        int top;
    public:
        void Push(int x);
        void Pop();
        void Top();
        bool IsEmpty();
};*/ //but we use #include <stack>
void Reverse(char *C, int n) {
    std::stack<char> S;
    for(int i =0; i<n; i++) {
        S.push(C[i]);
    }
    for(int i = 0; i<n; i++) {
        C[i] = S.top();
        S.pop();
    }
} //Time-complexity: O(n) //Space-comlexity: O(n)

//Reverse a linked list + Explicit(!) stack
void ReverseExplicit() {
    if(top == NULL) return;
    std::stack<Node*> S;
    Node* temp = top;
    while(temp != NULL) {
        S.push(temp);
        temp = temp->link;
    }
    temp = S.top(); top = temp;
    S.pop();
    while(!S.empty()) {
        temp->link = S.top();
        S.pop();
        temp = temp->link;
    }
    temp->link = NULL;
} //time-complexity: O(n) // space-complexity: O(n)

int main() {
    cout << "hi\n";

    Push(2); Print(top);
    Push(5); Print(top);
    Pop(); Print(top);

    char C[51];
    cout << "Enter a string: ";
    cin >> C;
    cout << C << '\n';
    Reverse(C, strlen(C));
    cout << C << '\n';

    Push(7);
    Push(9);
    Print(top);
    ReverseExplicit();
    Print(top);

    int end;
    cin >> end;
    return 0;
}