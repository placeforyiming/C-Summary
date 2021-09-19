#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <array>

using std::vector;
using std::unordered_map;
using std::string;


//array, vector, unordered map

int main(){


    // native array[] in c++ is a pointer which stores the memory address of the first element
    int native_array[]={4,5,6,1,2};
    // output one value
    std::cout<<native_array[2]<<std::endl;
    // output the memory address stored as a pointer
    std::cout<<native_array<<std::endl;
    // output the value of first element
    std::cout<<*native_array<<std::endl;
    // output the second value by moving the pointer and dereference
    std::cout<<*native_array+1<<std::endl;
    // output the third value by moving the pointer and dereference
    std::cout<<*native_array+2<<std::endl;
    // output the second value by: 1. change the interger pointer to char pointer;
    //                             2. moving the pointer for 4 byte, 1 interger= 4 byte , 1 char = 1 byte; 
    //                             3. change the pointer back to integer, then dereference
    std::cout<<*(int *)((char*)native_array+4)<<std::endl;

    //multi-dimentional array is the array of pointers
    int double_array[2][3]={{1,2,3},{4,5,6}};
    int double_array_[2][3]={1,2,3,4,5,6};
    std::cout<<double_array[1][1]<<std::endl;
    std::cout<<double_array_[1][1]<<std::endl;
    // dangerous case, native array does not have boundary check
    std::cout<<double_array[2][1]<<std::endl;


    // define a two dimentional array with [2,3]
    int** a2d=new int*[3];
    for (int i=0; i<2;i++){
        a2d[i]= new int[3];
    }
    // define a three dimentional array with [2,3,3]
    int*** a3d=new int**[3];
    for (int i=0; i<2;i++){
        a3d[i]= new int*[3];
        for (int j; j<3;j++){
            a3d[i][j]= new int[3];
        }
    }


    // std::array is almost the same as the native array, but it is a c++ class instead of a pointer. As a class, it has some useful functions with boundary checking, but it's still a static array.

    std::array<int, 5> stl_array={4,5,6,1,2};
    std::cout<<stl_array[4]<<std::endl;
    std::cout<<stl_array.size()<<std::endl;
    std::cout<<*stl_array.begin()<<std::endl;
    std::cout<<*(stl_array.begin()+1)<<std::endl;

    std::array<std::array<int, 3>,2> stl_array_2={4,5,6,1,2,4};
    // array with shape [2,3]
    std::cout<<stl_array_2[1][2]<<std::endl;


    //std::vector is a dynamic array.
    std::vector<int> v {1, 2, 3};
    // Print the contents of the vector
    for (int i=0; i < v.size(); i++) {
      std::cout << v[i] << "\n";
    }
    // Push 4 to the back of the vector
    v.push_back(4);
    // Print the contents again
    for (int i=0; i < v.size(); i++) {
      std::cout << v[i] << "\n";
    }
    

    // unordered map, hash table
}