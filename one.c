#include<stdio.h>
#define max 25
void main()
{
	int
		frag[max],b[max],f[max],i,j,nb,nf,temp;
	static int bf[max],ff[max];
	printf("\n\tMemory Mangement Scheme-First Fit");
	printf("\nEnter the number of blocks:");
	scanf("%d",&nb);
	printf("Enter the number of files:");
	scanf("%d",&nf);
	scanf("\nEnter the size of the blocks:-n");
	for(i=1;i<=nb;i++)
	{
		printf("Block %d:",i);
		scanf("%d",&b[i]);
	}
	printf("Enter the size of the files:-\n");
	for(i=1;i<=nf;i++)
	{
		printf("File %d:",i);
		scanf("%d",&f[i]);
	}
	for(i=1;i<=nf;i++)
	{
		for(i =1;i< nb;j++)
		{
			if(bf[j]!=1)
			{
				 if(temp>=0)
				 {
					 ff[i]=j;
					 break;
				 }
		}
	}
	frag[i]=temp;
	bf[ff[i]]=1;
}
printf("\nFile-no:\tFile-size:\tBlock-no:\tBlock-size:\tFragement");
for(i=1;i<nf;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
for(i=1;i<=nf;i++)
{
for(j=1;i<nb;j++)
{
	temp=b[j]-f[i];
	if(temp>=0)
	{
		ff[i]=j;
		break;
	}
}


			 
		



