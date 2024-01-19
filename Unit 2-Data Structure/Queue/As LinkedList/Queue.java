class Node<T>
{
    T data;
    Node<T> next;

    public Node(T data)
    {
        this.data = data;
        this.next = null;
    }
}

class LQueue<T>
{
    private Node<T> front, rear;

    public LQueue()
    {
        front = rear = null;
    }

    public void enqueue(T value)
    {
        Node<T> newNode = new Node<>(value);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear.next = newNode;
            rear = newNode;
        }
    }

    public T dequeue()
    {
        if (isEmpty())
        {
            System.out.println("Queue Underflow");
            return null; // Adjust return type based on your requirements
        }
        else
        {
            T item = front.data;
            front = front.next;
            if (front == null)
            {
                rear = null;
            }
            return item;
        }
    }

    public boolean isEmpty()
    {
        return front == null && rear == null;
    }
}

public class Queue
{
    public static void main(String[] args)
    {
        LQueue<Integer> myQueue = new LQueue<>();

        for (int i = 1; i < 10; i++)
        {
            myQueue.enqueue(i);
        }

        System.out.println("Dequeue: " + myQueue.dequeue());
        System.out.println("Is the queue empty? " + (myQueue.isEmpty() ? "Yes" : "No"));
    }
}
