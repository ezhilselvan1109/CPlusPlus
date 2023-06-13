/*

We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class.
The number of students in the class is entered by the user. Create a class named Marks with data members for roll number, name and marks.
Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject
of each student. Roll number of each student will be generated automatically.

*/
#include <iostream>
#include <iomanip>
using namespace std;

class Marks{
    private :
    int roll_number,MMark,PMark,CMark;
    static int i;
    string name;
    public:
        Marks(){}
    void GetDetail(){
            cout<<"Roll No : ";
            roll_number=1000+i;
            cout<<roll_number<<endl;
            cout<<"ENTER THE NAME :";
            cin>>name;

        }
        void MMarkFun(int mark){
            this->MMark=mark;

        }
        void PMarkFun(int mark){
            this->PMark=mark;
        }
        void CMarkFun(int mark){
            this->CMark=mark;
            i++;

        }
        void diplay(){
            cout<<left<<setw(17)<<roll_number<<left<<setw(8)<< name <<left<<setw(16)<<MMark<<left<<setw(8)<<CMark<<left<<setw(8)<<PMark<<left<<setw(8)<<(MMark+CMark+PMark)<<left<<setw(8)<<(MMark+CMark+PMark)/3<<endl;
        }
};


class Physics:public Marks{
    static int Physicstotal;
    int mark,NoOfStds;
    public:
    Physics(){
    }
    Physics(int n){
    NoOfStds=n;
    }
    int get_Mark(){
        cout<<"Enter the Physics mark :";
        cin>>mark;
        Physicstotal+=mark;
        return mark;
    }
    int avg_mark(){
        cout<<"Physics avg :"<<Physicstotal/NoOfStds;
    }
};

class Chemistry:public Marks{
    static int Chemistrytotal;
    int mark,NoOfStds;
    public  :
    Chemistry(){
    }
    Chemistry(int n){
    NoOfStds=n;
    }
    int get_Mark(){
        cout<<"Enter the Chemistry mark :";
        cin>>mark;
        Chemistrytotal+=mark;
        return mark;
    }
    int avg_mark(){
        cout<<"Chemistry avg :"<<Chemistrytotal/NoOfStds;
    }
};


class Mathematics:public Marks{
    static int Mathematicstotal;
    int mark,NoOfStds;
    public  :
    Mathematics(){
    }
    Mathematics(int n){
        NoOfStds=n;
    }
    int get_Mark(){
        cout<<"Enter the Mathematics mark :";
        cin>>mark;
        Mathematicstotal+=mark;
        return mark;
    }
    int avg_mark(){
        cout<<"Mathematics avg :"<<Mathematicstotal/NoOfStds;
    }
};

int Mathematics::Mathematicstotal=0;
int Chemistry::Chemistrytotal=0;
int Physics::Physicstotal=0;
int Marks::i=0;


int main(){
    int noOfStudent;
    cout<<"Enter The No Of Student : ";
    cin>>noOfStudent;


    Marks Marksobj[noOfStudent];
    Physics Physicsobj;
    Chemistry Chemistryobj;
    Mathematics Mathematicsobj;


    Marks obj1;
    Physics obj2(noOfStudent);
    Chemistry obj3(noOfStudent);
    Mathematics obj4(noOfStudent);

    for(int j=1;j<=noOfStudent;j++){
        Marksobj[j].GetDetail();

       Marksobj[j].MMarkFun(Mathematicsobj.get_Mark());

         Marksobj[j].PMarkFun(Physicsobj.get_Mark());

         Marksobj[j].CMarkFun(Chemistryobj.get_Mark());


    }


    cout<<endl;
    cout<<"Roll no \t Name \t Mathematics \t Physics \t Chemistry \t Total Mark \t Average "<<endl;
    for(int j=1;j<=noOfStudent;j++){
        Marksobj[j].diplay();
    }
    cout<<endl;
    obj2.avg_mark();
    cout<<endl;
    obj3.avg_mark();
    cout<<endl;
    obj4.avg_mark();
    cout<<endl;
}

