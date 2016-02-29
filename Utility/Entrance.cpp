
#include "Utility.h"
#include <iostream>

class TestClass{
public:
	TestClass(){
		x = y = z = 0;
	}
	int x, y, z;

	void foo(){
		std::cout << "foo" << endl;
	}
};

int main(){
	using namespace Utility;
	//List<TestClass*> test;
	//test.Add(new TestClass());
	//test.Add(new TestClass());
	//test.Add(new TestClass());
	//test[1]->x = 100;
	//test[2]->foo();
	//test[1] = new TestClass();
	//test[1]->y = 200;
	//std::cout << test[1]->y << endl;

	//List<List<TestClass*>>test;
	//test.Add(List<TestClass*>());
	//test[0].Add(new TestClass());
	//test[0].Add(new TestClass());
	//test[0][1]->foo();
	//test[0][0]->y = 3;

	//Dictionary<int, Dictionary<int, TestClass>> test;
	//test.Add(0, Dictionary<int, TestClass>());
	//test.Add(1, Dictionary<int, TestClass>());
	//test[0][0] = TestClass();
	//test[0][0].foo();
	//test[0][1].foo();

	Dictionary<int, int>test;
	test[0] = 1;
	int x = test[0];
	cout << test[0] << endl;
}