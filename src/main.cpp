#include <GLFW/glfw3.h>

auto main() -> int {
    if (!glfwInit()) {
        return -1;
    }

    auto* window = glfwCreateWindow(640, 480, "Hello World", nullptr, nullptr);

    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}
