arr = input().split()
a = int(arr[0])
b = int(arr[1])
c = int(arr[2])

if a < b and b < c and (a< c or c<a):
    print (b)
elif b < a and a < c and (b <c or c< b):
    print(a)
else:
    print (c)