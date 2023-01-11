/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:31:07 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/11 15:36:22 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"


int     main(int argc, char **argv)
{
    int     i;

    i = 0;
    if (argc == 2)
    {
        if (argv[1][i] == '1')
            ft_morpion();
        else
            ft_putstr(GAME);
    }
    else
        ft_putstr(GAME);
}