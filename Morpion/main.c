/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 15:26:20 by tde-los-         ###   ########.fr       */
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
    ft_putstr("Joueur_X tu commences, choisi un numero !")
}

int main(int argc, char **argv)
{
    initialiser_grille();
}