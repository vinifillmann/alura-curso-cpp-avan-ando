#include<iostream>
#include<vector>
#include<map>
#include<string>
#include "./letra_existe.hpp"
#include "./chuta.hpp"

void chuta(std::vector<char>* chutes_errados, std::map<char, bool>* chutou, std::string palavra_secreta){
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;
    chute = toupper(chute);

    (*chutou)[chute] = true;

    if(letra_existe(chute, palavra_secreta)){
        std::cout << "Voce acertou! Seu chute esta na palavra." << std::endl;
    }
    else{
        std::cout << "Voce errou! Seu chute nao esta na palavra." << std::endl;
        chutes_errados->push_back(chute);
    }
    std::cout << std::endl;
}