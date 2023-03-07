#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void helloWorld(int sigNum){
    printf("recibi la señal: %d\n", sigNum);
}
void imnortal(int sigNum){
    printf("no me pueden matar %d\n", sigNum);
}

int x;
int y;

void reinicio(int sigNum){
    x= 5;
    printf("termina ciclo \n");
}

int main(){
    x=1;
    y=2;
    signal(12,helloWorld);
    signal(2,imnortal);
    signal(10,reinicio);
    while(x<y){
        printf("Trabajando\n");
        sleep(1);
    }
    return 0;
}