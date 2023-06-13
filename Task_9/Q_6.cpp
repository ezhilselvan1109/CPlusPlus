// Create a student class and use ArrayList to capture 5 student detail and Sort it.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class student{
	int id;
	string student_name;
	float m_1,m_2,m_3,m_4,m_5,total_mark;
	public:
	void Input(){
		cout<<"Enter The Student Id:";
		cin>>id;
		cin.ignore();
		cout<<"Enter The Student Name:";
		getline(cin,student_name);
		cout<<"Enter The  Mark 1 :";
		cin>>m_1;
		cout<<"Enter The Mark 2 :";
		cin>>m_2;
		cout<<"Enter The Mark 3 :";
		cin>>m_3;
		cout<<"Enter The Mark 4 :";
		cin>>m_4;
		cout<<"Enter The Mark 5 :";
		cin>>m_5;
		total_mark = m_1 + m_2 +m_3 +m_4+m_5;
	}
	void display(){
		cout<<"Id:"<<id<<endl;
		cout<<"Name:"<<student_name<<endl;
		cout<<"Mark 1:"<<m_1<<endl;
		cout<<"Mark 2:"<<m_2<<endl;
		cout<<"Mark 3:"<<m_3<<endl;
		cout<<"Mark 4:"<<m_4<<endl;
		cout<<"Mark 5:"<<m_5<<endl;
		cout<<"Total:"<<total_mark<<endl;
	}
	float get_total_mark(){
		return total_mark;
	}

};
bool compare(student x,student y)
{
	return (x.get_total_mark() > y.get_total_mark());
}
int main()
{
	int records,no_of_stu;
	cout<<"Enter The Number Of Student: ";
	cin>>no_of_stu;
	vector<student> Vector;
	student obj;
	for(int i=0;i<no_of_stu;i++){
          obj.Input();
		  Vector.push_back(obj);
		  cout<<endl;
	}
	cout<<endl<<"\t\t\t\tBefore Sorting"<<endl;
	for(student it : Vector){
		it.display();
		cout<<endl;
	}
    sort(Vector.begin(),Vector.end(),compare);
    cout<<endl<<"\t\t\t\tAfter Sorting"<<endl;
	for(student it : Vector){
		it.display();
		cout<<endl;
	}
}
