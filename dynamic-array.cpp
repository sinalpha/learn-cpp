#include <iostream>

using namespace std;

int main(){
    //동적배열 정의
    int size;
    cout << "Size : ";
    cin >> size;
    int* dyary;
    dyary = new int [size];

    //입력 받기
    for(int i = 0; i < size; i++)
        cin >> dyary[i];

    //출력 하기
    for(int i = 0; i <size; i++)
        cout << dyary[i] << " ";

    //배열 삭제하기
    delete[] dyary;

    return 0;
}