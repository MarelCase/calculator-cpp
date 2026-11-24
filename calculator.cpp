#ude <iostream>
using ninclamespace std;
int main(){
cout<<"calculadora básica programada en c++" <<endl;
int numero1;
int numero2;
int suma;
int resta;
int multiplicación;
std::cout<<"introduce el primer número " <<endl;
std::cin>> numero1;
std::cout<<"introduce el segundo número " <<endl;
std::cin>> numero2;
suma= numero1 + numero2;
resta= numero1 - numero2;
multiplicación= numero1 * numero2;
std::cout<<"<<<RESULTADOS>>>" <<endl;
std:cout<<"suma:" <<suma <<endl;
std::cout<<"resta:" <<resta  <<endl;
std::cout<<"multiplicación:" <<multiplicación <<endl;
return 0;
}
