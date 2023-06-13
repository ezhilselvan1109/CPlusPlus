//Create an arithmetic calculator using polymorphism

#include<iostream>

using namespace std;
class Calculator{
    int Value,Sum;
    public:
    void Input(){
        cout<<"Enter The Value: ";
        cin>>Value;
    }

    void setvalue(int Sum){
        this->Value=Sum;
    }
    int getvalue(){
        return Value;
    }
    int operator + (Calculator obj2){
        cout<<Value<<" + "<<obj2.getvalue();
        int sum=Value+obj2.getvalue();
        cout<<" = "<<sum<<endl;
        return sum;
    }
    int operator - (Calculator obj2){
        cout<<Value<<" - "<<obj2.getvalue();
        int sum=Value-obj2.getvalue();
        cout<<" = "<<sum<<endl;
        return sum;
    }
    int operator * (Calculator obj2){
        cout<<Value<<" * "<<obj2.getvalue();
        int sum=Value*obj2.getvalue();
        cout<<" = "<<sum<<endl;
        return sum;
    }
    int operator / (Calculator obj2){
        cout<<Value<<" / "<<obj2.getvalue();
        int sum=Value/obj2.getvalue();
        cout<<" = "<<sum<<endl;
        return sum;
    }
    int operator % (Calculator obj2){
        cout<<Value<<" % "<<obj2.getvalue();
        int sum=Value%obj2.getvalue();
        cout<<" = "<<sum<<endl;
        return sum;
    }
};

int main(){
    int num,sum,flag=0;
    char ch;
    Calculator obj1,obj2;
    obj1.Input();
    while(1){
        cout<<"\t\t\t\t+ -> ADD"<<endl;
        cout<<"\t\t\t\t- -> SUB"<<endl;
        cout<<"\t\t\t\t* -> MUL"<<endl;
        cout<<"\t\t\t\t/ -> DIV"<<endl;
        cout<<"\t\t\t\t% -> DIV"<<endl;
        cout<<"\t\t\t\t= -> ANS"<<endl;
        cout<<"Choose an Operator: ";
        cin>>ch;
        switch(ch){
            case '+':{
                obj2.Input();
                int sum=obj1+obj2;
                obj1.setvalue(sum);
                break;
            }
            case '-':{
                obj2.Input();
                int sum=obj1-obj2;
                obj1.setvalue(sum);
                break;
            }
            case '*':{
                obj2.Input();
                int sum=obj1*obj2;
                obj1.setvalue(sum);
                break;
            }
            case '/':{
                obj2.Input();
                int sum=obj1/obj2;
                obj1.setvalue(sum);
                break;
            }
            case '%':{
                obj2.Input();
                int sum=obj1%obj2;
                obj1.setvalue(sum);
                break;
            }
            case '=':{
                cout<<"Ans: "<<obj1.getvalue()<<endl;
                flag=1;
            }
        }
        if(flag){
            break;
        }
    }
}
