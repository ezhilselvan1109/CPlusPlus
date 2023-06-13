#include<iostream>
#include<unistd.h>
#include <conio.h>
#include<fstream>
#include <iomanip>

using namespace std;

class History{
    long long int phone_number;
    string Name;
    int starthours,startmintes,startseconds;
    int endhours,endmintes,endseconds;
    int hour,mintes,seconds;
    public:
         void setstartTimes(int starthours,int startmintes,int startseconds){
            this->starthours=starthours;
            this->startmintes=startmintes;
            this->startseconds=startseconds;
        }
        void setendTimes(int endhours,int endmintes,int endseconds){
            this->endhours=endhours;
            this->endmintes=endmintes;
            this->endseconds=endseconds;
        }
        void DisplayEndHours(){
            cout<<endhours<<":";
            cout<<endmintes<<":";
            cout<<left<<setw(11);
            cout<<endseconds;
        }
        void DisplayStartHours(){
            cout<<starthours<<":";
            cout<<startmintes<<":";
            cout<<left<<setw(11);
            cout<<startseconds;
        }
        void DisplayHours(){
            cout<<hour<<":";
            cout<<mintes<<":";
            cout<<seconds;
        }
        void setContact(string Name,long long int phone_number){
            this->Name=Name;
            this->phone_number=phone_number;
        }
        void setContact(long long int phone_number){
            this->Name=" - ";
            this->phone_number=phone_number;
        }
        void Display(){
            cout<<left<<setw(16);
            cout<<Name;
            cout<<left<<setw(16);
            cout<<phone_number;
        }
        void Input(){
            this->Name=Name;
            this->phone_number=phone_number;
            this->starthours=starthours;
            this->startmintes=startmintes;
            this->startseconds=startseconds;
            this->endhours=endhours;
            this->endmintes=endmintes;
            this->endseconds=endseconds;
            hour=endhours-starthours;
            mintes=endmintes-startmintes;
            if(endseconds>startseconds)
                seconds=endseconds-startseconds;
            else
                seconds=startseconds-endseconds;
        }
};
History Historyobj;
class Contact{
    long long int phone_number;
    string Name;
    public:
    long long int getPhoneNo(){
        return phone_number;
    }
    void setName(){
        cout<<"Enter the Name : ";
        cin>>Name;
    }
    void setPhoneNo(){
        cout<<"Enter The Phone No : ";
        cin>>phone_number;
    }
    void setContact(){
        cout<<"Enter The Phone No : ";
        cin>>phone_number;
        cout<<"Enter the Name : ";
        cin>>Name;
    }
    void setContact(string Name,long long int phone_number){
        this->phone_number=phone_number;
        this->Name=Name;
    }
    void DisplayContact(){
        cout<<"\t\t\t\t"<<left<<setw(10)<<Name;
        cout<<phone_number<<endl;
    }
    string getName(){
        return Name;
    }
};
Contact Contactobj;

class PhoneBook{
    long long int arr[5];
    int itr=0;
    fstream file1,file2;
    long long int phone_number;
    string Name;
    public:
        void callFunction(){
            Contactobj.setPhoneNo();
            phone_number=Contactobj.getPhoneNo();
            if(valitate(phone_number)){
                callingFunction(phone_number);
            }else{
                callFunction();
            }
        }

        void addContactFunction(){
                file1.open("Contant.txt",ios::app|ios::out);
                file1.seekg(0, ios::beg);
                Contactobj.setContact();
                file1.write((char*)&Contactobj, sizeof(Contactobj));
                file1.close();
        }

        void listFunction(){
                while(1){
                file1.open("Contant.txt",ios::in);
                file1.seekg(0, ios::beg);
                cout<<"\t\t\t\tNAME\t  NUMBER"<<endl;
                while (file1.read((char*)&Contactobj, sizeof(Contactobj))){
                        Contactobj.DisplayContact();
                }
                file1.close();
                cout<<endl<<endl<<"\t\t\t\t(1) - Back";
                int choice;
                cin>>choice;
                if(choice){
                    system("cls");
                    break;
                }
            }

        }

