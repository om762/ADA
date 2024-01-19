class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LStack:
    def __init__(self):
        self.top = None

    def push(self, value):
        new_node = Node(value)
        new_node.next = self.top
        self.top = new_node

    def pop(self):
        if self.is_empty():
            print("Stack Underflow")
            return None
        else:
            item = self.top.data
            self.top = self.top.next
            return item

    def is_empty(self):
        return self.top is None

    def peek(self):
        if self.is_empty():
            print("Stack Underflow")
            return None
        else:
            return self.top.data

if __name__ == "__main__":
    my_stack = LStack()

    for i in range(11):
        my_stack.push(i)

    print("Top element:", my_stack.peek())
    print("Is the stack empty?", "Yes" if my_stack.is_empty() else "No")
