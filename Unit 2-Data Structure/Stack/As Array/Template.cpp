#include <iostream>
#include <vector>

template <typename T>
class Stack 
{
private:
    std::vector<T> elements;

public:
    void push(const T& value)
    {
        elements.push_back(value);
    }

    void pop()
    {
        if (!isEmpty()) {
            elements.pop_back();
        } else {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    // Function to get the top element of the stack
    T top() const {
        if (!isEmpty()) {
            return elements.back();
        } else {
            std::cerr << "Stack is empty." << std::endl;
            // Returning a default-constructed value of type T.
            return T();
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }

    // Function to get the size of the stack
    size_t size() const {
        return elements.size();
    }
};

int main() {
    // Example usage of the Stack class
    Stack<int> intStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Top element: " << intStack.top() << std::endl;

    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl;

    std::cout << "Is the stack empty? " << (intStack.isEmpty() ? "Yes" : "No") << std::endl;

    std::cout << "Stack size: " << intStack.size() << std::endl;

    return 0;
}
