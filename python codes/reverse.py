i = int(input())
a=[]
j=i
c=0
while(j>0):
    a=a+[j%10]191
    j=int(j/10)
    c=c+1
for i in range(c):
    print(a[i],end='')
