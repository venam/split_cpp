#include <iostream>
#include <string>
#include <vector>


std::vector <std::string> split(std::string the_string,std::string delimiter)
{
	std::vector <std::string>  tempor_vector;
	unsigned int forwarder1 = 0;
	unsigned int forwarder2 = 0;
	forwarder1 = the_string.find(delimiter, forwarder1);
	while(forwarder1!=std::string::npos)
	{
		forwarder1 ++;
		tempor_vector.push_back(the_string.substr(forwarder2,forwarder1-forwarder2-1));
		forwarder2 = forwarder1;
		forwarder1 = the_string.find(delimiter, forwarder1);
	}
	if(forwarder1!=forwarder2)
		tempor_vector.push_back(the_string.substr(forwarder2,forwarder1-forwarder2-1));
	return tempor_vector;
}


int main()
{
    std::string my_string = "hello:world:all";
	std::vector <std::string> test_vector;
	test_vector = split(my_string,":");
	for(int i=0;i<test_vector.size();i++)
	{
		std::cout<<test_vector[i]<<"---\n";
	}
    return 0;
}
