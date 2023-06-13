/*

Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes.
Now, create a function in each of these classes which prints "I am a mammal", "I am a marine animal" and "I belong to both the
categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale

*/


#include<iostream>

using namespace std;


class Mammals{
    public :
    void print_Mammals(){
        cout<<"I am a mammal"<<endl;
    }
};
class MarineAnimals{
    public :
    void print_MarineAnimals(){
        cout<<"I am a marine animal"<<endl;
    }
};
class BlueWhale : public Mammals,public MarineAnimals{
    public :
    void print_BlueWhale(){
        cout<<"I belong to both the categories: Mammals as well as Marine Animals"<<endl;
    }
};
int main(){
    Mammals M_obj;
    MarineAnimals MA_obj;
    BlueWhale BW_obj;
    M_obj.print_Mammals();
    MA_obj.print_MarineAnimals();
    BW_obj.print_BlueWhale();
    BW_obj.print_Mammals();
    BW_obj.print_MarineAnimals();


}
