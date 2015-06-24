# your code goes here
t = int(input())
i = False
while t> 0:
	x,y,k,n = input().split()
	d =int(x) - int(y)
	k = int(k)
	n = int(n)
	while n > 0:
		p,c = input().split()
		p = int(p)
		c = int(c)
		if p >= d and c <= k:
			i = True
		n = n - 1
	if i :
		print ("LuckyChef")
	else :
		print ("UnluckyChef")
	t = t - 1
	i =False
	
