#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i;
    unsigned long long t1 = 0, t2 = 1;
    unsigned long long nextTerm;
    char x;
    
    printf("Entrez le nombre de termes que vous voulez afficher: ");
    scanf("%d", &n);

    printf("Suite de Fibonacci: ");

    for (i = 1; i <= n; i++)
    {
        printf("%llu, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\n");
    
    do
    {
        scanf("%c", &x);
        printf("Appuyer sur la touche q pour quiter...\n");
        scanf("%c", &x);
        
    } while(x != 'q');
    
    return 0;
}


