def f(x):
    if(x==1):
        return 1
    else:
        return pow(x,x)*f(x-1)


def main():
    t=int(input())
    while(t>0):
        n1=input()
        a=n1.split()
        n=int(a[0])
        m=int(a[1])
        q=int(a[2])
        for i in range(q):
            r=int(input())
            p=f(n)/(f(r)*f(n-r))
            print(int(p%m))
        t=t-1
main()           
