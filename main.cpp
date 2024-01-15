
#include <stdio.h>
#include <iostream>
#include <thread>

void ThreadPrint(std::string thread) {
	std::cout << thread << std::endl;
}

int main() {
	std::thread thread1(ThreadPrint, "thread 1");
	thread1.join();
	std::thread thread2(ThreadPrint, "thread 2");
	thread2.join();
	std::thread thread3(ThreadPrint, "thread 3");
	thread3.join();

	return 0;
}