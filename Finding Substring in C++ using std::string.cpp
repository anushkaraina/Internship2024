#include<iostream>
#include<string>
int main()
{
	std::string str="hello,world!";
	std::string substr="world";
	size_t found = str.find(substr);
	if(found!=std::string::npos)
	{
		std::cout<<"substring found at index: " << found << std::endl;
	}
	else
	{
		std::cout<<"substring not found"<<std::endl;
	}
	return 0;
}
