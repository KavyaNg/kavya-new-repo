#include<stdio.h>
#define max 25
void main()
{
	int frag[max],b[max],f[max],i,j,nb,nf,temp,lowest=100000;
	static int bf[max],ff[max];
	printf("\nEnter the number of blocks:");
	scanf("%d",&nb);
	printf("Enter the number of files:");
	scanf("%d",&nf);
	printf("\nEnter the size of the biocks:-\n");
	for(i=1;i<=nb;i++)
	{
		printf("Block %d:",i);
		scanf("%d",&b[i]);
	}
	for(i=1;i<=nf;i++)
	{
	for(j=1;j<=nb;j++)
	{
	if(bf[j]!=1)
	{
	temp=b[j]-f[i];
if(temp>=0)
if(lowest>temp)
{
ff[i]=j;
lowest=temp;
}
}
}
frag[i]=lowest;bf[ff[i]]=1;lowest=100000;
}
printf("\nFile No\t Size \tBlock No\tBlock size\tFragment");
for(i=1;i<=nf&& ff[i]!=0;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
}










