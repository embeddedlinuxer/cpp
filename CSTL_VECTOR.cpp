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
	cout << "charVector.max_size(): " << charVector.max_size() << endl;
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
		 << endl;

	charVector.pop_back();
	charVector.shrink_to_fit();
	cout << "charVector after pop_back: " << charVector.data() 
		 << " size: " << charVector.size() 
		 << " capacity: " << charVector.capacity() 
		 << " at(2): " << charVector.at(2) 
		 << endl;

	charVector.push_back('x');
	charVector.push_back('x');
	charVector.push_back('x');
	charVector.push_back('x');
	charVector.shrink_to_fit();
	cout << "charVector after push_back: " << charVector.data() 
		 << " size: " << charVector.size() 
		 << " capacity: " << charVector.capacity() 
		 << endl;

	charVector.insert(charVector.begin()+3,'Q');
	charVector.shrink_to_fit();
	cout << "charVector after insert: " << charVector.data() 
		 << " size: " << charVector.size() 
		 << " capacity: " << charVector.capacity() 
		 << endl;

	cout << "charVector: " << charVector.data() << endl;
	cout << "charVector2: " << charVector2.data() << endl;

	charVector.swap(charVector2);
	charVector.shrink_to_fit();
	cout << "charVector after swap: " << charVector.data() << endl;
	cout << "charVector2 after swap: " << charVector2.data() << endl;

	charVector.resize(30);
	cout << "capacity after resize(30): " << charVector.capacity() << endl; 
	cout << "size after resize(30): " << charVector.size() << endl; 
	charVector.reserve(30);
	cout << "capacity after reserve(30): " << charVector.capacity() << endl; 
	cout << "size after reserve(30): " << charVector.size() << endl; 
	cout << "charVector after resize: " << charVector.data() << endl;
	charVector2.swap(charVector);

	charVector.emplace(charVector.begin()+1,'i'); 
	charVector.emplace(charVector.begin()+2,'i'); 
	charVector.emplace(charVector.begin()+5,'i'); 
	 
	charVector.insert(charVector.begin()+10,'n'); 

	charVector.push_back('I'); 
	charVector.push_back('l'); 
	charVector.push_back('l'); 
	charVector.push_back('i'); 
	charVector.push_back('n'); 
	charVector.push_back('o'); 
	charVector.push_back('i'); 
	charVector.push_back('s'); 

	charVector.emplace_back('k'); 
	charVector.emplace_back('j');

	charVector.resize(10);
	charVector.shrink_to_fit();

	cout << "capacity after resize(10): " << charVector.capacity() << endl; 
	cout << "size after resize(10): " << charVector.size() << endl; 
	cout << "data after resize(10): " << charVector.data() << endl;

	if (charVector.empty()) cout << "empty" << endl;
	else cout << "not empty" << endl;

	charVector.erase(charVector.begin()+2, charVector.begin()+4);
	charVector.shrink_to_fit();
	
	cout << "capacity after erase: " << charVector.capacity() << endl; 
	cout << "size after erase: " << charVector.size() << endl;
	cout << "data after erase: " << charVector.data() << endl;

	charVector.clear();

	charVector.push_back('I'); 
	charVector.push_back('l'); 
	charVector.push_back('l'); 
	charVector.push_back('i'); 
	charVector.push_back('n'); 
	charVector.push_back('o'); 
	charVector.push_back('i'); 
	charVector.push_back('s'); 

	charVector.resize(30);

	charVector.insert(charVector.end(), 'C');
	charVector.insert(charVector.end(), 'h');
	//charVector.shrink_to_fit();

	cout << "capacity after resize: " << charVector.capacity() << endl; 
	cout << "size after resize: " << charVector.size() << endl;
	cout << "data after resize: " << charVector.data() << endl;


}
