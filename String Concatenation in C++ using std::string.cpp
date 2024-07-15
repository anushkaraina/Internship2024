#include<iostream>
#include<string>
using namespace std;
int main()
{
	std::string str1="hello,";
	std::string str2="world!,";
	std::string result=str1+str2;
	std::cout << "concatenated string: " << result << std:: endl;
	return 0;
}
