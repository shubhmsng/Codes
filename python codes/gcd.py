def gcd(m,n):
    if n==0:
        return m;
        
    else:
        return gcd(n,m%n);
        
            
def main():
    n=int(input("enter number1:"));
    m=int(input("enter number2:"));
    y=gcd(n,m);
    print("gcd of numbers:",y);
    
main()
    
