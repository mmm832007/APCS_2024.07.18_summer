#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
    printf(" this building is %10d cm \n", 890);
    printf(" this building is %10d cm \n", 7890);
    printf(" this building is %10d cm \n", 67890);
    printf(" this building is %10d cm \n", 567890);
    printf(" this building is %d cm \n", 1234567890);
    printf(" pi = %f \n ", 3.1415926535897932384626433832795);
    //f為浮點數
    printf(" pi = %1.5f \n ", 3.1415926535897932384626433832795);
    printf(" pi = %1.15f \n ", 003.1415926535897932384626433832795);
    //小數點前所留的數字位數，小數點後會四捨五入到??位
    printf(" pi = %3.15f \n ", 553.1415926535897932384626433832795);
}
