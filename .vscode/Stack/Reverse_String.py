def reverse_string(s):
    stack = []
    for ch in s:
        stack.append(ch)

    rev = ""
    while stack:
        rev += stack.pop()
    return rev

print(reverse_string("hello"))   # olleh
