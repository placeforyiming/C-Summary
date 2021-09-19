# include <iostream>
#include <typeinfo>


int main(){
    // orginal built-in data tyep in C++
    int a =1;
    float b=1.2;
    long c=1.4;
    double d=2.2;
    bool e=0;
    char f='a';

    enum Color_type {One, Two, Three};

    int aa[]={2,3,4,5};

    
    // long long, long double, short, wchar_t,char16_t,char32_t

    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    std::cout<<"Value: "<<a<<std::endl;
    std::cout<<"Data type: "<<typeid(a).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(a)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;

    std::cout<<"Value: "<<b<<std::endl;
    std::cout<<"Data type: "<<typeid(b).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(b)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;

    std::cout<<"Value: "<<c<<std::endl;
    std::cout<<"Data type: "<<typeid(c).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(c)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;

    std::cout<<"Value: "<<d<<std::endl;
    std::cout<<"Data type: "<<typeid(d).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(d)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;

    std::cout<<"Value: "<<e<<std::endl;
    std::cout<<"Data type: "<<typeid(e).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(e)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;

    std::cout<<"Value: "<<f<<std::endl;
    std::cout<<"Data type: "<<typeid(f).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(f)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;

    auto g=a+c;
    std::cout<<"Value: "<<g<<std::endl;
    std::cout<<"Data type: "<<typeid(g).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(g)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;

    auto h=a+b;
    std::cout<<"Value: "<<h<<std::endl;
    std::cout<<"Data type: "<<typeid(h).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(h)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;

    // representation of interger
    // data type limit the value has to be chosen from the enum
    Color_type i=Two;
    std::cout<<"Value: "<<i<<std::endl;
    std::cout<<"Data type: "<<typeid(i).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(i)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    
    // also can be used just as normal integer
    int j=One;
    std::cout<<"Value: "<<j<<std::endl;
    std::cout<<"Data type: "<<typeid(j).name()<<std::endl;
    std::cout<<"Data size in byte: "<<sizeof(j)<<std::endl;
    std::cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;


    
}