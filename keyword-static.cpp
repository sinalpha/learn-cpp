#include <iostream>

//none static var
void sumS_var(){

    static int x = 0;
    x++;
    std::cout << x << std::endl;
    
}

//static var 
void sum_var(){
    
    int x = 0;
    x++;
    std::cout << x << std::endl;

}

int main(){

    sumS_var();
    sumS_var();
    sumS_var();

    sum_var();
    sum_var();
    sum_var();
    
    return 0;
}