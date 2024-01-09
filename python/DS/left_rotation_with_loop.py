def left_rotate(arr, arr_length, rotation_times):
    for i in range(0, rotation_times):
        tmp = arr[0]
        for j in range (0, arr_length-1):
            arr[j] = arr[j+1]
        arr[arr_length-1] = tmp

    return arr


n = int(input())

d = int(input())


# creating an empty list
lst = []

# iterating till the range
for i in range(0, n):
    ele = int(input())
    # adding the element
    lst.append(ele)  
 
print(lst)

result = left_rotate(lst, n, d)
print(result)


    