        int valitate(long long int temp){
            long long int ph_no=temp;
            try{
            int num=0;
            while(ph_no>0){
                num++;
                ph_no/=10;
            }
            if(num==10){
                return 1;
            }else{
                throw(num);
            }
            }catch(int no){
                cout<<"Worng Phone Number "<<endl;
                return 0;

            }
        }
        void searchFunction(){
                string NAME;
                int flag=0;
                long long int P_no;
                cout<<"Enter the Name : ";
                cin>>NAME;
                file1.open("Contant.txt",ios::in);
                file1.seekg(0, ios::beg);
                while (file1.read((char*)&Contactobj, sizeof(Contactobj))){
                        string Name=Contactobj.getName();
                        if(Contactobj.getName()==NAME){
                            flag=1;
                            P_no=Contactobj.getPhoneNo();
                        }
                }
                file1.close();
                if(flag){
                    int choice;
                    cout<<"\t\t\t\tThe Number Is : "<<P_no<<endl;
                    cout<<"\t\t\t\t(1) - Call\t(2) - Back"<<endl<<"Enter The Choice : ";
                    cin>>choice;
                    if(choice==1)
                    callingFunction(P_no);
                    if(choice==2)
                        flag=2;
                }else{
                    int choice;
                    cout<<"\t\t\t\tThere is no contant "<<endl<<endl<<endl;
                    cout<<"\t\t\t\t(1) - Back"<<endl<<"Enter The Choice : ";
                    cin>>choice;
                    if(choice==1)
                        flag=2;
                }
            }



        void deleteFunction(){
            string NAME;
            cout<<"Enter the Name : ";
            cin>>NAME;
            fstream file2("TempFile.txt",ios::out);
            fstream file3("Deleted.txt",ios::out|ios::app);
            file1.open("Contant.txt",ios::in);
                while(file1.read((char*)&Contactobj, sizeof(Contactobj))){
                    if(Contactobj.getName()!=NAME){
                        file2.write((char*)&Contactobj, sizeof(Contactobj));
                    }else{
                        file3.write((char*)&Contactobj, sizeof(Contactobj));
                    }
                }
            file1.close();
            file2.close();
            file3.close();
            file1.open("Contant.txt",ios::out);
            file2.open("TempFile.txt",ios::in);
            while(file2.read((char*)&Contactobj, sizeof(Contactobj))){
                file1.write((char*)&Contactobj, sizeof(Contactobj));
            }
            file1.close();
            file2.close();
        }

