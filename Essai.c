#include <stdio.h>

int get_number(int *tab, int i)
{
    int nb;
    scanf("%d", &nb);
    tab[i] = nb;
    return (nb);
}

void print_tab(int *tab, int i)
{
    int j;
    j = 0;
    while (j < i)
    {
        printf("%d ", tab[j]);
        j++;
    }
}

int main()
{
    int i;
    int nb;
    int tab[100];
    i = 0;
    while (nb <= 10 )
    {
        nb = get_number(tab, i);
        i++;
    }
    print_tab(tab, i);
    return (0);
}