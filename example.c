#include<stdio.h>

int main(){
    int a[2] = {15, 30};
    int b[2] = {2, 3};
    int c[2];
    for (int i = 0; i < 2; i++)
    {
        c[i] = a[i]  + b[i];
    }
    return 0;
}