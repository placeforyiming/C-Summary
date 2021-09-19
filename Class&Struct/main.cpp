#include<iostream>
#include<string>
//  a class is private by default, but default of struct is public

//  example with public and private methods

//  constructor

//  scope resolution ::

//  Member Initializer Lists in constructor

//  static method (similar with python static method)

//  destructor

namespace number_add {
int add(int a, int b) { return a+b; }
}  

namespace name_add {
std::string add(std::string a, std::string b) { return a+b; }
}  

class animal{
    //default is private
    public:
    std::string name;
    int number;

    animal(std::string na, int num):name(na),number(num){}
    // sometimes should be called manully for releasing memory
    ~animal(){std::cout<<"haha, destruct"<<std::endl;}

    void Print_name(){std::cout<<this->name<<std::endl;}
    void Print_num();
};

void animal::Print_num(){std::cout<<this->number<<std::endl;}



int main(){
    animal Panda("panda",5);
    Panda.Print_name();
    Panda.Print_num();
    Panda.number=number_add::add(Panda.number,5);
    Panda.name=name_add::add(Panda.name,"China");
    Panda.Print_name();
    Panda.Print_num();

    }
