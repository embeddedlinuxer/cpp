#include "CSTL_VECTOR.h"

using namespace std;

CSTL_VECTOR::
CSTL_VECTOR()
{

}


CSTL_VECTOR::
~CSTL_VECTOR()
{

}


void
CSTL_VECTOR::
stlVector()
{
	char sample[] = {'c','h','i','c','a','g','o'};
	for (auto i=charVector.begin(); i != charVector.end(); i++)
	cout << "charVector with begin: " << *i << endl;
	for (auto i=charVector.cbegin(); i != charVector.cend(); i++)
	cout << "charVector with cbegin " << *i << endl;
	for (auto i=charVector.rbegin(); i != charVector.rend(); i++)
	cout << "charVector with rbegin: " << *i << endl;
	for (auto i=charVector.crbegin(); i != charVector.crend(); i++)
	cout << "charVector with crbegin: " << *i << endl;

	cout << "charVector: " << charVector.data() << " size: " << charVector.size() << endl;
	cout << "charVector2: " << charVector2.data() << " size: " << charVector2.size() << endl;

	charVector.assign (charVector2.begin(),charVector2.end());
	cout << "charVector after assign boston: " << charVector.data() 
		 << " size: " << charVector.size()
		 << " back: " << charVector.back()
		 << " front: " << charVector.front()
		 << " capacity: " << charVector.capacity()
		 << endl;

	charVector.clear();
	charVector.assign(sample,sample+7);
	charVector.shrink_to_fit();
	cout << "charVector after assign chicago: " << charVector.data() 
		 << " size: " << charVector.size() 
		 << " capacity: " << charVector.capacity() 
		 << " at 4: " << charVector.at(2) 
		 << endl;

	charVector.pop_back();
	charVector.shrink_to_fit();
	cout << "charVector after pop_back: " << charVector.data() 
		 << " size: " << charVector.size() 
		 << " capacity: " << charVector.capacity() 
		 << " at 4: " << charVector.at(2) 
		 << endl;

	charVector.push_back('x');
	charVector.shrink_to_fit();
	cout << "charVector after push_back: " << charVector.data() 
		 << " size: " << charVector.size() 
		 << " capacity: " << charVector.capacity() 
		 << " at 4: " << charVector.at(2) 
		 << endl;

	charVector.insert(charVector.begin()+3,'Q');
	charVector.shrink_to_fit();
	cout << "charVector after insert: " << charVector.data() 
		 << " size: " << charVector.size() 
		 << " capacity: " << charVector.capacity() 
		 << " at 4: " << charVector.at(2) 
		 << endl;

	cout << "charVector: " << charVector.data() << endl
	 	 << "charVector2: " << charVector2.data() << endl;
	charVector.swap(charVector2);
	charVector.shrink_to_fit();
	cout << "charVector after swap: " << charVector.data() << endl
		 << "charVector2 after swap: " << charVector2.data() << endl
		 << "charVector.at 0: " << charVector.at(0) << endl
		 << "charVector.at 1: " << charVector.at(1) << endl
		 << "charVector.at 2: " << charVector.at(2) 
		 << "charVector.max_size(): " << charVector.max_size()
		 << endl;
	charVector.resize(20);
	charVector.shrink_to_fit();
	cout << "charVector after swap: " << charVector.data() << endl
		 << "charVector2 after swap: " << charVector2.data() << endl
		 << "charVector.at 0: " << charVector.at(0) << endl
		 << "charVector.at 1: " << charVector.at(1) << endl
		 << "charVector.at 2: " << charVector.at(2) 
		 << endl;
		 charVector.push_back('i'); 
		 charVector.push_back('l'); 
		 charVector.push_back('l'); 
		 charVector.push_back('i'); 
		 charVector.push_back('n'); 
		 charVector.push_back('o'); 
		 charVector.push_back('i'); 
		 charVector.push_back('s'); 
		charVector.shrink_to_fit();
	cout << "charVector after push_back: " << charVector.data()
		 << endl;
}
