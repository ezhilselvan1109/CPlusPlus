
#include <iostream>
#include <iomanip>
#define NoOfStd 10
using namespace std;

class Marks{
    private :
    int roll_number;
    int MMark[NoOfStd],PMark[NoOfStd],CMark[NoOfStd];
    static int i;
    string name;
    public:
        Marks(){}
       /* Marks(int mks)
        {
            NoOfStd=mks;
        }*/
    void GetDetail(){
            cout<<"Roll No : ";
            roll_number=1000+i;
            cout<<roll_number<<endl;
            cout<<"ENTER THE NAME :";
            cin>>name;

        }
        void MMarkFun(int mark){
            MMark[i]=mark;
            cout<<"i ="<<i<<" "<<MMark[i]<<endl;
            i++;
        }
        void PMarkFun(int mark){
            PMark[i]=mark;
            cout<<"i ="<<i<<" "<<PMark[i]<<endl;
        }
        void CMarkFun(int mark){
            CMark[i]=mark;
            cout<<"i ="<<i<<" "<<PMark[i]<<endl;
        }
        void reset(){
            i=0;
        }
        void diplay(){
            cout<<left<<setw(17)<<roll_number<<left<<setw(8)<< name << MMark[i]<<" "<<CMark[i]<<" "<<PMark[i]<<endl;
            cout<<"i ="<<i<<endl;
            i++;

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
    void get_Mark(){
        cout<<"Enter the Physics mark :";
        cin>>mark;
        Physicstotal+=mark;
        PMarkFun(mark);
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
    void get_Mark(){
        cout<<"Enter the Chemistry mark :";
        cin>>mark;
        Chemistrytotal+=mark;
        CMarkFun(mark);
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
    void get_Mark(){
        cout<<"Enter the Mathematics mark :";
        cin>>mark;
        Mathematicstotal+=mark;
        MMarkFun(mark);
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


    ///Marks obj1(noOfStudent);
    Marks obj1;
    Physics obj2(noOfStudent);
    Chemistry obj3(noOfStudent);
    Mathematics obj4(noOfStudent);

    for(int j=1;j<=noOfStudent;j++){
        Marksobj[j].GetDetail();

        Mathematicsobj.get_Mark();

        Physicsobj.get_Mark();

        Chemistryobj.get_Mark();


    }

    obj1.reset();

    cout<<endl;
    cout<<"Roll no \t Name \t Total Mark"<<endl;
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

