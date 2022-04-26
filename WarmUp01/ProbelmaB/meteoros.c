#include <stdio.h>


int main()
{
    int x1, y1;
    int x2, y2;
    int n;
    int a, b;
    int i, total, k;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while (x1 || y1 || x2 || y2)
    {
        total = 0;
        scanf("%d", &n); // qtd

        for (i = 0; i < n; i++) // indica o numero de meteoritos
        {
            scanf("%d %d", &a, &b);

            // processar dados

            // x1<= a<= x2
            // y2<= b<= y1

            if ((x1 <= a && a <= x2) && (y2 <= b && b <= y1))
            {

                total++; // incremento a atd de meteoritos que cairam
            }
        }

        //saida dados

        printf("Teste %d\n", k);
        printf("%d\n", total);
        printf("\n");

        k++;

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2); // le uma segunda coordenada de fazenda

    }//while 
    return 0;
}