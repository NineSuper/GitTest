/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morpion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:26:04 by ninesuper         #+#    #+#             */
/*   Updated: 2023/01/05 17:48:12 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    ft_playerone(int b)
{
    char    *ligne;
    char    *colone;
    char    *space;
    int             i;
    int             j;
    int             nb;

    i = 0;
    j = 0;
    nb = 1;
    ligne =  "---------------------\n";
    colone = "  |  ";
    space =  "\n";
    ft_putstr(ligne);
    ft_putstr(space);
    while (j < 3)
    {
        i = 0;
        ft_putstr("    ");
        while (i < 3)
        {
            if (nb == b)
                ft_putstr("X");
            else
                ft_putnbr(nb);
            if (i <= 1)
                ft_putstr(colone);
            nb++;
            i++;
        }
        ft_putstr(space);
        ft_putstr(space);
        j++;
    }
    ft_putstr(ligne);
}