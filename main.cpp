#include <iostream>
using namespace std;
int main()
{
	cout<<"enter the number that you want : ";
	int m;
	cin>>m;
	char name[m];
	for(int n=0;n<m;n++)
	{
		 for(int b=n;b<m-1;b++)
		 {
			 cout<<".";
	     }
	 for( int v=n;v>=0;v--)
	 {
		 cout<<"*";
	 }
		 cout<<endl;
	}
	return 0;
}
