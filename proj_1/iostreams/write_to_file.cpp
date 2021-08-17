#include <iostream>
#include <fstream>
#include <vector>
int main() 
{
    std::string file_name = "practice.txt";
    std::ofstream  file(file_name,std::ios::app);
    std::vector<std::string> names;
    names.push_back("tanuja");
    names.push_back("mahith");
    names.push_back("venkat");
    if (file.is_open())
    {
        std::cout << "file opened";
    }

    /*for (std::string name : names) 
    {
        file << name << std::endl;
    }*/
}
