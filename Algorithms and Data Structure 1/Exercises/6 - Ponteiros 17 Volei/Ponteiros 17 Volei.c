#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct jogador{
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
};
typedef struct jogador Jogador;

struct porcentagem{
    float saque;
    float bloq;
    float ataq;
    float saqueT;
    float bloqT;
    float ataqT;
};
typedef struct porcentagem Porcent;

Jogador estatistica(Jogador player[], int num, Porcent *jogador){
    jogador = (Porcent*) calloc(num, sizeof(Porcent));
    Porcent* time = (Porcent*) malloc(sizeof(Porcent));

        for(int i = 0; i < num; i++){
        scanf("%s", &player[i].nome);
        scanf("%d", &player[i].saquesTotal);
        scanf("%d", &player[i].bloqueiosTotal);
        scanf("%d", &player[i].ataquesTotal);
        scanf("%d", &player[i].saquesSucesso);
        scanf("%d", &player[i].bloqueiosSucesso);
        scanf("%d", &player[i].ataquesSucesso);

        (jogador + i)->saque = (float) player[i].saquesSucesso / player[i].saquesTotal  * 100;
        (jogador + i)->bloq = (float) player[i].bloqueiosSucesso / player[i].bloqueiosTotal * 100;
        (jogador + i)->ataq = (float) player[i].ataquesSucesso / player[i].ataquesTotal * 100;

        time->saqueT += player[i].saquesTotal;
        time->bloqT += player[i].bloqueiosTotal;
        time->ataqT += player[i].ataquesTotal;
        time->saque += player[i].saquesSucesso;
        time->bloq += player[i].bloqueiosSucesso;
        time->ataq += player[i].ataquesSucesso;
        }
    printf("Pontos de Saque: %.2f %%.\n", (time->saque * 100) / time->saqueT);
    printf("Pontos de Bloqueio: %.2f %%.\n", (time->bloq * 100) / time->bloqT);
    printf("Pontos de Ataque: %.2f %%.\n", (time->ataq * 100) / time->ataqT);
    return player[num];
}

int main() {
    int num;
    scanf("%d", &num);

    Jogador player[num];
    Porcent *jogador, individual[num];

    jogador = &individual;
    estatistica(player, num, jogador);
    return 0;
}
