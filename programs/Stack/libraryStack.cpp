#include <iostream>
using namespace std;

int top=-1;
const int n=1000;
struct libraryStack
{
    char name[100];
    int price;
    int ISBN;
    char desc[1000];
};
libraryStack soldBooks[];

int isEmpty(){
     if (top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(){
    if (top == n - 1)
    {
        return 1;
    }
    return 0;
}
void push(int data)
{
    if (isFull())
    {
        cout << "Stack overflow" << endl;
    }
    top++;
    
}
void pop()
{
    if (isEmpty())
    {
        cout << "Stack underflow" << endl;
    }
    // cout << "The poped element is " << stack[top] << endl;
    top--;
}

int peek()
{
    if (!isEmpty())
    {
        // return stack[top];
    }
    return INT8_MIN;
}

void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are :" << endl;
        for (int i = top; i >= 0; i--)
        {
            // cout << stack[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "The stack is emty"<<endl;
    }
}

