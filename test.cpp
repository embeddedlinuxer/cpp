#include <iostream>
#include <thread>
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>
#include <string>

using namespace std;

void foo(int z)
{
	for (int i=0; i<z; i++) cout << "function pointer callable\n" << endl;
}

class thread_obj {
private:
	mutable	int a;
	int b;
	int c;

public:
	void operator() (int x)
	{
		for (int i = 0; i < x; i++) cout << "function object callable\n" << endl;
	}

	int do_sum(const int _a) const
	{
		a = _a; // a is mutable
		return b + a;
	}	
	
};

class myclass {

// private by default
	mutable int a;
	int b;
	int c;	

public:
	myclass()
	{
		a=1;
		b=1;
		c=1;
	} 

	int fxn(int aa, int bb) const 
	{
		a = 5;
		return aa+bb+a;
	}

	int fxn_2(int aa, int bb)
	{
		a = 1;
		return aa+bb+a;
	}

	void showlist (list <int> g)
	{
		// doubly linked list
		list <int> :: iterator it;
		for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it << endl;
	}

	void showforward_list (forward_list <int> g)
	{
		// list
		forward_list <int> :: iterator it;
		for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it << endl;
	}
};


class CSTL_VECTOR {

public:

	void vector_assign()
	{

	}

	void vector_push_back()
	{
		///////////////////////////////////////
		// begin : regular begin
		// cbegin : constant begin
		// rbegin : reverse begin
		// crbegin : constant reverse begin
		///////////////////////////////////////

		for (int i = 0; i<5; i++) vec_int.push_back(i);

		for (auto i = vec_int.begin(); i != vec_int.end(); ++i) cout << "begin: " << *i << endl;
		for (auto i = vec_int.cbegin(); i != vec_int.cend(); i++) cout << "cbegin: " << *i << endl;
		for (auto i = vec_int.rbegin(); i != vec_int.rend(); i++) cout << "rbegin: " << *i << endl;
		for (auto i = vec_int.crbegin(); i != vec_int.crend(); i++) cout << "crbegin: " << *i << endl;

		vec_char.push_back('v');
		vec_char.push_back('e');
		vec_char.push_back('c');
		vec_char.push_back('t');
		vec_char.push_back('o');
		vec_char.push_back('r');
		vec_char.push_back('c');
		vec_char.push_back('h');
		vec_char.push_back('i');
		vec_char.push_back('c');
		vec_char.push_back('a');
		vec_char.push_back('g');
		vec_char.push_back('o');

		cout << endl << endl;
		cout << "vec_char.data() " << vec_char.data() << endl;
		cout << "capacity() : " << vec_char.capacity() << endl;
		cout << "size() : " << vec_char.size() << endl;
		cout << "max_size() : " << vec_char.max_size() << endl;
		vec_char.resize(8);
		vec_char.shrink_to_fit();
		cout << "size() after resize() " << vec_char.size() << endl;
		cout << "vec_char.front() " << vec_char.front() << endl;
		cout << "vec_char.back() " << vec_char.back() << endl;
		cout << "vec_char.at() " << vec_char.at(3) << endl;
		cout << "vec_char.data() " << vec_char.data() << endl;
	}

	void vector_pop_back()
	{
		cout << endl << endl;
		cout << "vec_char.data(): " << vec_char.data() << endl;
		vec_char.pop_back();
		vec_char.shrink_to_fit();
		cout << "after pop_back(): " << vec_char.data() << endl;
		cout << "size() afer pop_back(): " << vec_char.size() << endl;
	}

	void vector_insert()
	{
		cout << endl << endl;
		cout << "current vec_char.data(): " << vec_char.data() << endl;
		vec_char.insert(vec_char.begin()+5, 'x');
		cout << "after insert(): " << vec_char.data() << endl;
		cout << "size after insert(): "<< vec_char.size() << endl;
	}

