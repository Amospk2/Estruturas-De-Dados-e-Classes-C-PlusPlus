#include <iostream>


class Veiculo{

public:
    int velocity = 0;
    bool blind = false;
    int roda;
    void setTipo(int tp);
    void setVelocity(int vel);
    void setArma(bool ar);
    void imprime();

private:
    int typo;//1 - moto, 2 - carro, 3 - caminhão, 4 - Tanque
    int max_vel;
    bool arma;

};

void Veiculo::imprime(){
    std::cout << "Tipo:"<<typo << std::endl;
    std::cout << "Velocidade Max:"<<max_vel << std::endl;
    std::cout << "Tem Armas:"<<arma << std::endl;
    std::cout << "Blindagem:"<<blind << std::endl;
    std::cout <<"rodas:"<<roda << std::endl;
    std::cout <<"----------------------------"<< std::endl;
}

void Veiculo::setTipo(int tp){
    typo = tp;
}

void Veiculo::setVelocity(int vel){
    max_vel = vel;

}
void Veiculo::setArma(bool ar){
    arma = ar;

}

class moto:public Veiculo{
public:
    moto();

}; 

moto::moto(){
    velocity = 0;
    blind = 0;
    roda = 2;
    setTipo(1);
    setVelocity(120);
    setArma(false);

}

class Carro:public Veiculo{

public:
    Carro();


private:



};

Carro::Carro(){
    velocity = 0;
    blind = 0;
    roda = 4;
    setTipo(2);
    setVelocity(230);
    setArma(false);


}

class Tanque:public Veiculo{

public:
    Tanque();


private:



};

Tanque::Tanque(){
    velocity = 0;
    blind = 1;
    roda = 8;
    setTipo(4);
    setVelocity(200);
    setArma(true);


}