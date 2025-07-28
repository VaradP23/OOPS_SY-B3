#include<iostream>
#include<string>
using namespace std;

class student {
	private:
	string name;
	int prn;
	float math;
	float science;
	float english;
	float total;
	
	float total_marks(){
		return math + science + english;
	}
	public:
	void take_data(){
		cout << "Enter your name:" << endl;
		cin >> name;
		cout << "Enter your prn:" << endl;
		cin >> prn;
		cout << "Enter your English marks:" << endl;
		cin >> english;
		cout << "Enter your Math marks:" << endl;
		cin >> math;
		cout << "Enter your Science marks:" << endl;
		cin >> science;
		cout <<endl;
		total = total_marks();
	}
	
	void get_data(){
		cout << "My name is: " << name << endl;
		cout << "My prn is: " << prn << endl;
		cout << "My marks in English: " << english << endl;		
		cout << "My marks in Math: " << math << endl;
		cout << "My marks in Science: " << science << endl;
		cout << "TOTAL MARKS = " << total << endl;
	}
};
int main(){
	student s;
	s.take_data();
	s.get_data();
	return 0;
}
