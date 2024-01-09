def left_rotate(arr, arr_length, rotation_times):
    if(rotation_times == 0):
        return arr
    else:
        tmp = arr[0]
        for i in range(0, arr_length-1):
            arr[i] = arr[i+1]

        arr[arr_length-1] = tmp
        return left_rotate(arr, arr_length, rotation_times-1)



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
    



