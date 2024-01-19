class AQueue<T>
{
    private static final int MAX_SIZE = 100;
    private T queue[];
    private int front, rear;

    @SuppressWarnings("unchecked")
    public AQueue() {
        queue = (T[]) new Object[MAX_SIZE];
        front = rear = -1;
    }

    public void enqueue(T value) {
        if (isFull()) {
            System.out.println("Queue Overflow");
        } else {
            if (isEmpty()) {
                front = rear = 0;
            } else {
                rear = (rear + 1) % MAX_SIZE;
            }
            queue[rear] = value;
        }
    }

    public T dequeue() {
        if (isEmpty()) {
            System.out.println("Queue Underflow");
            return null;
        } else {
            T item = queue[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % MAX_SIZE;
            }
            return item;
        }
    }

    public boolean isEmpty() {
        return front == -1 && rear == -1;
    }

    public boolean isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }
}


class Queue
{
    public static void main(String[] args)
    {
            AQueue<Integer> myQueue = new AQueue<>();

            for (int i = 1; i < 10; i++)
            {
                myQueue.enqueue(i);
            }

            System.out.println("Dequeue: " + myQueue.dequeue());
            System.out.println("Is the queue empty? " + (myQueue.isEmpty() ? "Yes" : "No"));
        }
    }
