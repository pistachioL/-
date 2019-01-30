#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int g,p,l,t;
	g=p=l=t=0;
	char a[100000];
	scanf("%s",a);
	int len = strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]<='z' && a[i]>='a')
		{
			a[i] -= 32;  //小写变大写 
		}
	}
	for(int i=0;i<len;i++)
	{
		if(a[i] == 'G')
			g++;
		if(a[i] == 'P')
			p++;
		if(a[i] == 'L')
			l++;
		if(a[i] == 'T')
			t++;			
	}
	while(1) 
	{
		if(g>0)
		{
			cout << "G";
			g--;
		}
			
		if(p>0)
		{
			cout << "P";
			p--;
		}
			
		if(l>0)
		{
			cout << "L";
			l--;
		}
		
		if(t>0)
		{
			cout << "T";
			t--;
		}
		if(g==0 && p==0 && l==0 && t==0)
		{
			cout << endl;
			break;
		}
	}
	return 0;
}
