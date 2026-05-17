from collections import deque


class Queue:
    def __init__(self):
        self.item = deque()

    def enqueue(self, item):
        self.item.append(item)

    def dequeue(self):
        if not self.item:
            return None
        self.item.popleft()

    def peek(self):
        if not self.item:
            return None

        return self.item[0]


q = Queue()

q.enqueue(20)
q.enqueue(23)
q.enqueue(21)
print(q.item)

q.dequeue()
print(q.item)

print(q.peek())