        void deletedFunction(){
            while(1){
            file1.open("Deleted.txt",ios::in );
                file1.seekg(0, ios::beg);
                cout<<"\t\t\t\tNAME\t  NUMBER"<<endl;
                while (file1.read((char*)&Contactobj, sizeof(Contactobj))){
                        Contactobj.DisplayContact();
                }
                file1.close();
                cout<<endl<<endl<<"\t\t\t\t(1) - Back";
                int choice;
                cin>>choice;
                if(choice){
                    system("cls");
                    break;
                }
            }
        }
        void RecendCall(){
            int fr[itr];
            int visited = -1;
            for(int i=0;i<itr;i++){
                int c=1;
                for(int j=i+1;j<itr;j++){
                    if(arr[i]==arr[j]){
                        c++;
                        fr[j]=visited;
                    }
            }
            if(fr[i]!=visited)
            fr[i]=c;
            }

            cout<<"\t\t\t\tRecent Call"<<endl<<endl<<endl;
            if(itr==0){
                cout<<"\t\t\t\tNo Recent Call"<<endl;
            }
            for(int i=0;i<itr;i++){
                int flag=1;
                if(fr[i]!=visited)
                cout<<"\t\t\t\t";
                file1.open("Contant.txt",ios::in);
                while(file1.read((char*)&Contactobj, sizeof(Contactobj))){
                    if(arr[i]==Contactobj.getPhoneNo()){
                        cout<<Contactobj.getName();
                        flag=0;
                    }
                }
                if(flag){
                    cout<<"+91 "<<arr[i];
                }
                cout<<" -> " <<fr[i]<<endl;
            }
            while(1){
                cout<<endl<<endl<<"\t\t\t\t(1) - Back";
                int choice;
                cin>>choice;
                if(choice){
                    system("cls");
                    break;
                }
            }
        }
        void callingFunction(long long int ph_no){
            arr[itr++]=ph_no;
            int flag=0;
            file1.open("Contant.txt",ios::in);
            file1.seekg(0, ios::beg);
            while (file1.read((char*)&Contactobj, sizeof(Contactobj))){
                if(ph_no==Contactobj.getPhoneNo()){
                    Historyobj.setContact(Contactobj.getName(),ph_no);
                    flag=1;
                }
            }
            if(!flag){
                Historyobj.setContact(ph_no);
            }
            file1.close();
            for(int i=1;i<2;i++){
                system("cls");
                cout<<"\t\t\t\t+91 "<<ph_no<<endl;
                cout<<"\n\n\t\t\t\tCalling ";
                for(int i=0;i<=2;i++){
                    sleep(1);
                    cout<<"."<<" ";
                  }
            }
            callStarting(ph_no);
            system("cls");
            time_t now = time(0);
            tm *ltm = localtime(&now);
            int hour=(int)ltm->tm_hour;
            int hours=((hour>12)?hour-12:hour);
            int mintes=ltm->tm_min;
            int second=ltm->tm_sec;
            Historyobj.setendTimes(hours,mintes,second);
            file1.open("History.txt",ios::out|ios::app);
            Historyobj.Input();
            file1.write((char*)&Historyobj, sizeof(Historyobj));
            file1.close();
        }
        void callStarting(long long int ph_no){
            time_t now = time(0);
            tm *ltm = localtime(&now);
            int hour=(int)ltm->tm_hour;
            int hours=((hour>12)?hour-12:hour);
            int mintes=ltm->tm_min;
            int second=ltm->tm_sec;
            Historyobj.setstartTimes(hours,mintes,second);
            int hr=0,min=0,sec=0;
            char ch;
            while(1){
                if(kbhit()){
                    break;
                }
                system("cls");
                cout<<"\t\t\t\t"<<"+91 "<<ph_no<<endl<<endl<<endl;
                cout<<"\t\t\t\t  ";
                    if(min<10)
                        cout<<'0'<<hr<<" : ";
                    else
                        cout<<hr<<" : ";
                    if(hr<10)
                        cout<<'0'<<hr<<" : ";
                    else
                        cout<<min<<" : ";
                    if(sec<10)
                        cout<<'0'<<sec<<endl;
                    else
                        cout<<sec<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t   Press Any key to Call End"<<endl;
                sec++;
                if(sec==60){
                    min++;
                    sec=00;
                    if(min==60){
                        hr++;
                        min=00;
                        if(hr==12){
                            hr=00;
                        }
                    }
                }
                sleep(1);
            }
        }


