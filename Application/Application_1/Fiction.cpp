#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class UserDetails{
    long long int phoneno;
    string name,username,password;
    public:
    void input(){
        cout<<"Enter The Name : ";
        cin>>name;
        cout<<"Enter The Phone No : ";
        cin>>phoneno;
        cout<<"Enter The User Name : ";
        cin>>username;
        cout<<"Enter The Password : ";
        cin>>password;
    }
    void Display(){
        cout<<left<<setw(16);
        cout<<name;
        cout<<left<<setw(16);
        cout<<phoneno;
        cout<<left<<setw(16);
        cout<<username;
        cout<<password<<endl;
    }
    string getName(){
        return name;
    }
    long long int getPhoneNo(){
        return phoneno;
    }
    string getUserName(){
        return username;
    }
    string getPassword(){
        return password;
    }
};
UserDetails UserDetailsobj;

class FileDetails{
    string userName,bookName;
    int idate,imonth,iyear;
    int rdate,rmonth,ryear;
    int DueAmount;
    public:
        void setUserName(string username){
            this->userName=username;
        }
        void setBookName(string bookName){
            this->bookName=bookName;
        }
        string getuserName(){
            return userName;
        }
        string getbookName(){
            return bookName;
        }
        void Display(){
            cout<<left<<setw(16);
            cout<<userName;
            cout<<bookName<<endl;
        }
        void DisplayFile(){
            cout<<left<<setw(16);
            cout<<userName;
            cout<<left<<setw(16);
            cout<<bookName;
        }
        void DisplayIssueData(){
            cout<<idate<<":";
            cout<<imonth<<":";
            cout<<left<<setw(16);
            cout<<iyear;
        }
        void DisplayReturnData(){
            cout<<rdate<<":";
            cout<<rmonth<<":";
            cout<<left<<setw(16);
            cout<<ryear;
        }
        void DisplayDue(){
            cout<<DueAmount<<endl;
        }
        void DisplayBooks(){
            cout<<bookName<<endl;
        }
        void SetDetails(){
            this->userName=userName;
            this->bookName=bookName;
        }
        void SetReturnData(int rdate,int rmonth,int ryear){
            this->rdate=rdate;
            this->rmonth=rmonth;
            this->ryear=ryear;
            DueAmountFunction();
            cout<<endl;
        }

        void SetCurrentData(){
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            idate=tm.tm_mday;
            imonth=tm.tm_mon + 1;
            iyear=tm.tm_year + 1900;
        }

        int DueAmountFunction(){
            int md[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
            long int n1 = ryear * 365 + rdate;
            for (int i = 0; i < rmonth - 1; i++)
            {
                n1 =n1+ md[i];
            }
            n1 = n1+leapyear(ryear);
            long int n2 = iyear * 365 + idate;
            for (int i = 0; i < imonth - 1; i++)
            {
                n2 =n2+ md[i];
            }
            n2 = n2+leapyear(iyear);
            int difference_date=n1 - n2;
            if(difference_date>30){
                int amount=0;
                difference_date-=30;
                while(0<difference_date){
                    amount+=5;
                    difference_date-=1;
                }
                DueAmount=amount;
            }else{
                DueAmount=0;
            }
        }

        int leapyear(int year){
            if(year%4==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
};
FileDetails FileDetailsobj;
class File{
    public:
        fstream file1,file2;
        void ReadFunction(){
            file1.open("ReadList.txt",ios::out | ios::app);
            FileDetailsobj.SetDetails();
            cout<<"Wirite....."<<endl;
            file1.write((char*)&FileDetailsobj, sizeof(FileDetailsobj));
            file1.close();
            read();
        }
        void read(){
            file1.open("ReadList.txt",ios::in);
            while(file1.read((char*)&FileDetailsobj, sizeof(FileDetailsobj))){
            FileDetailsobj.Display();
            }
            file1.close();
        }
        void IssuedFunction(){
            file1.open("IssuedList.txt",ios::out | ios::app);
            FileDetailsobj.SetDetails();
            FileDetailsobj.SetCurrentData();
            file1.write((char*)&FileDetailsobj, sizeof(FileDetailsobj));
            file1.close();
        }
};
File Fileobj;
class Read{
    fstream file1,file2;
    protected:
    int choice;
    public:
    void read(string title){
            cout<<"\t\t\t\tSTORY"<<endl;
            cout<<"\t\t\t\t-----"<<endl<<endl;
            file1.open("D:\\C++\\Application\\Application_1\\Story\\"+title+".txt",ios::in);
            char ch;
            while(file1>>noskipws>>ch){
                cout<<ch;
            }
            cout<<endl;
            file1.close();
    }
    void choiceFunction(string titile){
            cout<<"\t\t\t\t1 - READ"<<endl;
            cout<<"\t\t\t\t2 - ISSUSE"<<endl;
            cout<<"Enter The Choice : ";
                    cin>>choice;
                    switch(choice){
                        case 1:{
                            FileDetailsobj.setBookName(titile);
                            read(titile);
                            Fileobj.ReadFunction();
                            break;
                        }
                        case 2:{
                            FileDetailsobj.setBookName(titile);
                            Fileobj.IssuedFunction();
                            cout<<"\t\t\tSuccess Fully Issued"<<endl;
                            break;
                        }
                    }
    }
};

class Adventurestories:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tAdventure stories"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - The Little Prince"<<endl;
            cout<<"\t\t\t\t2 - The Alchemist"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("LittlePrince");
                    break;
                case 2:
                    choiceFunction("TheAlchemist");
                    break;
            }
        }
};

