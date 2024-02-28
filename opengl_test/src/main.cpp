#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {

    // Initialize GLFW
    glfwInit();

    // Configure OpenGL version and profile
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create a GLFW window
    GLFWwindow* window = glfwCreateWindow(600, 600, "OVERLORD", NULL, NULL);
    if (window == NULL) {
        // Handle error if the window fails to create
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Set up OpenGL context for the window
    glfwMakeContextCurrent(window);

    // Initialize GLAD (load OpenGL functions)
    gladLoadGL();

    // Set OpenGL viewport size
    glViewport(0, 0, 600, 600);

    // Set background color (yellow in this case)
    glClearColor(1.0f, 1.0f, 0.0f, 1.0f);

    // Clear color buffer with the background color
    glClear(GL_COLOR_BUFFER_BIT);

    // Swap the window buffers (display the image)
    glfwSwapBuffers(window);

    // Main rendering loop
    while (!glfwWindowShouldClose(window)) {
        // Handle window events
        glfwPollEvents();
    }

    // Destroy the GLFW window
    glfwDestroyWindow(window);

    // Terminate GLFW
    glfwTerminate();

    return 0;
}
