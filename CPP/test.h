#ifndef TEST_H
#define TEST_H
#include <iostream>

template <class T>
class Test{
	std::string _private = "_private";
	public:
		Test(T t);
		Test();
		virtual void show(T value);
		void accessor();
		friend std::string accessor();
};
#endif

template <typename V>
Test<V>::Test(){
	std::cout << "Without Args" << std::endl;
}
template <typename Z>
Test<Z>::Test(Z t){
	std::cout << "With Args" << t << std::endl;
}
template <typename U>
void Test<U>::show(U value){
	std::cout << value << std::endl;
	// return value;
}