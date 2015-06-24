from string import*;
def fact(n):
    if(n<=1):
        return 1;
    else:
        return n*fact(n-1); 

def main():
    t=int(input());
    while(t>0):
        y=int(input());
        print(fact(y));
        t=t-1;
main()
