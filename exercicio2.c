/*
 ============================================================================
 Name        : teste.c
 Author      : joao
 Version     : 1.0

 ============================================================================
 */

#include <stdlib.h>
#include <ev3.h>

int main(void){
    init ev3();

    while(ButtonIsDown(BTNDOWN) != 1)
    {
    	OnFwdReg(OUT_B, 40);
    	wait(SEC_2);
    	Off (OUT_B);
    	OnFwdReg(OUT_C, 40);
    	wait(SEC_2);
    	Off (OUT_C);
    }

    free ev3();
    return 0;
}
