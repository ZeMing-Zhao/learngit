#include<stdio.h>
#include<string.h>
#include<math.h>

//Creating a new branch is quick.
//¡­¡­¡­¡­ 
// This not is added by ZhaoZeming
 
int main()
{
	int m,n,i,flag,max,min,count;
	scanf("%d",&n);getchar();
	while(n--)
	{
		flag=1;
		int a[27]={0};
		char ch[100];
		scanf("%s",ch);
 		m=strlen(ch);
		for(i=0;i<m;i++)
		{
			if(ch[i]>='a'&&ch[i]<='z')
			a[ch[i]-'0'-48]++;
			if(ch[i]>='A'&&ch[i]<='Z')
			a[ch[i]-'0'-16]++;
		}
		max=a[1];min=10000;
		for(i=1;i<=26;i++)
		{
			if(a[i]>max) max=a[i];
			if(a[i]<min&&a[i]!=0) min=a[i];
		}
	
		count=max-min;

		for(i=2;i<=sqrt(count);i++)
		{
			if(count%i==0)
			{
				flag=0;break;
			}
		}
		if(flag==1&&count!=0&&count!=1) printf("Lucky Word\n%d\n",count);
		else printf("No Answer\n0\n");
	}
 } 
