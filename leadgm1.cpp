	#include <iostream>
	using namespace std;
	
	int main() {
		int n = 0;
		int p1=0, p2=0,W=1, temp1 = 0, temp2 = 0,s1=0,s2=0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> s1 >> s2;
			p1=p1+s1;
			p2=p2+s2;
			if (p1 >= p2)
			{
				
				if (temp1 < (p1 - p2))
				{
					temp1 = p1 - p2;
				}
			}
			else
			{
				
				if (temp2 < (p2 - p1))
				{
					temp2 = p2 - p1;
				}
			}
		}
		if (temp1 >= temp2)
			cout << W<<" " << temp1<<"\n" ;
		else
			cout << W+1<<" " << temp2<<"\n" ;
		return 0;
	}