class Classics:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tClassics"<<endl;
            cout<<"\t\t\t\t--------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Dream Of The Red Chamber"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("DreamOfTheRedChamber");
                    break;
            }
        }
};

class Crime:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tCrime"<<endl;
            cout<<"\t\t\t\t-----"<<endl<<endl;
            cout<<"\t\t\t\t1 - The Godfather"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("TheGodfather");
                    break;
            }
        }
};

class Fairy:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tFairy tales, fables, and folk tales"<<endl;
            cout<<"\t\t\t\t-----------------------------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - The Adventures of Pinocchio"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("TheAdventuresofPinocchio");
                    break;
            }
        }
};

class Fantasy:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tFantasy"<<endl;
            cout<<"\t\t\t\t-------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Harry Potter"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("HarryPotter");
                    break;
            }
        }
};

class Historicalfiction:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tHistoricalfiction"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - The Name of the Rose"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("TheNameoftheRose");
                    break;
            }
        }
};

class Horror:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tHorror"<<endl;
            cout<<"\t\t\t\t------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Jaws "<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("Jaws");
                    break;
            }
        }
};

class Humourandsatire:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tHumour and satire"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Animal Farm"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("AnimalFarm");
                    break;
            }
        }
};

class Literaryfiction:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tLiterary fiction"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - War and Peace"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("WarandPeace");
                    break;
            }
        }
};


class Mystery:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tMystery"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - The Da Vinci Code"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("TheDaVinciCode");
                    break;
            }
        }
};


class Poetry:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tPoetry"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Roald Dahl"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("RoaldDahl");
                    break;
            }
        }
};


class Plays:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tPlays"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - William Shakespeare"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("WilliamShakespeare");
                    break;
            }
        }
};


class Romance:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tRomance"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Love Story"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("LoveStory");
                    break;
            }
        }
};


class Sciencefiction:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tScience fiction"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Dune"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("Dune");
                    break;
            }
        }
};


class Shortstories:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tShort stories"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Jack Reacher"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("JackReacher");
                    break;
            }
        }
};


class Thrillers:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tThrillers"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Gone Girl"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("GoneGirl");
                    break;
            }
        }
};


class War:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tWar"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - The Eagle Has Landed"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("TheEagleHasLanded");
                    break;
            }
        }
};

class Womensfiction:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tWomens fiction"<<endl;
            cout<<"\t\t\t\t-----------------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Fear of Flying"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("FearofFlying");
                    break;
            }
        }
};


class Youngadult:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tYoung adult"<<endl;
            cout<<"\t\t\t\t-----------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Prisoner of Azkaban"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("PrisonerofAzkaban");
                    break;
            }
        }
};

//NON-FICTION

class Aandmemoir:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tAutobiography and memoir"<<endl;
            cout<<"\t\t\t\t-----------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Wolf Totem"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("WolfTotem");
                    break;
            }
        }
};

class Biography:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tBiography"<<endl;
            cout<<"\t\t\t\t-----------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Lust for Life"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("LustforLife");
                    break;
            }
        }
};

class Essays:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tEssays"<<endl;
            cout<<"\t\t\t\t-----------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Prisoner of Azkaban"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("PrisonerofAzkaban");
                    break;
            }
        }
};

class Nfnovel:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tNon-fiction novel"<<endl;
            cout<<"\t\t\t\t-----------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Prisoner of Azkaban"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("PrisonerofAzkaban");
                    break;
            }
        }
};

class Selfhelp:public Read{
    public:
        void choicefun(){
            //system("cls");
            cout<<"\t\t\t\tSelf-help"<<endl;
            cout<<"\t\t\t\t-----------"<<endl<<endl;
            cout<<"\t\t\t\t1 - Prisoner of Azkaban"<<endl;
            cout<<"Enter The Choice : ";
            cin>>choice;
            switch(choice){
                case 1:
                    choiceFunction("PrisonerofAzkaban");
                    break;
            }
        }
};


