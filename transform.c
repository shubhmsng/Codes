#include<stdio.h>

main(){
		char s[100],e[300],ch[400];
		int i=0,j=0,k=0,t,l;
		scanf("%d",&t);
	for(l=0;l<t;l++)
		
	{	scanf("%s",ch);
		while(ch[i]!='\0')
		{	if(i!=0)
			{	if(ch[i]=='+'||ch[i]=='-'||ch[i]=='*'||ch[i]=='/'||ch[i]=='^'||ch[i]=='('||ch[i]==')')
				{	
					if((ch[i]=='+'||ch[i]=='-')&&(s[j-1]=='*'||s[j-1]=='/'||s[j-1]=='^'))
					{	while(s[j-1]!='+'||s[j-1]=='-'||s[j-1]=='(')
						{	
						
						e[k]=s[j-1];
							j--;
							k++;
							}
						
						s[j]=ch[i];
						j++;
					}
					if((ch[i]=='*'||ch[i]=='/')&&s[j-1]=='^')
					{	
						while(s[j-1]!='+'||s[j-1]!='-'||s[j-1]=='(')
						{	
							e[k]=s[j-1];
							j--;
							k++;
						}
						
						s[j]=ch[i];
						j++;
					}
					if((ch[i]=='+'||ch[i]=='-')&&(s[j-1]!='*'||s[j-1]!='/'||s[j-1]!='^'))
					{	s[j]=ch[i];
						j++;
					}
					if((ch[i]=='*'||ch[i]=='/')&&s[j-1]!='^')
					{
						s[j]=ch[i];
						j++;
					}
					if(ch[i]=='(')
					{	s[j]=ch[i];
						j++;
					}
					if(ch[i]=='^')
					{	s[j]=ch[i];
						j++;
					}
					if(ch[i]==')')
					{	while(s[j-1]!='(')
						{	
							e[k]=s[j-1];
							k++;
							j--;
						}
						j--;
					}
				}	
				else{
				e[k]=ch[i];
				k++;
				}
			}
			else
			{	if(ch[i]=='+'||ch[i]=='-'||ch[i]=='*'||ch[i]=='/'||ch[i]=='^'||ch[i]=='('||ch[i]==')')
				{
					s[j]=ch[i];
						j++;
				}
				else{
				e[k]=ch[i];
				k++;
				}
			}
			
		i++;
	}
	
for(i=0;i<k;i++)
printf("%c",e[i]);
i=0;
j=0;
k=0;
printf("\n");	

}	
return 0;
}

