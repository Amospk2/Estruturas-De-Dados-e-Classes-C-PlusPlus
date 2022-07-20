#include <iostream>

class Veiculo{

public:
    int typo = 0;
    int vel = 0;
    
    Veiculo(int tp);
    int getVelMax();
    void setVelMax(int vm);
    bool getLigado();
    void setLigar(int l);

private:
    std::string nome;
    int vel_max = 0;
    bool ligado = true;

};

void Veiculo::setLigar(int l){
    if(l){
        ligado = true;
    }else{
        ligado = false;
    }

}

bool Veiculo::getLigado(){
    return ligado;
}

int Veiculo::getVelMax(){
    return vel_max;
}

void Veiculo::setVelMax(int vm){
    vel_max = vm;
}

Veiculo::Veiculo(int tp){
    ///1 - Avião, 2 - carro, 3 - navio

    if(tp== 1){
        nome = "Aviao";
        setVelMax(800);

    }else if(tp == 2){
        nome = "Carro";
        setVelMax(300);

    }else if(tp == 3){
        nome="Navio";
        setVelMax(120);
    }
    setLigar(0);

}
