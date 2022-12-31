#include<iostream>
#include<iomanip>
using namespace std;
void table();
int main()
{
	cout<<"\n    number table is:"<<endl;
	table();
	return 0;
}
void table()
{
	cout<<setw(4)<<"perfect"<<setw(9)<<"deficient"<<setw(10)<<"abundant"<<endl;
	cout<<setw(4)<<"   1   "<<setw(9)<<"    4    "<<setw(10)<<"   12   "<<endl;
	cout<<setw(4)<<"   6   "<<setw(9)<<"    8    "<<setw(10)<<"   18   "<<endl;
	cout<<setw(4)<<"   28  "<<setw(9)<<"    14   "<<setw(10)<<"   20   "<<endl;
	cout<<setw(4)<<"   **  "<<setw(9)<<"    15   "<<setw(10)<<"   24   "<<endl;
	cout<<setw(4)<<"   **  "<<setw(9)<<"    16   "<<setw(10)<<"   30   "<<endl;
	cout<<setw(4)<<"   **  "<<setw(9)<<"    21   "<<setw(10)<<"   **   "<<endl;
	cout<<setw(4)<<"   **  "<<setw(9)<<"    22   "<<setw(10)<<"   **   "<<endl;
	cout<<setw(4)<<"   **  "<<setw(9)<<"    26   "<<setw(10)<<"   **   "<<endl;
	cout<<setw(4)<<"   **  "<<setw(9)<<"    **   "<<setw(10)<<"   **   "<<endl;
	cout<<setw(4)<<"   **  "<<setw(9)<<"    **   "<<setw(10)<<"   **   "<<endl;
    cout<<setw(4)<<"_______"<<setw(9)<<"_________"<<setw(10)<<"________"<<endl;
    	
}