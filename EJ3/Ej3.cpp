#include <iostream>
#include <string>

int main(){
 std::cout<<"Introduce una frase: ";
 std::string str1;
 std::getline(std::cin, str1);

 std::string str2="mundo!";

 std::string str3 = str1 + str2;
 std::cout << "\nCadena 1: " << str1 << "\nCadena 2: " << str2 << "\nCadena resultante: " << str3 << std::endl;

    std::cout << "\nLongitudes:\nCadena 1: " << str1.length() << "\nCadena 2: " << str2.length()
              << "\nCadena resultante: " << str3.length() << std::endl;




}