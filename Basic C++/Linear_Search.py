# def linearSearch(arr, targetVal):
#     for i in range(len(arr)):   # পুরো array লুপ করা
#         if arr[i] == targetVal: # মিল আছে কিনা চেক করা
#             return i            # মিলে গেলে index return
#     return -1                   # না পেলে -1 return

# # Test করা যাক
# arr = [3, 7, 2, 9, 5]
# targetVal = 9

# result = linearSearch(arr, targetVal)

# if result != -1:
#     print("Value", targetVal, "found at index", result)
# else:
#     print("Value", targetVal, "not found")








def linear_Search(arr,targetVal):
    for i, val in enumerate(arr):
        if val==targetVal:
            return i
    return -1

arr = [10, 15, 26, 30, 45, 60]
targetVal = 30 


result= linear_Search(arr,targetVal)

if result !=-1 :
    print (targetVal,'found at index', result)
else:
    print(targetVal,"not found")    















def linearSearch(arr, targetVal):
    for i, val in enumerate(arr):   # index + value একসাথে নিলাম
        if val == targetVal:        # মিললে return
            return i
    return -1                       # না মিললে -1 return

# আমাদের দেওয়া array
arr = [10, 15, 25, 30, 45, 60]
targetVal = 30

# function call
result = linearSearch(arr, targetVal)

# output
if result != -1:
    print("Value", targetVal, "found at index", result)
else:
    print("Value", targetVal, "not found")
