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

class LStack<T>
{
    private Node<T> top;

    public LStack()
    {
        this.top = null;
    }

    public void push(T value)
    {
        Node<T> newNode = new Node<>(value);
        newNode.next = top;
        top = newNode;
    }

    public T pop()
    {
        if (isEmpty())
        {
            System.out.println("Stack Underflow");
            return null;
        } else {
            T item = top.data;
            top = top.next;
            return item;
        }
    }

    public boolean isEmpty()
    {
        return top == null;
    }

    public T peek()
    {
        if (isEmpty()) {
            System.out.println("Stack Underflow");
            return null;
        } else {
            return top.data;
        }
    }

}

class Stack
{
    public static void main(String[] args)
    {
        LStack<Integer> myStack = new LStack<>();

        for (int i = 0; i <= 10; i++)
        {
            myStack.push(i);
        }

        System.out.println("Top element: " + myStack.peek());
        System.out.println("Is the stack empty? " + (myStack.isEmpty() ? "Yes" : "No"));
    }
}
