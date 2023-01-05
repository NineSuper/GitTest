/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 14:57:32 by tde-los-         ###   ########.fr       */
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

    i = 0;
    X = 'X';
    O = 'O';
    ligne =  "--------------------\n";
    colone = "|";
    space =  "                    \n";
    ft_putstr(ligne);
    while (i < 3)
    {
        ft_putchar(X);
        ft_putstr(colone);
        ft_putchar(O);
        ft_putstr(colone);
        i++;
    }
    ft_putstr("\n");
    ft_putstr(ligne);
}

int main(int argc, char **argv)
{
    aff_grille();
}