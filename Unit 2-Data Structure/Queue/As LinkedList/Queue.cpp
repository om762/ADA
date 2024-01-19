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
class LQueue
{
private:
    Node<T>* front;
    Node<T>* rear;

public:
    LQueue() : front(nullptr), rear(nullptr) {}

    void enqueue(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (isEmpty())
        {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    T dequeue() {
        if (isEmpty())
        {
            cout << "Queue Underflow" << endl;
            return T(); // Adjust return type based on your requirements
        } else {
            T item = front->data;
            Node<T>* temp = front;
            front = front->next;
            if (front == nullptr)
            {
                rear = nullptr;
            }
            delete temp;
            return item;
        }
    }

    bool isEmpty() {
        return front == nullptr && rear == nullptr;
    }
};

int main()
{
    LQueue<int> myQueue;

    for (int i = 1; i < 10; i++)
    {
        myQueue.enqueue(i);
    }

    cout << "Dequeue: " << myQueue.dequeue() << endl;
    cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
