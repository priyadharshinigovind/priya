#include<stdio.h>
#include<string.h>
void main()
{
int n[10],o[10],d,set,i;
printf("\nEnter number of sets");
scanf("%d",&set);
printf("\nenter the clans present in kabali and his opponent");
for(i=0;i<set;i++)
{
scanf("%d%d",&n[i],&o[i]);  
}
for(i=0;i<set;i++)
{
  d=o[i]-n[i];
  printf("\n%d",d);
}
}
