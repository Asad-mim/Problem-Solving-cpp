#include <iostream>
using namespace std;
int main() {
	string n;
	cin>>n;
	int Z=0,O=0;
	for(int i=0; i<n.size();i++)
	{
		if(n[i]=='Z' || n[i]=='z')
		{
			Z++;
		}
		else
		{
			O++;
		}
	}
	if(Z*2==O)
	{cout<<"Yes"<<endl;}
	else
	{cout<<"No"<<endl;}

	// v 2

}