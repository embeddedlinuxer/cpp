#include <string>
#include <iostream>
#include <thread>
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>

class CSTL_VECTOR
{

public:
	CSTL_VECTOR();
	~CSTL_VECTOR();
	void stlVector();
	//void stlVector_get_allocator();
	//void stlVector_reserve();

protected:

private:

	std::vector<std::string> stringVector = {"chi","cago"};
	std::vector<char> charVector = {'c','h','i','c','a','g','o'};
	std::vector<char> charVector2 = {'b','o','s','t','o','n'};
	std::vector<int> intVector = {1,2,3,4,5,6};


};
