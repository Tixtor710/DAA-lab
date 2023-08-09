#include <stdio.h>
def insertion_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
        elif arr[i] > target:
            arr.insert(i, target)
            return i
    arr.append(target)
    return len(arr) - 1

arr = [1, 2, 3, 4, 5]
target = int(input("Enter a number to search: "))

print(insertion_search(arr, target)) 