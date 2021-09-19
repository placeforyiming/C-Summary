#include <fstream>
#include <iostream>
#include <string>

int write_to_file(std::string file_path);
int read_from_file(std::string file_path);

int main()
{
    std::string file_path;
    //char[]="example.txt";
    file_path="example.txt";

    std::cout<<file_path.size()<<std::endl;

    write_to_file(file_path);
    read_from_file(file_path);


}


int write_to_file(std::string file_path){    
    std::ofstream myfile;   
    myfile.open (file_path);
    myfile << "Writing this to a file.\n";
    myfile << "Guess what is this?.\n";
    myfile.close();
    std::cout<<"Write done."<<std::endl;
    return 0;
}

int read_from_file(std::string file_path){    
    std::ifstream myfile;
    myfile.open(file_path);
    if (myfile) {
        std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (std::getline(myfile, line)) {
            std::cout << line << "\n";
        }
    }
    return 0;
}
