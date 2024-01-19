class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LQueue:
    def __init__(self):
        self.front = self.rear = None

    def enqueue(self, value):
        new_node = Node(value)
        if self.is_empty():
            self.front = self.rear = new_node
        else:
            self.rear.next = new_node
            self.rear = new_node

    def dequeue(self):
        if self.is_empty():
            print("Queue Underflow")
            return None
        else:
            item = self.front.data
            self.front = self.front.next
            if self.front is None:
                self.rear = None
            return item

    def is_empty(self):
        return self.front is None and self.rear is None


if __name__ == "__main__":
    my_queue = LQueue()

    for i in range(1, 10):
        my_queue.enqueue(i)

    print("Dequeue:", my_queue.dequeue())
    print("Is the queue empty?", "Yes" if my_queue.is_empty() else "No")
