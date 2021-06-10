#include<iostream>
using namespace std;

#define m 3 //Row
#define n 3  //Column

int main()
{
	int arr[m][n];
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter Element "<<"["<<i<<"]"<<"["<<j<<"] -:";
			cin>>arr[i][j];
		}
		cout<<endl;
	}

	//Spiral Order Logic
	int rs=0;    
	int cs=0;
	int re=m-1;
	int ce=n-1;
	int i=0,j=0;
	/*
	00 01 02 03
	10 11 12 13
	20 21 22 23
	30 31 32 33
	*/
	while(rs<=rs && cs<=ce)
	{
		for(i=cs;i<=ce;i++)
			cout<<arr[rs][i]<<" ";

		rs++;

		for(i=rs;i<=re;i++)
			cout<<arr[i][ce]<<" ";
		
		ce--;

		for(i=ce;i>=cs;i--)
			cout<<arr[re][i]<<" ";

		re--;

		for(i=re;i>=rs;i--)
			cout<<arr[i][cs]<<" ";
		
		cs++;
	}

return 0;

}