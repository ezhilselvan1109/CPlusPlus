/*

Make a class named Fruit with a data member to calculate the number of fruits in a basket. Create two other classes named Apples and Mangoes to calculate
the number of apples and mangoes in the basket. Print the number of fruits of each type and the total number of fruits in the basket.

*/

#include<iostream>

using namespace std;

class Fruit{
    static int Fruitcount;
    public:
        Fruit(){
            Fruitcount++;

        }
        getFruitCount(){
            return Fruitcount;
        }
};
class Apples : public Fruit{
    static int Applescount;
    public:
        Apples(){
            Applescount++;
        }
        getApplesCount(){
            return Applescount;
        }
};
class Mangoes : public Fruit{
    static int Mangoescount;
    public:
        Mangoes(){
            Mangoescount++;
        }
        getMangoesCount(){
            return Mangoescount;
        }
};

int Fruit::Fruitcount=0;
int Apples::Applescount=0;
int Mangoes::Mangoescount=0;

int main(){
    Mangoes Mobj1,Mobj2,Mobj3;
    Apples Aobj1,Aobj2;
    cout<<"Total Fruit : "<<Mobj3.getFruitCount()<<endl;
    cout<<"Total Mangoescount : "<<Mobj3.getMangoesCount()<<endl;
    cout<<"Total Applescount : "<<Aobj2.getApplesCount()<<endl;
}