	void vector_erase()
	{
		cout << endl << endl;
		cout << "current vec_char.data(): " << vec_char.data() << endl;
		vec_char.erase(vec_char.begin());
		vec_char.shrink_to_fit();
		cout << "after vec_char.erase(vec_char.begin()): " << vec_char.data() << endl;
		vec_char.erase(vec_char.begin()+2,vec_char.begin()+3);
		vec_char.shrink_to_fit();
		cout << "after vec_char.erase(vec_char.begin(vec_char.begin()+2,vec_char.begin()+3)): " << vec_char.data() << endl;
	}
		
	void vector_swap()
	{
		cout << endl << endl;
		cout << "current vec_char.data(): " << vec_char.data() << endl;
		cout << "current vec_char.data2(): " << vec_char2.data() << endl;
		vec_char.swap(vec_char2);
		cout << "after swap char: " << vec_char.data() << endl;
		cout << "after swap char2: " << vec_char2.data() << endl;
	}

	void vector_clear();
	void vector_emplace();
	void vector_emplace_back();

private:

	vector<int> vec_int;
	vector<char> vec_char;
	vector<char> vec_char2 {'a','p','o','l','l','o'};
	vector<string> vec_string;

protected:


};



int main(void)
{	
	CSTL_VECTOR CVECTOR;
	CVECTOR.vector_push_back();
	CVECTOR.vector_pop_back();
	CVECTOR.vector_insert();
	CVECTOR.vector_erase();
	CVECTOR.vector_swap();



	myclass c1;
	const myclass c2; // only access const member functions

	auto r1 = c1.fxn(1,1);
	auto r2 = c1.fxn_2(1,1);
	auto r3 = c2.fxn(1,1);
	//auto r4 = c2.fxn_2(1,1);

	// storage class specifiers
	auto a = 1;
	static int c = 3;
	register int b = 3; // store it in processor register instead of memory to gain speed because it will be heavily used
	
	// define lamda expression
	auto f = [] (int x) {
		for (register int i=0; i<x; i++) cout << "lambda callable\n" << endl;
	};

	thread th1(foo,3);
	thread th2(thread_obj(),5);
	thread th3(f, 5);

	th1.join();
	th2.join();
	th3.join();

	cout << "Wait for th1, th2, and th3 to be done before exiting...." << endl;
	cout << "c1.fxn(1,1) returns " << r1 << "\nc1.fxn_2(1,1) returns " << r2 << "\nc2.fxn(1,1) returns " << r3 << endl;
	cout << "thread 1, 2, and 3 operating independently" << endl;
	
///////////////////////////////
/////////// vector ////////////
///////////////////////////////
	
	/// vector container	
	vector<int> vec;
	for (int i=0; i<=5; i++) vec.push_back(i);
	for (auto i = vec.cbegin(); i != vec.cend(); ++i) cout << "value " << *i << endl;

	vector<string> svec {"sun","mon","tue","wed","thu","fri","sat"};
	for (auto i = svec.cbegin(); i != svec.cend(); ++i) cout << *i << endl;
	for (auto i = svec.rbegin(); i != svec.rend(); ++i) cout << *i << endl;
	cout << "at(3) " <<  svec.at(3) << endl;
	cout << "size : " << svec.size() << endl;
	cout << "capacity : " << svec.capacity() << endl;
	cout << "max_size : " << svec.max_size() << endl;

///////////////////////////////
/////////// list //////////////
///////////////////////////////

	/// list
	list <int> lst; // doubly linked list
	forward_list<int> fwd_lst; // linked list

	for (int i=0; i<10; i++) lst.push_back(i); // doubly linked list
	for (int i=0; i<10; i++) lst.push_front(i); // doubly linked list
	for (int i=0; i<10; i++) fwd_lst.push_front(i*2); // forward list

	cout << "mylst";
	c1.showlist(lst);

	cout << "myfwd_lst";
	c1.showforward_list(fwd_lst);

	fwd_lst.assign({1,2,3});
	c1.showforward_list(fwd_lst);

	fwd_lst.assign(5,100);
	c1.showforward_list(fwd_lst);

	fwd_lst.pop_front(); // remove front element
	c1.showforward_list(fwd_lst);

	fwd_lst.pop_front(); 
	for (int&a : fwd_lst) cout << a << endl;
	return 0;
}

