#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
    // Inicializar GLFW
    if (!glfwInit()) {
        std::cerr << "Error al inicializar GLFW" << std::endl;
        return -1;
    }

    // Crear una ventana
    GLFWwindow* window = glfwCreateWindow(800, 600, "Mi Juego", nullptr, nullptr);
    if (!window) {
        std::cerr << "Error al crear la ventana GLFW" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Hacer el contexto de la ventana actual
    glfwMakeContextCurrent(window);

    // Inicializar GLEW
    if (glewInit() != GLEW_OK) {
        std::cerr << "Error al inicializar GLEW" << std::endl;
        return -1;
    }

    // Bucle principal
    while (!glfwWindowShouldClose(window)) {
        // Procesar eventos de entrada
        glfwPollEvents();

        // Limpiar pantalla
        glClear(GL_COLOR_BUFFER_BIT);

        // Aquí iría el código para renderizar tu escena

        // Intercambiar los buffers de la ventana
        glfwSwapBuffers(window);
    }

    // Limpiar y terminar
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
