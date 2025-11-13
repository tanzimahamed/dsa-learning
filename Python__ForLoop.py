# for variable in sequence:
    
#For loop with Range
# for i in range(stop):               # 0 → stop-1 পর্যন্ত
# for i in range(start, stop):        # start → stop-1 পর্যন্ত
# for i in range(start, stop, step):  # step করে যাবে
for i in range(2, 10, 2):
    print(i)


#For loop with List 
fruits = ["apple", "banana", "mango"]

for fruit in fruits:
    print(fruit)



#for loop with String 
word = "HELLO"

for ch in word:
    print(ch)



#For loop with Tuple 
nums = (10, 20, 30)

for n in nums:
    print(n)




#For loop with Set
myset = {1, 2, 3, 4}

for val in myset:
    print(val)



#For loop with Dictionary 
student = {"name": "Tanzim", "age": 20}

for key in student:          # শুধু key
    print(key)

for value in student.values():  # শুধু value
    print(value)

for key, value in student.items(): # key + value
    print(key, ":", value)




#Nested For loop 
for i in range(3):
    for j in range(2):
        print("i =", i, "j =", j)



# For Loop with Break
for i in range(10):
    if i == 5:
        break
    print(i)



#For Loop with Continue
for i in range(5):
    if i == 2:
        continue
    print(i)



#For Loop with Else
for i in range(5):
    print(i)
else:
    print("Loop Finished!")



#For Loop with Zip
names = ["Tanzim", "Rahim", "Karim"]
ages = [20, 21, 22]

for name, age in zip(names, ages):
    print(name, "is", age, "years old")
