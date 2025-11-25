class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def insert_at_head(self, data):
        new = Node(data)
        new.next = self.head
        self.head = new

    def insert_at_tail(self, data):
        new = Node(data)
        if self.head is None:
            self.head = new
            return
        
        cur = self.head
        while cur.next:
            cur = cur.next
        cur.next = new

    def print_list(self):
        cur = self.head
        while cur:
            print(cur.data, end=" -> ")
            cur = cur.next
        print("None")


# Example
s = SinglyLinkedList()
s.insert_at_head(30)
s.insert_at_head(20)
s.insert_at_tail(40)
s.print_list()
