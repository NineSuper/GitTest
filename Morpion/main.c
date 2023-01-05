/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 15:11:54 by tde-los-         ###   ########.fr       */
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

    i = 0;
    j = 0;
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
            ft_putchar(X);
            ft_putstr(colone);
            i++;
        }
        ft_putstr("\n");
        j++;
    }
    ft_putstr("\n");
    ft_putstr(ligne);
}

int main(int argc, char **argv)
{
    aff_grille();
}