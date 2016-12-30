#ifndef _VULKANIZED_ENGINE_HPP_
#define _VULKANIZED_ENGINE_HPP_

#include <vulkan/vulkan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>
#include <stdexcept>
#include <functional>

using namespace std;

class VulkanizedEngine{
public:
	const int WIDTH = 800;
	const int HEIGHT = 600;

	void run(){
		initVulkan();
		mainLoop();
        deInitVulkan();
	}

private:
	GLFWwindow * window;

	void initVulkan(){
		glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan Engine", nullptr, nullptr);

        uint32_t extensionCount = 0;
        vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

        glm::mat4 matrix;
        glm::vec4 vec;
        auto test = matrix * vec;
	}

	void mainLoop(){
		while (!glfwWindowShouldClose(window)) {
			glfwPollEvents();
		}
	}

    void deInitVulkan(){
        glfwDestroyWindow(window);
        glfwTerminate();
    }
};

#endif
