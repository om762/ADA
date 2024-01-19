#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

template <typename T>
class Stack
{
private:
    T stack[MAX_SIZE];
    int top = -1;

public:
    bool push(const T &value)
    {
        if (top >= MAX_SIZE)
        {
            cout << "Stack OverFlow" << endl;
            return false;
        }
        else
        {
            top = top + 1;
            stack[top] = value;
            return true;
        }
    }

    T pop()
    {
        if (top < 0)
        {
            cout << "Stack UnderFlow" << endl;
            return T();
        }
        else
        {
            T item = stack[top];
            top = top - 1;
            return item;
        }
    }

    bool isEmpty() const
    {
        if (top < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull() const
    {
        if (top >= MAX_SIZE - 1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    T peek() const
    {
        if (top < 0)
        {
            cout << "Stack UnderFlow" << endl;
            return T();
        }
        else
        {
            return stack[top];
        }
    }
};

int main()
{
    Stack<int> myStack;

    for (int i = 0; i <= 10; i++)
    {
        myStack.push(i);
    }

    cout << "Top element: " << myStack.peek() << endl;
    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is the stack full? " << (myStack.isFull() ? "Yes" : "No") << endl;
}