#include <stdio.h>
#include <stdlib.h>

void Numeros_Amigos(int x, int y){
    
    int soma_x=0, soma_y=0;
    for (int count=1; count<x; count++){
        if(x%count == 0){
            soma_x= (soma_x +count);
        }
    }
    for (int count2=1; count2<y; count2++){
        if(y%count2 == 0){
            soma_y= (soma_y+count2);
        }
    }
    if(soma_x == y && soma_y == x){
        printf("amigos");
    }
    else{
        printf("nao amigos");
    }
}

int main (){

    int num1=0, num2=0;
    printf("Insira 2 numeros:");
    scanf("%d %d", &num1, &num2);
    Numeros_Amigos(num1, num2);
    return 0;
}