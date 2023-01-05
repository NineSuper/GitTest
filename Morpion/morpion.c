/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morpion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:26:04 by ninesuper         #+#    #+#             */
/*   Updated: 2023/01/05 19:12:07 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    ft_affgrille(int b, int player, int tour)
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
            if (nb == b && player == 1)
                ft_putstr("X");
            else if (nb == b && player == 2)
                ft_putstr("O");
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
    if (tour == 9)
    {
        ft_putstr("Partie terminée");
        return;
    }
    tour = ft_tour(tour, player);
    ft_putstr(SPACE);
    ft_putnbr(tour);
}

int     ft_tour(int tour, int player)
{
    if (player == 1)
    {
        ft_putstr("PlayerOne");
    }
    if (player == 2)
    {
        ft_putstr("Player2");
    }
    return (tour + 1);
}
