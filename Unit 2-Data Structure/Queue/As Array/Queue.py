class AQueue:
    MAX_SIZE = 100

    def __init__(self):
        self.queue = [None] * self.MAX_SIZE
        self.front = self.rear = -1

    def enqueue(self, value):
        if self.is_full():
            print("Queue Overflow")
        else:
            if self.is_empty():
                self.front = self.rear = 0
            else:
                self.rear = (self.rear + 1) % self.MAX_SIZE
            self.queue[self.rear] = value

    def dequeue(self):
        if self.is_empty():
            print("Queue Underflow")
            return None
        else:
            item = self.queue[self.front]
            if self.front == self.rear:
                self.front = self.rear = -1
            else:
                self.front = (self.front + 1) % self.MAX_SIZE
            return item

    def is_empty(self):
        return self.front == -1 and self.rear == -1

    def is_full(self):
        return (self.rear + 1) % self.MAX_SIZE == self.front


if __name__ == "__main__":
    my_queue = AQueue()

    for i in range(1, 10):
        my_queue.enqueue(i)

    print("Dequeue:", my_queue.dequeue())
    print("Is the queue empty?", "Yes" if my_queue.is_empty() else "No")
