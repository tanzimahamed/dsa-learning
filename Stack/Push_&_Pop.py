stack = []

stack.append(10)   # push
stack.append(20)
stack.append(30)

print(stack)       # [10, 20, 30]

top = stack.pop()  # pop → 30
print("Popped:", top)
print(stack)       # [10, 20]
