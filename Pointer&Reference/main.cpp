#include <iostream>

int reverse(int& a);
int* reverse_pointer_value(int* a);


int main(){

    // define a reference
    // cannot be null, have to refer an existing variable 
    int a=8;
    int& b=a;

    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    b=b+1;
    std::cout<<a<<std::endl;

    auto c=reverse(a);
    std::cout<<c<<std::endl;

    auto d=reverse(b);
    std::cout<<d<<std::endl;
    std::cout<<a<<std::endl;

    // define a null pointer
    // dangerous to define a pointer without initialization
    int* aa=nullptr;
    std::cout<<aa<<std::endl;
    int bb=8;
    aa= &bb;
    std::cout<<aa<<std::endl;
    std::cout<<*aa<<std::endl;

    auto cc= reverse_pointer_value(aa);

    // manipulate input pointer also, so the value of cc is equal to the value of aa 
    std::cout<<aa<<std::endl;
    std::cout<<*aa<<std::endl;
    std::cout<<cc<<std::endl;
    std::cout<<*cc<<std::endl;
}


int reverse(int& a){
    a=a+1;
    return -a;
}

int* reverse_pointer_value(int* a){
    *a=*a+1;
    *a=-*a;
    return a;
}