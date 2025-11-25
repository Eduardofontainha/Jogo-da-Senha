#include<iostream>
using namespace std;
#include <random>


int geradorDeSenha(){
    random_device rd;
    uniform_int_distribution<> distrib(1, 6);
    mt19937 gen(rd());
    int senha, d1 , d2, d3, d4, s1, s2, s3;
    d1 = distrib(gen);
    d2 = distrib(gen);
    d3 = distrib(gen);
    d4 = distrib(gen);
    
    d1 *=1000;
    d2*=100;
    d3*=10;

    senha = d1 + d2 + d3 + d4;
    return senha;

}
int numeroDoJogador(){
    int numero;
    cin >> numero;
    return numero;
}
int main(){
    int senha = geradorDeSenha();
    cout << senha << endl;
    int numeroJogador = numeroDoJogador();

    if((numeroJogador - 1000) < 0){
        do{
            numeroJogador = numeroDoJogador();
        }while(numeroJogador - 1000 >= 0);
    }

}

