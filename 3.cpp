#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a,b,sum=0,count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
    		printf("%5d",i);
    		sum+=i;
			count++;
			if(count%5==0) 
			{
				printf("\n");
			}
		
	}
	if(count%5!=0)
	{
		printf("\n");
	}


	printf("Sum = %d\n",sum);
	return 0;
	
}
