#n=int(input())
a=0
b=1
print(a)
print(b)
for i in range (2,40):#for i in range (2,n):
    num=a+b
    print(num)
    a=b
    b=num
