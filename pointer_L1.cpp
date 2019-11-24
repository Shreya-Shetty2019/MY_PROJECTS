#include<iostream>
int main()
{
	int *ptr;
	std::cout<<"value of p is "<<ptr<<std::endl;
	std::cout<<" address of p is "<<&ptr<<std::endl;
	std::cout<<"size of p is "<<sizeof(ptr)<<std::endl;
	return 0;
}