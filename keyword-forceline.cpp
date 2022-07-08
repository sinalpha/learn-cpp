#include <iostream>

inline int print4line(){
    std::cout << "line" << std::endl;
    std::cout << "line" << std::endl;
    std::cout << "line" << std::endl;
    std::cout << "line" << std::endl;
    std::cout << "line" << std::endl;
}

int main(){
    print4line();
    return 0;
}

//inline와 define의 차이점 inline은 함수의 형식을 따른다.
//https://hwan1402.tistory.com/71