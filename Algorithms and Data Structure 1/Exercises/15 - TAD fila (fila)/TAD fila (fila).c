#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 1000
//Arquivo.h
struct comandos{
    int com;
};
typedef struct fila Fila;
Fila* cria();
void liberar(Fila* fi);
int inserir(Fila* fi, struct comandos x);
int retirar(Fila* fi);
int contar(Fila* fi);
int vazia(Fila* fi);
int cheia(Fila* fi);
int estado(Fila* fi);
//Arquivo.c
struct fila{
    struct comandos dados[Max];
    int qtd;
};
Fila* criar(){
    Fila *fi = (Fila*) malloc(sizeof(Fila));
    fi->qtd = 0;
    return fi;
}
void liberar(Fila* fi){
    free(fi);
}
int inserir(Fila* fi, struct comandos x){
    if(fi == NULL || fi->qtd == Max-1){
        return -1;
    }
    fi->dados[fi->qtd] = x;
    fi->qtd++;
    return 0;
}
int retirar(Fila* fi){
    int i;
    if(fi->qtd == 0){
        return -1;
    }
    for(i = 0; i < fi->qtd; i++){
        fi->dados[i] = fi->dados[i+1];
    }
    fi->qtd--;
    return 0;
}
int contar(Fila* fi){
    printf("Total elementos: %d\n", fi->qtd);
    return fi->qtd;
}
int vazia(Fila* fi){
    if(fi->qtd == 0){
        printf("Fila Vazia!\n");
        return 0;
    }
    printf("Fila nao vazia!\n");
    return -1;
}
int cheia(Fila* fi){
    if(fi->qtd == Max-1){
        printf("Fila cheia!\n");
        return 0;
    }
    printf("Fila nao cheia!\n");
    return -1;
}
int estado(Fila* fi){
    int i;
    if(fi == NULL ){
        return -1;
    }
    if(fi->qtd == 0){
        printf("Fila vazia\n");
        return 0;
    }
    if(fi->qtd == Max-1){
        printf("Fila cheia\n");
        return 0;
    }
    for(i = 0; i < fi->qtd; i++){
        printf("%d ", fi->dados[i]);
    }
    printf("\n");
    return 1;

}

int main() {
    int i, num;
    char opcao;
    scanf("%d", &num);

    Fila *fi;

    struct comandos X;
    for(i = 0; i < num; i++){
        fi = criar();
        do{

            scanf("%c", &opcao);
            switch(opcao){
                case 'I':
                    scanf("%d", &X.com);
                    inserir(fi, X);
                    break;
                case 'R':
                    retirar(fi);
                    break;
                case 'K':
                    contar(fi);
                    break;
                case 'V':
                    vazia(fi);
                    break;
                case 'C':
                    cheia(fi);
                    break;
                case 'P':
                    estado(fi);
                    break;
                default:
                    break;
            }

        }while(opcao!='X');
        if(i != num - 1){
            printf("\n");
        }
        liberar(fi);
    }
    return 0;
}

