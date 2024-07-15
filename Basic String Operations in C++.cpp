#include <iostream>
#include <string>

int main()
{   
//f1
    std::string str = "Hello, How are you?";
    int l = str.length(); 
    std::cout << "length of string" <<l<<std::endl;
//f2    
    std::cout << str.at(3) <<std::endl;
//f3
str.append(" Welcome back!");
std::cout << str;
    return 0;
}
