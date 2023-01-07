/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/07 01:11:37 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    initialiser_grille(void)
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

int     main(int argc, char **argv)
{
    int     tab[9];
    int     i;
    int     nb;

    i = 0;
    initialiser_grille();
    ft_putstr("Joueur_X tu commences, choisi un numero !\n");
    nb = get_number(tab, i);
    i++;
    while (i <= 9)
    {
        if (i % 2 == 0)
        {
            ft_affgrille(nb, PLAYERONE);
            ft_putstr("Joueur_X, choisi un numero !\n");
        }
        else
        {
            ft_affgrille(nb, PLAYERTWO);
            ft_putstr("Joueur_O, choisi un numero !\n");
        }
        nb = get_number(tab, i);
        i++;
    }
    print_tab(tab, i);
    ft_putstr("\n");
    ft_putstr(END_GAME);
}