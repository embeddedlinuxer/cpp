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
	//void stlVector_at();
	//void stlVector_back();
	//void stlVector_capacity();
	//void stlVector_clear();
	//void stlVector_data();
	//void stlVector_size();
	//void stlVector_front();
	//void stlVector_swap();
	//void stlVector_pop_back();
	//void stlVector_push_back();
	//void stlVector_shrink_to_fit();
	//void stlVector_insert();
	//void stlVector_max_size();
	//void stlVector_resize();
	void stlVector_emplace();
	void stlVector_emplace_back();
	void stlVector_empty();
	void stlVector_erase();
	void stlVector_get_allocator();
	void stlVector_reserve();

protected:

private:

	std::vector<std::string> stringVector = {"chi","cago"};
	std::vector<char> charVector = {'c','h','i','c','a','g','o'};
	std::vector<char> charVector2 = {'b','o','s','t','o','n'};
	std::vector<int> intVector = {1,2,3,4,5,6};


};
