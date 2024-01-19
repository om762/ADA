class AStack<T>
{
    private static final int MAX_SIZE = 100;
    private T stack[];
    private int top;
    
    @SuppressWarnings("unchecked")
    public AStack()
    {
        stack = (T[]) new Object[MAX_SIZE];
        top = -1;
    }

    public boolean push(T value) 
    {
        if (top >= MAX_SIZE)
        {
            System.out.println("Stack OverFlow");
            return false;
        }
        else 
        {
            top++;
            stack[top] = value;
            return true;
        }
    }

    public T pop()
    {
        if (top < 0)
        {
            System.out.println("Stack UnderFlow");
            return null; // Adjust return type based on your requirements
        } 
        else
        {
            T item = stack[top];
            top--;
            return item;
        }
    }

    public boolean isEmpty()
    {
        return top < 0;
    }

    public boolean isFull()
    {
        return top >= MAX_SIZE - 1;
    }

    public T peek()
    {
        if (top < 0)
        {
            System.out.println("Stack UnderFlow");
            return null; // Adjust return type based on your requirements
        }
        else
        {
            return stack[top];
        }
    }
}


class Stack
{
    public static void main(String[] args)
    {
        AStack<Integer> myStack = new AStack<>();

        for (int i = 0; i <= 10; i++)
        {
            myStack.push(i);
        }

        System.out.println("Top element: " + myStack.peek());
        System.out.println("Is the stack empty? " + (myStack.isEmpty() ? "Yes" : "No"));
        System.out.println("Is the stack full? " + (myStack.isFull() ? "Yes" : "No"));
    }
}
