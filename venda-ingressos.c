#include <stdio.h>
#include <locale.h>

int main()
{
    int i, plano;
    int qtdTotal, qtdIngresso1, qtdIngresso2, qtdIngresso3, qtdIngresso4, qtdIngresso5, qtdIngresso6 = 0;
    int vlrTotal = 0;
    int vlrIngresso1 = 70;
    int vlrIngresso2 = 50;
    int vlrIngresso3 = 35;
    int vlrIngresso4 = 130;
    int vlrIngresso5 = 180;
    int vlrIngresso6 = 20;
    char continuar = 's';

    do {
        printf("[1] Passaporte Individual\n[2] Meia entrada\n[3] Passaporte Promocional\n[4] Combo Encantado (2 pessoas)\n[5] Combo Espetacular (3 pessoas)\n[6] Bilhete Singular\n[0] CANCELAR COMPRA\n");
        printf("\nqual plano você quer? ");
        scanf("%d", &plano);
        printf("\n");

        switch (plano) {
            case 0:
                printf("ESCOLHA CANCELADA COM SUCESSO!!!\n");
                break;

            case 1:
                printf("\nvocê selecionou: Passaporte Individual\n");
                printf("o valor do Passaporte Individual é: R$%d,00 \n", vlrIngresso1);
                printf("Quantas unidades você deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso1);
                vlrIngresso1 = vlrIngresso1 * qtdIngresso1;
                qtdTotal += qtdIngresso1;
                vlrTotal += vlrIngresso1;
                if (qtdIngresso1 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 2:
                printf("você selecionou: Meia Entrada\n");
                printf("o valor da Meia Entrada é: R$%d,00 \n", vlrIngresso2);
                printf("Quantas unidades você deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso2);
                vlrIngresso2 = vlrIngresso2 * qtdIngresso2;
                qtdTotal += qtdIngresso2;
                vlrTotal += vlrIngresso2;
                if (qtdIngresso2 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 3:
                printf("você selecionou: Passaporte Promocional\n");
                printf("o valor do Passaporte Promocional é: R$%d,00 \n", vlrIngresso3);
                printf("Quantas unidades você deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso3);
                vlrIngresso3 = vlrIngresso3 * qtdIngresso3;
                qtdTotal += qtdIngresso3;
                vlrTotal += vlrIngresso3;
                if (qtdIngresso3 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 4:
                printf("você selecionou: Combo Encantado\n");
                printf("o valor do Combo Encantado é: R$%d,00 \n", vlrIngresso4);
                printf("Quantas unidades você deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso4);
                vlrIngresso4 = vlrIngresso4 * qtdIngresso4;
                qtdTotal += qtdIngresso4;
                vlrTotal += vlrIngresso4;
                if (qtdIngresso4 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 5:
                printf("você selecionou: Combo Espetacular\n");
                printf("o valor do Combo Espetacular é: R$%d,00 \n", vlrIngresso5);
                printf("Quantas unidades você deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso5);
                vlrIngresso5 = vlrIngresso5 * qtdIngresso5;
                qtdTotal += qtdIngresso5;
                vlrTotal += vlrIngresso5;
                if (qtdIngresso5 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 6:
                printf("você selecionou: Bilhete Singular\n");
                printf("o valor do Bilhete Singular é: R$%d,00 \n", vlrIngresso6);
                printf("Quantas unidades você deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso6);
                vlrIngresso6 = vlrIngresso6 * qtdIngresso6;
                qtdTotal += qtdIngresso6;
                vlrTotal += vlrIngresso6;
                if (qtdIngresso6 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            default:
                printf("Escolha somente entre as opções 0, 1, 2, 3, 4, 5 e 6!");
                break;
        }
        printf("\nDeseja concluir a sua compra (s/n)? ");
        scanf(" %c", &continuar);
        printf("\n-----------------------------------------------------------\n");
    } while (continuar == 'n');

    printf("\n\n\n\n-----------------------------------------------------------\n");
    printf("Compra finalizada!\n");
    printf("-----------------------------------------------------------\n");
    if (qtdIngresso1 != 0) {
        printf("você adquiriu %d Passaporte(s) Individual(is), no total de R$%d,00\n", qtdIngresso1, vlrIngresso1);
    };
    if (qtdIngresso2 != 0) {
        printf("você adquiriu %d Meia(s) Entrada(s), no total de R$%d,00\n", qtdIngresso2, vlrIngresso2);
    };
    if (qtdIngresso3 != 0) {
        printf("você adquiriu %d Passaporte(s) Promocional(is), no total de R$%d,00\n", qtdIngresso3, vlrIngresso3);
    };
    if (qtdIngresso4 != 0) {
        printf("você adquiriu %d Combo(s) Encantado(s), no total de R$%d,00\n", qtdIngresso4, vlrIngresso4);
    };
    if (qtdIngresso5 != 0) {
        printf("você adquiriu %d Combo(s) Espetacular(es), no total de R$%d,00\n", qtdIngresso5, vlrIngresso5);
    };
    if (qtdIngresso6 != 0) {
        printf("você adquiriu %d Bilhete(s) Singular(es), no total de R$%d,00\n", qtdIngresso6, vlrIngresso6);
    };
    if (qtdTotal == 0)
    {
        printf("COMPRA CANCELADA COM SUCESSO!!!\n\n");
    } else {
        printf("\nQUANTIDADE TOTAL DE INGRESSOS: %d \n", qtdTotal);
        printf("VALOR TOTAL: R$%d,00\n\n\n", vlrTotal);
    };

    return 0;
};