/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 14:20:31 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    aff_grille(void)
{
    char    *ligne;
    char    *colone;
    char    *space;
    int     i;

    i = 0;
    ligne =  "--------------------\n";
    colone = "      |      |      \n";
    space =  "                    \n";
    ft_putstr(ligne);
    while (i < 3)
    {
        ft_putstr(colone);
        ft_putstr(space);
        i++;
    }
    ft_putstr(ligne);
}

int main(int argc, char **argv)
{
    aff_grille();
}