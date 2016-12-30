#include <iostream>

#include "VulkanizedEngine.hpp"

using namespace std;
int main(){
	VulkanizedEngine app;

	try {
        app.run();
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

	cout << "Exiting." << endl;
	return EXIT_SUCCESS;
}