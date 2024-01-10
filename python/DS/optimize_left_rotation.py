def left_rotate(arr, arr_length, rotation_times):
    rotation_times %= arr_length  # Optimize rotations by using modulus
    return arr[rotation_times:] + arr[:rotation_times]

n, d = map(int, input().split())
lst = list(map(int, input().split()[:n]))

result = left_rotate(lst, n, d)
listToStr = ' '.join(map(str, result))
print(listToStr)
