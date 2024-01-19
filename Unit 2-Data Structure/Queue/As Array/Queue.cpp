#include <iostream>

using namespace std;

template <typename T>
class AQueue
{
private:
    static const int MAX_SIZE = 100;
    T queue[MAX_SIZE];
    int front, rear;

public:
    AQueue() : front(-1), rear(-1) {}

    void enqueue(T value)
    {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
        } else {
            if (isEmpty()) {
                front = rear = 0;
            } else {
                rear = (rear + 1) % MAX_SIZE;
            }
            queue[rear] = value;
        }
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow" << endl;
            return T();
        } 
        else
        {
            T item = queue[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % MAX_SIZE;
            }
            return item;
        }
    }

    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }

    bool isFull()
    {
        return (rear + 1) % MAX_SIZE == front;
    }
};

int main()
{
    AQueue<int> myQueue;

    for (int i = 1; i < 10; i++)
    {
        myQueue.enqueue(i);
    }

    cout << "Dequeue: " << myQueue.dequeue() << endl;
    cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
