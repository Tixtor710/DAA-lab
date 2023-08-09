def insertion_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
        elif arr[i] > target:
            arr.insert(i, target)
            return i
    arr.append(target)
    return len(arr) - 1

arr = []
for i in range(int(input("Enter the number of elements in the array: "))):
    arr.append(int(input("Enter the element: ")))

target = int(input("Enter a number to search: "))

print(insertion_search(arr, target))