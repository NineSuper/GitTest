/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morpion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:26:04 by ninesuper         #+#    #+#             */
/*   Updated: 2023/01/07 01:11:52 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    ft_affgrille(int b, int player)
{
    int             i;
    int             j;
    int             nb;

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
            if (player == 1 && nb == b)
                ft_putstr(ONE);
            else if (player == 2 && nb == b)
                ft_putstr(TWO);
            else
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
        printf("%d ", tab[j]);
        j++;
    }
}