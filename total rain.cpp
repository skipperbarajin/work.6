#include<iostream>
using namespace std;
int main()
{
	system("color 0b");
	float a,b,c,d,e,f,g,h,i,j,k,l;
	cout<<"total inches of rain in January: ";
	cin>>a;
	cout<<"total inches of rain in February: ";
	cin>>b;
	cout<<"total inches of rain in March: ";
	cin>>c;
	cout<<"total inches of rain in April: ";
	cin>>d;
	cout<<"total inches of rain in May: ";
	cin>>e;
	cout<<"total inches of rain in June: ";
	cin>>f;
	cout<<"total inches of rain in July: ";
	cin>>g;
	cout<<"total inches of rain in August: ";
	cin>>h;
	cout<<"total inches of rain in September: ";
	cin>>i;
	cout<<"total inches of rain in October: ";
	cin>>j;
	cout<<"total inches of rain in November:";
	cin>>k;
	cout<<"total inches of rain in December: ";
	cin>>l;
	system("cls");
	//_______________________________________________________________
	cout<<"\n january  |";
	for(int tt=1;tt<a;tt++)
	cout<<char(15)<<" ";
	cout<<"\n february |";
	for(int tt=1;tt<b;tt++)
	cout<<char(15)<<" ";
	cout<<"\n march    |";
	for(int tt=1;tt<c;tt++)
	cout<<char(15)<<" ";
	cout<<"\n april    |";
	for(int tt=1;tt<d;tt++)
	cout<<char(15)<<" ";
	cout<<"\n may      |";
	for(int tt=1;tt<e;tt++)
	cout<<char(15)<<" ";
	cout<<"\n june     |";
	for(int tt=1;tt<f;tt++)
	cout<<char(15)<<" ";
	cout<<"\n july     |";
	for(int tt=1;tt<g;tt++)
	cout<<char(15)<<" ";
	cout<<"\n august   |";
	for(int tt=1;tt<h;tt++)
	cout<<char(15)<<" ";
	cout<<"\n september|";
	for(int tt=1;tt<i;tt++)
	cout<<char(15)<<" ";
	cout<<"\n October  |";
	for(int tt=1;tt<j;tt++)
	cout<<char(15)<<" ";
	cout<<"\n november |";
	for(int tt=1;tt<k;tt++)
	cout<<char(15)<<" ";
	cout<<"\n december |";
	for(int tt=1;tt<l;tt++)
	cout<<char(15)<<" ";
	cout<<"\n";
	for(int tt=1;tt<30;tt++)
	for(int q;q<=14;q++)
	cout<<"    "<<char(22)<<" "<<q;
	return 0;
}


