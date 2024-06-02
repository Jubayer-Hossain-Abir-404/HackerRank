def kangaroo(x1, v1, x2, v2):
    isUndefined = False
    if (v1-v2 == 0):
        isUndefined = True
    else:
        colliding_moment = (x2-x1) / (v1-v2)
        remainder = (x2-x1) % (v1-v2)

    if not isUndefined and colliding_moment >= 0 and remainder == 0:
        return "YES"
    
    return "NO"

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    x1 = int(first_multiple_input[0])

    v1 = int(first_multiple_input[1])

    x2 = int(first_multiple_input[2])

    v2 = int(first_multiple_input[3])

    print(kangaroo(x1, v1, x2, v2))



# 2 1 1 2
# 0 3 4 2
# 0 2 5 3
# 43 2 70 2