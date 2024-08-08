arr = input().split()
a = int(arr[0])
b = int(arr[1])
c = int(arr[2])

if a < b and b < c:
    print (b)
elif b < a and a < c:
    print(a)
else:
    print (c)