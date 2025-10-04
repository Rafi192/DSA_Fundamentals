# Concept:
# Like binary search, but instead of splitting in half, it guesses the position based on value distribution.
# Useful for uniformly distributed sorted arrays.

# Time complexity:

# Best: O(log log n)

# Worst: O(n)

def interpolation_search(arr, target):
    low, high = 0, len(arr) - 1

    while low <= high and target >= arr[low] and target <= arr[high]:
        pos = low + ((target - arr[low]) * (high - low) //
                    (arr[high] - arr[low]))

        if arr[pos] == target:
            return pos
        elif arr[pos] < target:
            low = pos + 1
        else:
            high = pos - 1
    return -1

nums = [10, 20, 30, 40, 50, 60]
print(interpolation_search(nums, 40))  # Output: 3
