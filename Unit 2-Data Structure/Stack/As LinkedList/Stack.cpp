#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T>* next;

    Node(T value) : data(value), next(nullptr) {}
};

template <typename T>
class LStack
{
private:
    Node<T>* top;

public:
    LStack() : top(nullptr) {}

    void push(T value)
    {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = top;
        top = newNode;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return T();
        } else
        {
            T item = top->data;
            Node<T>* temp = top;
            top = top->next;
            delete temp;
            return item;
        }
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    T peek() {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return T();
        } else
        {
            return top->data;
        }
    }
};

int main()
{
    LStack<int> myStack;

    for (int i = 0; i <= 10; i++)
    {
        myStack.push(i);
    }

    cout << "Top element: " << myStack.peek() << endl;
    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
