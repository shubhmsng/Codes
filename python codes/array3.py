n=int(input())
n=input()
a=(n.split())
sum1=0
l=len(a)
for i in range(l):
	sum1=sum1+int(a[i])
print(sum1)
for i in range(l):
	if(sum1==int(a[i])):
		print("YES")
		break
	
