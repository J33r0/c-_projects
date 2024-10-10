#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(int argc, char const *argv[])
{
    if (!glfwInit())
        return -1;

    GLFWwindow *window = glfwCreateWindow(800, 800, "OpenGL Window", NULL, NULL); // Create a window
    if (!window)                                                                  // Check if the window was created
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window); // Make the window the current context

    if (glewInit() != GLEW_OK)
        return -1; // Initialize GLEW, check if it's ok

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

        glfwSwapBuffers(window); // Swap the buffers

        glfwPollEvents(); // Poll for process events
    }

    glfwDestroyWindow(window); // Destroy the window
    glfwTerminate();           // Terminate the window

    return 0;
}
