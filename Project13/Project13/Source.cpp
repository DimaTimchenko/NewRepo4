#include <iostream>
#include"MyString.h"
using namespace std;
int main() {
	MyString obj1("Hello Friend");
	MyString obj2("subna");
	obj1.MyDelChr('l');
	obj1.Print();
	obj1.MyStrCat(obj2);
	obj1.Print();
	cout << "sds";
}