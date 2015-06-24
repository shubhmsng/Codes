def mul(a, c, i, k,p):
    if int(p) == int(k):
        return a[i - p] * c[p]
    else:
        return a[i - p] * c[p] + mul(a, c, i, k, p+1)

x = input()
y = x.split()
k = int(y[0])
n = int(y[1])
a1 = input()
a = a1.split()
for i in range(0, len(a)):
    a[i] = int(a[i])
c1 = input()
c = c1.split()
for i in range(0, len(c)):
    c[i] = int(c[i])
i = k-1
while i != n-1:
    a = a + [(mul(a, c, i, k-1, 0) % 1048576012)]
    i += 1
print (a[n-1])