/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morpion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:26:04 by ninesuper         #+#    #+#             */
/*   Updated: 2023/01/11 20:30:00 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    initialiser_grille()
{
    int     i;
    int     j;
    int     nb;

    i = 0;
    j = 0;
    nb = 1;
    ft_putstr(LIGNE);
    ft_putstr(SPACE);
    while (j < 3)
    {
        i = 0;
        ft_putstr("    ");
        while (i < 3)
        {
            ft_putnbr(nb);
            if (i <= 1)
                ft_putstr(COLONE);
            nb++;
            i++;
        }
        ft_putstr(SPACE);
        ft_putstr(SPACE);
        j++;
    }
    ft_putstr(LIGNE);
}

void    ft_morpion()
{
    int     i;
    int     nb;
    int    *tab;

    i = 0;
    nb = 0;
    tab = malloc(sizeof(int) * 10);
    initialiser_grille();
    while (i <= 9)
    {
        if (i == 9)
            break;
        if (i % 2 == 0)
        {
            ft_putstr(MSG_PLAYERX);
            nb = get_number(tab, i);
            ft_affgrille(nb, PLAYERONE, tab);
        }
        else
        {
            ft_putstr(MSG_PLAYERO);
            nb = get_number(tab, i);
            ft_affgrille(nb, PLAYERTWO, tab);
        }
        i++;
    }
    ft_putstr(END_GAME);
    ft_putstr("DEBUG TAB : ");
    print_tab(tab, i);
    free(tab);
}

void    ft_affgrille(int nb, int player, int *tab)
{
    int     i;
    int     j;
    int     nombre;

    j = 0;
    nombre = 1;
    ft_putstr(LIGNE);
    ft_putstr(SPACE);
    while (j < 3)
    {
        i = 0;
        ft_putstr("    ");
        while (i < 3)
        {
            if (nombre == checknumber(tab, nombre))
            {
                ft_getsymbol(tab, nombre, player);
            }
            else
                ft_putnbr(nombre);
            if (i <= 1)
                ft_putstr(COLONE);
            i++;
            nombre++;
        }
        ft_putstr(SPACE);
        ft_putstr(SPACE);
        j++;
    }
    ft_putstr(LIGNE);
}

int     checknumber(int *tab, int j)
{
    int     i;
    
    i = 0;
    while (tab[i] != '\0')
    {
        if (tab[i] == j)
            return (j);
        i++;
    }
    return (0);
}

int     ft_getsymbol(int *tab, int i, int player)
{
    int     k;

    k = 0;
    while (k <= i)
    {
        if (tab[k] == i)
            {
                if (k % 2 == 0)
                    ft_putstr(ONE);
                else
                    ft_putstr(TWO);
            }
        k++;
    }
}

int     get_number(int *tab, int i)
{
    int nb;
    scanf("%d", &nb);
    tab[i] = nb;
    return (nb);
}

void    print_tab(int *tab, int i)
{
    int j;
    j = 0;
    while (j < i)
    {
        printf("%d", tab[j]);
        j++;
    }
}