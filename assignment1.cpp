#include<iostream>
using namespace std;
class batsman
{
private:
int bcode;
char bname[21];
int innings;
int notout;
int runs;
float batavg;
void calcavg()
{
if(innings!=notout)
batavg= float(runs)/(innings-notout);
else
batavg=0;
}
public:
void readdata(){
cout<<"Enter the code: ";
cin>>bcode;
cout<<"Enter the name : ";
cin>>bname;
cout<<"Enter innings : ";
cin>>innings;
cout<<"Enter not out no. : ";
cin>>notout;
cout<<"Enter runs : ";
cin>>runs;
calcavg();
}
void displaydata(){
cout<<"\ncode : "<<bcode;
cout<<"\nName : "<<bname;
cout<<"\nInnings : "<<innings;
cout<<"\nNot out no. : "<<notout;
cout<<"\nRuns : "<<runs;
cout<<"\nBating avg : "<<batavg<<endl;
}
};
int main(){
batsman b1;
b1.readdata();
b1.displaydata();
return 0;
}
