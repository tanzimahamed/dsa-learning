class Stack:
    def __init__(self):
        self.items = []

    # push operation
    def push(self, item):
        self.items.append(item)
        print(f"Pushed: {item}")

    # pop operation
    def pop(self):
        if self.isEmpty():
            return "Stack is empty"
        return self.items.pop()

    # peek
    def peek(self):
        if self.isEmpty():
            return "Stack is empty"
        return self.items[-1]

    # check empty
    def isEmpty(self):
        return len(self.items) == 0

    # size
    def size(self):
        return len(self.items)


# using the stack
s = Stack()
s.push(10)
s.push(20)
s.push(30)

print("Top element:", s.peek())
print("Pop:", s.pop())
print("Size:", s.size())
print("Is empty?", s.isEmpty())
