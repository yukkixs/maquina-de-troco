    #include <stdio.h>
    #include <stdlib.h>
    #include <windows.h>
    #include <math.h>

    int main()
    {
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);

        float valor;
        float pago;
        float letras[11];
        printf("Bem vindo(a), Maquina de troco\n");
        printf("Qual é o valor da compra?\n");
        scanf("%f", &valor);
        printf("O quanto que você vai pagar?\n");
        scanf("%f", &pago);

        while (valor > pago)
        {

            float n;
            printf("Valor insuficiente! está faltando: %.2f", valor - pago);
            printf("\nPor favor depositar!\n");
            scanf("%f", &n);
            pago = n + pago;
        }

        float troco = pago - valor;
        float total_troco = pago - valor;

        if (troco >= 2.00)
        {
            printf("\nNotas:\n");
        }

        if (valor <= pago)
        {
            letras[0] = troco / 100.00;
            troco = fmod(troco, 100.00);
            if (letras[0] >= 1)
            {
                printf("Notas de 100: %d", (int)letras[0]);
            }
            letras[1] = troco / 50.00;
            troco = fmod(troco, 50.00);
            if (letras[1] >= 1)
            {
                printf("\nNotas de 50: %d", (int)letras[1]);
            }
            letras[2] = troco / 20.00;
            troco = fmod(troco, 20.00);
            if (letras[2] >= 1)
            {
                printf("\nNotas de 20: %d", (int)letras[2]);
            }
            letras[3] = troco / 10.00;
            troco = fmod(troco, 10.00);
            if (letras[3] >= 1)
            {
                printf("\nNotas de 10: %d", (int)letras[3]);
            }
            letras[4] = troco / 5.00;
            troco = fmod(troco, 5.00);
            if (letras[4] >= 1)
            {
                printf("\nNotas de 5: %d", (int)letras[4]);
            }
            letras[5] = troco / 2.00;
            troco = fmod(troco, 2.00);
            if (letras[5] >= 1)
            {
                printf("\nNotas de 2: %d", (int)letras[5]);
            }
            if (troco > 0)
            {
                printf("\nMoedas: ");
            }
            letras[6] = troco / 1.00;
            troco = fmod(troco, 1.00);
            if (letras[6] >= 1)
            {
                printf("\nMoedas de 1: %d", (int)letras[6]);
            }
            letras[7] = troco / 0.50;
            troco = fmod(troco, 0.50);
            if (letras[7] >= 1)
            {
                printf("\nMoedas de 0.50: %d", (int)letras[7]);
            }
            letras[8] = troco / 0.25;
            troco = fmod(troco, 0.25);
            if (letras[8] >= 1)
            {
                printf("\nMoedas de 0.25: %d", (int)letras[8]);
            }
            letras[9] = troco / 0.10;
            troco = fmod(troco, 0.10);
            if (letras[9] >= 1)
            {
                printf("\nMoedas de 0.10: %d", (int)letras[9]);
            }
            letras[10] = round(troco / 0.05);
            troco = fmod(troco, 0.05);
            if (letras[10] >= 1)
            {
                printf("\nMoedas de 0.05: %d", (int)letras[10]);
            }
            printf("\n ---TROCO--- ");
            printf("\n    %.2f", total_troco);
        }

        return 0;
    }