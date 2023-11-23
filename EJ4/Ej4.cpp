#include <iostream>
#include <string>

int main() {
    // Definir la cadena principal y la subcadena a buscar (constante)
    const std::string sentence = "El lenguaje C++ es poderoso.";
    const std::string sub_str = "C++";

    // Inicializar la posición de búsqueda
    size_t pos = sentence.find(sub_str);

    // Verificar si la subcadena se encuentra
    if (pos != std::string::npos) {
        // Imprimir la posición de la primera ocurrencia de la subcadena
        std::cout << "Subcadena encontrada en la posición: " << pos << std::endl;

        // Reemplazar todas las ocurrencias de la subcadena en la cadena original
        while (pos != std::string::npos) {
            sentence.replace(pos, sub_str.length(), "Python");
            pos = sentence.find(sub_str, pos + 1); // Buscar la próxima ocurrencia
        }

        // Imprimir la cadena resultante después del reemplazo
        std::cout << "Cadena resultante: " << sentence << std::endl;
    } else {
        // Informar que la subcadena no se encontró
        std::cout << "Subcadena no encontrada." << std::endl;
    }

    return 0;
}
