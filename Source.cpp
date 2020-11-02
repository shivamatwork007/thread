#include <iostream>
#include <thread>

bool isFinished = false;

void function() {
	while (!isFinished) {
		std::cout << "thread1" << std::endl;
		std::cin.get();
	}
}
int main() {
	std::thread worker(function);
	std::cin.get();
	isFinished = true;
	
	worker.join();
	std::cin.get(); 
}