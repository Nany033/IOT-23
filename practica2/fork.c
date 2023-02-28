#include <stdio.h>
#include<unistd.h>

int main(){
    printf("Solo el padre\n");
    int pid = fork();  // En el proceso padre regresa el id del hijo  el hijo es igual a 0
    if (pid==0){
        printf("Soy el proceso hijo y no sé quién es mi padre\n");
        execl("/workspace/IOT-23/practia1/helloworld","helloworld",NULL);
        printf("Esta linea no debe correr");
    }
    else {
        printf("soy el proceso padre y mi hijo es %d\n",pid);
    }
    
    /**printf("que pasa ahora\n");
    fork();
    printf("Cuantos somos\n");
    return 0;
    **/
}