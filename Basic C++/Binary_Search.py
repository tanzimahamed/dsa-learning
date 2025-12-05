def binarySearch(arr, target):
    low = 0
    high = len(arr) - 1

    # log2(n) এর মধ্যে target পাওয়া না গেলে, -1 return হবে
    for _ in range(len(arr)):   # worst case এ n step এর বেশি লাগবে না
        if low > high:
            break   # search space শেষ হয়ে গেছে

        mid = (low + high) // 2
        print(f"low={low}, high={high}, mid={mid}, arr[mid]={arr[mid]}")

        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1   # 👉 right half
        else:
            high = mid - 1  # 👉 left half

    return -1

arr = [5, 7, 12, 13, 18, 19, 20, 21, 23]
print("Result:", binarySearch(arr, 21))
