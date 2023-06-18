#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    float a, b, m;
    //clrscr();
    printf("\n Informe as duas notas obtidas: ");
    scanf("%f %f", &a, &b);
    m = (a+b)/2;
    if( m >= 7.0 ) {
        textcolor(3);
        _cprintf("\n Aprovado");
    }
    else {
        textcolor(4);
        _cprintf("\n Reprovad");
    }
    getch();
    



    return 0;
}