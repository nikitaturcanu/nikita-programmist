#include<iostream>
int add(int a, int b){
    return a + b;
}

int mult(int c, int d){
   return c * d; 
}

int div(int x, int y){
    return x / y;
}

int sub(int f, int r){
    return f - r;
}

//sub((add((div(mult(2, 3),4)),1)),5);



int main(){
    std::cout << mult(15, 10);
    std::cout << "\n";
    std::cout << add(3, 12);
    std::cout << "\n";
    std::cout << div(4, 2);
    std::cout << "\n";
    std::cout << sub(15, 7);
    std::cout << "\n";
    std::cout << sub((add((div(mult(2, 3),4)),1)),5);
    std::cout << "\n";


    
}