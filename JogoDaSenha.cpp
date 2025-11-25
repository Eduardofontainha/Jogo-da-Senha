#include<iostream>
using namespace std;
#include <random>


int geradorDeSenha(){
    random_device rd;
    uniform_int_distribution<> distrib(1000, 9999);
    mt19937 gen(rd());
    int senha = distrib(gen);
   
    return senha;

}
int main(){
    int senha = geradorDeSenha();
    cout << senha << endl;
}