        void HistoryFunction(){
            while(1){
            file1.open("History.txt",ios::in);
            cout<<"Name\t\tPhone No\tStart Time\tEnd Time\tTime Taken"<<endl;
            while (file1.read((char*)&Historyobj, sizeof(Historyobj))){
                Historyobj.Display();
                Historyobj.DisplayStartHours();
                Historyobj.DisplayEndHours();
                Historyobj.DisplayHours();
                cout<<endl;
            }
            file1.close();
            cout<<endl<<endl<<"\t\t\t\t(1) - Back";
                int choice;
                cin>>choice;
                if(choice){
                    system("cls");
                    break;
                }
            }
        }
        void UpdateFunction(){
            string Name;
            cout<<"Enter the Name : ";
            cin>>Name;
            file1.open("Contant.txt",ios::in);
            file2.open("Update.txt",ios::out|ios::app);
            while(file1.read((char*)&Contactobj, sizeof(Contactobj))){
                    if(Contactobj.getName()==Name){
                        cout<<"Enter the Name : ";
                        cin>>Name;
                        Contactobj.setContact(Name,Contactobj.getPhoneNo());
                    }
                    file2.write((char*)&Contactobj, sizeof(Contactobj));
            }
            file1.close();
            file2.close();

            file1.open("Contant.txt",ios::out | ios::trunc);
            file1.close();

            file1.open("Update.txt",ios::in);
            file2.open("Contant.txt",ios::out|ios::app);
            while(file1.read((char*)&Contactobj, sizeof(Contactobj))){
                file2.write((char*)&Contactobj, sizeof(Contactobj));
            }
            file1.close();
            file2.close();

            file1.open("Update.txt",ios::out | ios::trunc);
            file1.close();
        }
};

void Dial(){
     PhoneBook obj;
     while(1){
         cout<<"\t\t\t\t\t1 - CALL "<<endl;
         cout<<"\t\t\t\t\t2 - SEARCH CONTACT"<<endl;
         cout<<"\t\t\t\t\t3 - RECENT CALL"<<endl;
         cout<<"\t\t\t\t\t4 - HISTORY"<<endl;
         cout<<"\t\t\t\t\t5 - BAck"<<endl;
         cout<<"Enter the Choice : ";
         int choice,flag=0;
         cin>>choice;
         switch(choice){
             case 1:
                system("cls");
                obj.callFunction();
                break;
             case 2:
                system("cls");
                obj.searchFunction();
                break;
            case 3:
                system("cls");
                obj.RecendCall();
                break;
             case 4:
                system("cls");
                obj.HistoryFunction();
                break;
             case 5:
                flag=1;
                break;
         }
         if(flag){
            system("cls");
            break;
         }
     }
}
void ContactList(){
    PhoneBook obj;
    while(1){
         cout<<"\t\t\t\t\t1 - ADD CONTACT"<<endl;
         cout<<"\t\t\t\t\t2 - DELETE CONTACT"<<endl;
         cout<<"\t\t\t\t\t3 - UPDATE CONTACT"<<endl;
         cout<<"\t\t\t\t\t4 - CONTACT LIST"<<endl;
         cout<<"\t\t\t\t\t5 - DELETED LIST"<<endl;
         cout<<"\t\t\t\t\t6 - BAck"<<endl;
         cout<<"Enter the Choice : ";
         int choice,flag=0;
         cin>>choice;
         switch(choice){
               case 1:
                    system("cls");
                    obj.addContactFunction();
                    break;
               case 2:
                    system("cls");
                    obj.deleteFunction();
                    break;
               case 3:
                    system("cls");
                    obj.UpdateFunction();
                    break;
               case 4:
                    system("cls");
                    obj.listFunction();
                    break;
               case 5:
                    system("cls");
                    obj.deletedFunction();
                    break;
               case 6:
                    flag=1;
                    break;
         }
         if(flag){
            system("cls");
            break;
         }
     }
}
int main(){
	PhoneBook obj;
    cout<<"\t\t\t\t   Contact Management System"<<endl;
    cout<<"\t\t\t\t   -------------------------"<<endl<<endl;
    while(1){
        cout<<"\t\t\t\t\t1 - Dial"<<endl;
        cout<<"\t\t\t\t\t2 - Contact List"<<endl;
        cout<<"\t\t\t\t\t0 - Exit"<<endl;
        cout<<"Enter the Choice : ";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                system("cls");
                Dial();
                break;
            case 2:
                system("cls");
                ContactList();
                break;
            case 0:
                system("cls");
                cout<<"\t\t\t\t\tExit"<<endl;
                exit(0);
                break;
        }
    }
}


