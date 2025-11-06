class Node:
    def __init__(self, data) -> None:
        self.data = data  #storing data
        self.next = None # pointer to the next node


#creating the nodes

node1 = Node(10)
node2 = Node(20)
node3 = Node(30)

#linking the nodes
node1.next = node2
node2.next = node3


class LinkedList:
    def __init__(self) -> None:
        self.head = None
    
    def print_list(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        
        print("none")


l1 = LinkedList()
l1.head = Node(10)
second = Node(20)
third = Node(30)

#linking them
l1.head.next = second
second.next = third

l1.print_list()