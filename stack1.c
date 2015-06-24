#include<stdio.h>
int arr[5],top=-1;
int push(){
if(top==5)
printf("stack overflow");
else{
scanf("%d",&arr[top]);
top++;
}
}

void display(){
while(top!=-1){
printf("\t%d",arr[top]);
top--;
}
}

int pop(int p){
int i;
printf("\npoed elements is:");
for(i=0;i<p;i++){
printf("\t%d",arr[top]);
top--;
}
}

int main(){
top=0;
int i,p;
printf("enter elements on the stack:");
for(i=0;i<5;i++)
push();
printf("\n");
top--;
printf("\nelements in the stack:");
display();
printf("\nenter the pop's position");
scanf("%d",&p);
top=4;
pop(p);
printf("\nelements in the stack after poped");
display();
return 0;
} 