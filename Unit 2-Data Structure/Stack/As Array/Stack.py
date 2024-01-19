class AStack:
    MAX_SIZE = 100

    def __init__(self):
        self.stack = [None] * self.MAX_SIZE
        self.top = -1

    def push(self, value):
        if self.top >= self.MAX_SIZE - 1:
            print("Stack Overflow")
            return False
        else:
            self.top += 1
            self.stack[self.top] = value
            return True

    def pop(self):
        if self.top < 0:
            print("Stack Underflow")
            return None  # Adjust return type based on your requirements
        else:
            item = self.stack[self.top]
            self.top -= 1
            return item

    def is_empty(self):
        return self.top < 0

    def is_full(self):
        return self.top >= self.MAX_SIZE - 1

    def peek(self):
        if self.top < 0:
            print("Stack Underflow")
            return None  # Adjust return type based on your requirements
        else:
            return self.stack[self.top]

if __name__ == "__main__":
    my_stack = AStack()

    for i in range(11):
        my_stack.push(i)

    print("Top element:", my_stack.peek())
    print("Is the stack empty?", "Yes" if my_stack.is_empty() else "No")
    print("Is the stack full?", "Yes" if my_stack.is_full() else "No")
