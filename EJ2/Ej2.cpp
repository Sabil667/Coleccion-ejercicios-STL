#include <iostream>
#include <string>


int main(){

    auto sentence = std::string("OpenAI is a leading AI research lab.");
    std::cout<<"La frase es: "<<sentence<<std::endl;


    std::cout<<"Tamano de la cadena: "<<sentence.size()<<std::endl;
    std::cout<<"Esta la cadena vacia? "<<(sentence.empty() ?"Si" : "No")<<std::endl;


}