/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-los- <tde-los-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 14:10:55 by tde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void    aff_grille(void)
{
    char    *ligne;
    char    *colone;
    char    *space;

    ligne =  "----------------------";
    colone = "|      |      |      |";
    space =  "                      ";
    ft_putstr(ligne);
    ft_putstr(colone);
    ft_putstr(space);
    ft_putnbr(colone);
    ft_putstr(space);
    ft_putstr(colone);
    ft_putstr(ligne);
}

int main(int argc, char **argv)
{
    aff_grille();
}