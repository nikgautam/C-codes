#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
/*void removePi(char s[])
{
	for(int i=0; i<strlen(s)-1;i++)
	{
		if(s[i]='p' && s[i+1]='i')
		{
			s[i]='3';
			s[i+1]='.';
			int d=1;
			while(d<=2)
			{
				
			}
		}
    }
}*/

int main()
{
	char input[10]= {"nikhil"};
	cout<<input<<endl;
	cout<<input[0]<<endl;
	if(input[0]=='p' && input[1]=='i')
	{
      for(int i=strlen(input); i>=0;i--)
        input[i+2]=input[i];
      input[0]='3';
      input[1]='.';
      input[2]='1';
      input[3]='4';
    }
	cout<<input;	
}

