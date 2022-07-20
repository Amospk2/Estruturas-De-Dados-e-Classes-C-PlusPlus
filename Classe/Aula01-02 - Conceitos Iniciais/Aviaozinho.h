#include <iostream>

class Aviaozinho{

public:
    int velocity = 0;
    int max_velocity;
    std::string type;
    Aviaozinho(char tp);
    void imprimir();


private:


};

Aviaozinho::Aviaozinho(char tp){
    //J - jato, M - monomotor, P-planador     
    if(tp == 'j' or tp == 'J'){
        max_velocity = 800;
        type = "Jato";

    }else if(tp == 'm' or tp == 'M'){
        max_velocity = 350;
        type = "Monomotor";

    }else if(tp == 'p' or tp == 'P'){
        max_velocity = 180;
        type = "Planador";
    }
}

void Aviaozinho::imprimir(){
    std::cout << "Tipo.............:"<< type <<std::endl;
    std::cout << "Velocidade Atual:"<< velocity <<std::endl;
    std::cout << "Velocidade maxima:"<<max_velocity <<std::endl;
    std::cout << std::endl;
}
