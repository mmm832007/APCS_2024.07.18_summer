#include <stdio.h>

int main()
{
    int i;
    int stud_num=45;
    for (i=0;i<10;i++){
        if((i % 3) == 0){
            printf(" %d.  Hello World %d students \n ",0, stud_num);
        }else if ((i % 3) == 1){
            printf(" %d.  Hello World %d students \n ",1, stud_num);
        }else if ((i % 3) == 2){
            printf(" %d.  Hello World %d students \n ",2, stud_num);
        }
    }
    return 0;
}
