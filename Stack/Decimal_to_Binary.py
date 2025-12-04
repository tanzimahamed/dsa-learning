def dec_to_bin(n):
    stack = []

    while n > 0:
        stack.append(n % 2)
        n //= 2

    binary = ""
    while stack:
        binary += str(stack.pop())

    return binary

print(dec_to_bin(10))   # 1010
