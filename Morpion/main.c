/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 17:13:28 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    initialiser_grille(void)
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
    ft_putstr("\n");
    while (j < 3)
    {
        i = 0;
        ft_putstr("    ");
        while (i < 3)
        {
            ft_putnbr(nb);
            if (i <= 1)
                ft_putstr(colone);
            nb++;
            i++;
        }
        ft_putstr("\n");
        ft_putstr("\n");
        j++;
    }
    ft_putstr(ligne);
}

int main(int argc, char **argv)
{
    int     nb;

    nb = 0;
    initialiser_grille();
    ft_putstr("Joueur_X tu commences, choisi un numero !\n");
    scanf( "%d", &nb);
}