1. 
#include <stdio.h>
#include <string.h>

#define TAM 5

typedef struct {
    char nome[50];
    char cpf[15];
    char dataNasc[11];
    char motivo[10]; 
} Pessoa;

int main() {
    Pessoa fila[TAM] = {
        {"Ana Sara", "123.456.789-00", "10/01/1999", "Reclamar"},
        {"Rodrigo Souza", "987.654.321-00", "20/06/1980", "Elogiar"},
        {"Carlos Menchao", "234.567.876-54", "15/03/1998", "Reclamar"},
        {"Daniela Lopes", "321.567.543-27", "31/12/1995", "Elogiar"},
        {"Kelly Alves", "234.567.654-32", "03/03/1989", "Reclamar"}
    };

    int reclam = 0;
    int elogio = 0;

  
    for (int i = 0; i < TAM; i++) {
        if (strcmp(fila[i].motivo, "Reclamar") == 0) {
            reclam++;
        } else if (strcmp(fila[i].motivo, "Elogiar") == 0) {
            elogio++;
        }
    }

    printf("Hoje tivemos ");

    if (reclam < elogio) {
        printf("%d pessoas com reclamacoes e %d para elogios.\n",
               reclam, elogio);
    } else {
        printf("%d pessoas com elogios e %d para reclamacoes.\n",
               elogio, reclam);
    }

    return 0;
}

2.
#include <stdio.h>
#include <string.h>

#define TAM 5

typedef struct {
    char nome[50];
    int tempo;
} Pessoa;

int main() {
    Pessoa fila[TAM] = {
        {"Aurea", 5},
        {"Bobby", 12},
        {"Camila", 7},
        {"Daniel", 9},
        {"Edson", 6}
    };

    int soma = 0;

for (int i = 0; i < TAM; i++) {
        printf("Atendendo: %s (tempo: %d minutos)\n",
               fila[i].nome, fila[i].tempo);

        soma += fila[i].tempo;
    }

  
    float media = (float)soma / TAM;

    printf("\nTempo médio de atendimento: %.2f minutos\n", media);

    
    if (media > 8) {
        printf("Recomendação: ABRIR atendimento.\n");
    } else {
        printf("Recomendação: NÃO há necessidade.\n");
    }

    return 0;
}

3.
#include <stdio.h>
#include <string.h>

#define TAM 5

typedef struct {
    int codigoProcesso;
    char nomeArquivo[50];
    int bytes;
} Documento;

int main() {
    Documento fila[TAM] = {
        {101, "relatorio.pdf", 250000},
        {102, "imagem.png", 800000},
        {103, "tabela.xlsx", 120000},
        {104, "contrato.docx", 90000},
        {105, "apresentacao.pptx", 450000}
    };

    printf("Processando fila de impressão...\n\n");

       for (int i = 0; i < TAM; i++) {
        printf("Imprimindo documento:\n");
        printf("  Código do processo: %d\n", fila[i].codigoProcesso);
        printf("  Nome do arquivo: %s\n", fila[i].nomeArquivo);
        printf("  Tamanho: %d bytes\n\n", fila[i].bytes);
    }

    printf("Fila vazia. Todos os documentos foram impressos.\n");

    return 0;
}

4.
#include <stdio.h>
#include <string.h>

#define TAM 5

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa fila[TAM] = {
        {"Sandra", 30},
        {"Fabio", 40},
        {"Anderson", 70},   
        {"Monica", 25},
        {"Ana Clara", 80}   
    };

    int i, prioridade = -1;


    for (i = 0; i < TAM; i++) {
        if (fila[i].idade > 65) {
            prioridade = i;
            break; 
        }
    }


    if (prioridade != -1) {
        printf("Atendendo prioritário:\n");
        printf("  Nome: %s\n", fila[prioridade].nome); // Corrigido aqui
        printf("  Idade: %d\n\n", fila[prioridade].idade);
    }

    for (i = 0; i < TAM; i++) {
        if (i == prioridade) continue; // Pula quem já foi atendido

        printf("Atendendo:\n");
        printf("  Nome: %s\n", fila[i].nome);
        printf("  Idade: %d\n\n", fila[i].idade);
    }

    return 0;
}
