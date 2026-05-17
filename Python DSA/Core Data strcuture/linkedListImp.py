class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


node1 = Node("A")
node2 = Node("B")
node3 = Node("C")

node1.next = node2
node2.next=node3

current = node1
while current is not None:
    print(f"|{current.data}",end= "->")
    current = current.next