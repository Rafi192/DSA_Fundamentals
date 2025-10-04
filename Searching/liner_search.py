# Concept:
# Check each element one by one until the target is found or the list ends.

# When to use:

# Small or unsorted datasets

# Easy to implement but slow for large datasets

# Time complexity: O(n)

def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i  # return the index
    return -1  # not found

nums = [4, 2, 7, 1, 9]
print(linear_search(nums, 7))  # Output: 2
