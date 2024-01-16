def check_frequency(str, sub_str):
    return str.count(sub_str)

n = int(input())
lst = []

for i in range(n):
    lst.append(input())

d = int(input())

for i in range(d):
    print(check_frequency(lst, input()))




