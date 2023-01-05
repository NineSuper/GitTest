/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 15:18:00 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    aff_grille(void)
{
    char    *ligne;
    char    *colone;
    char    *space;
    char        X;
    char        O;
    int             i;
    int             j;
    int             nb;

    i = 0;
    j = 0;
    nb = 1;
    X = 'X';
    O = 'O';
    ligne =  "----------------------------------\n";
    colone = "  |  ";
    space =  "                    \n";
    ft_putstr(ligne);
    while (j < 3)
    {
        i = 0;
        while (i < 3)
        {
            ft_putstr(colone);
            ft_putnbr(nb);
            ft_putstr(colone);
            nb++;
            i++;
        }
        ft_putstr("\n");
        j++;
    }
    ft_putstr(ligne);
}

int main(int argc, char **argv)
{
    aff_grille();
}