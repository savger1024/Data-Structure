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


int main() {
    cout << "hi\n";

    Push(2); cout << top->data << " " << top->link << '\n';
    Push(5); cout << top->data << " " << top->link << '\n';
    Pop();  cout << top->data << " " << top->link << '\n';

    int end;
    cin >> end;
    return 0;
}