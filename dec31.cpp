#include <iostream>
#include <string>
using std::cout;
using std::cin;
//stacks
//Tower of Hanoi
//Only the top accessible
//Last In First Out LIFO
// Stack: A list, where
// Insertions and deletions are performed from one end
//Push(x); Pop(); Top(); IsEmpty(); → O(1)
//"Undo" works like that in any editor
//Dynamic Array, Push: Worst case is O(n) (create larger array), but average case is O(1)

const int MAX_SIZE = 101;
int arr[MAX_SIZE];
int top = -1;
//stacks  + static array
void Push(int x) {
    if(top == MAX_SIZE-1) {
        cout << "Error: Stack overflow\n";
        return;
    }
    arr[++top] = x;
}
void Pop() {
    if(top == -1) {
        cout << "Error: No element to pop\n";
        return;
    }
    top--;
}
int GetTop() {
    return arr[top];
}
void Print() {
    int i;
    cout << "Stack: ";
    for(i=0; i<top; i++)
        cout << arr[i] << " ";
    cout << '\n';
}

int main() {
    cout << "hi\n";
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Pop(); Print();
    Push(12); Print();

    int end;
    cin >> end;
    return 0;
}