#include <iostream>
#include <thread>
#include <vector>

void act1(char* val){
	for (int i=0; i <= 200; i++){
		std::this_thread::sleep_for(std::chrono::milliseconds(2));
		std::cout << *val;
	}
}

int main(int argc, char const *argv[])
{
	char v1 = 'a';
	char v2 = 'c';
	std::vector<std::thread> v;
	for (int i =1; i <= 400; i++){
		v.push_back(std::thread(act1, &v1));
		v.push_back(std::thread(act1, &v2));
	}
	for (std::thread& t: v){
		t.join();
	}
	// std::thread worker1(act1, &v1);
	// std::thread worker2(act1, &v2);
	// worker1.join();
	// worker2.join();
	return 0;
}