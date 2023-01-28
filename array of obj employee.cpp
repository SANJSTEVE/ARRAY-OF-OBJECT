#include<iostream>
using namespace std;
class Entrepreneur
{
	int entid;
	double hra,pf,da,cca,np,bp;
	char name[10];
	public:
		void getdata()
		{
			cout<<"Enter the name of the Entrepreneur:"<<endl;
			cin>>name;
			cout<<"Enter Entrepreneur id:"<<endl;
			cin>>entid;
			cout<<"Enter basic pay:"<<endl;
			cin>>bp;
		}
		void allow()
		{
			hra=(bp*10)/100;
			pf=(bp*12)/100;
			da=(bp*11)/100;
			cca=(bp*8)/100;
			np=(bp+hra+da+cca)-pf;
	
		}
		void putdata()
		{
			cout<<"Entrepreneur name is:"<<name<<endl;
			cout<<"Entrepreneur id is:"<<entid<<endl;
			cout<<"Entrepreneur basic pay is:"<<bp<<endl;
			cout<<"\n hra="<<hra<<"\n da="<<da<<"\n pf="<<pf<<"\n cca="<<cca;
			cout<<"\n net pay of Entrepreneur is :"<<np<<endl;
		}
};
int main()
{
	int n;
	Entrepreneur E[100];
	cout<<"\n \t Array of objects";
	cout<<"\n Enter number of Entrepreneur:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Entering the details of Entrepreneur:"<<i+1<<endl;
		E[i].getdata();
		E[i].allow();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"displaying details of Entrepreneur:"<<i+1<<endl;
		E[i].putdata();
		cout<<endl;
	}
	return 0;
}