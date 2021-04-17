// A simple program to find the possibility chance of your fav ipl team
#include<stdio.h>
#include<conio.h>
int main(){

int i,t,x,y;
char name[40],ipl[40];

printf("How many teams do u want to check\n");
scanf("%d",&t);
for(i=0;i<t;i++)
{
	printf("what is your name and your fav ipl team\n");
	scanf("%s%s",&name,&ipl);
	printf("%s nice name buddy,%s super team\n",name,ipl);
	printf("Enter how many points do your team need to qualify\nEnter many matches are remaning for the team\n");
	scanf("%d %d",&x,&y);
	if ((x>y ||y>x )&& x%2==0)
	{
	
	printf("%d need to win \n",x/2);}
	else if(x=y  && x%2==0){
	
	printf("%d need to win\n",y/2);}
	
	//here it is not being executed
	else if(x%2!=0 && x==y)
	{
		printf("%d\n one match needs to be a tie\n",x/2);
		
	}
	//here it is not being executed
	else if((x>y || y<x) && x>y){
	
	printf("%d one match needs to be a tie\n",x/2);}
	else
	printf(" NO CHANCE OF QUALIFYING \n");
}
}
