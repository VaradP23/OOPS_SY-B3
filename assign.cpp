#include<iostream>
using namespace std;

class student{
private:
int admno;
float total;
char sname[21];
float eng,math,science;
float countmarks(){
            return eng+math+science;
            }
            

public:
void Takedata(){
            cout<<"Enter your admission no.:"<<endl;
            cin>>admno;
            
            cout<<"Enter your Name:"<<endl;
            cin>>sname;
            
            cout<<"English marks:"<<endl;
            cin>>eng;
            
            cout<<"Math marks:"<<endl;
            cin>>math;
            
            cout<<"Science marks:"<<endl;
            cin>>science;
            
           
            
            total = countmarks();
            }
            
void ShowData(){
             cout<< admno << endl;
             cout<< sname << endl;
             cout<< eng << endl;
             cout<< math << endl;
             cout<< science<< endl;
             cout<< total << endl;
             }
             };
int main(){
         student obj;
         obj.Takedata();
         obj.ShowData();
         return 0;
         }     
                         
            
            


