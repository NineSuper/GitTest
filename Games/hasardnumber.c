/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hasardnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 01:51:05 by ninesuper         #+#    #+#             */
/*   Updated: 2023/01/18 01:12:18 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include <time.h>

int    ft_difficulty()
{
    int     nb;

    ft_putstr(LIGNE SPACE DIFFICULTY);
    while (nb < 1 || nb > 5)
        scanf("%d", &nb);
    if (nb == 1)
        return(15);
    else if (nb == 2)
        return(10);
    else if (nb == 3)
        return(5);
    else if (nb == 4)
        return(1);
    else if (nb == 5)
    {
        nb = 0;
        ft_putstr(SPACE CUSTOM_PARTY);
        while (nb <= 0 || nb > 100)
        {
            ft_putstr(BIG_NB SPACE);
            scanf("%d", &nb);
        }
        return(nb);
    }
}

void    ft_hasardnumber()
{
    int     try;
    int     number;
    int     nb;
    int     max;
    int     min;

    try = 0;
    max = 100;
    min = 1;
    srand(time(NULL));
    number = (rand() % (max - min + 1)) + min;
    try = ft_difficulty();
    while (try > 0)
    {
        ft_putstr(SPACE LIGNE SPACE);
        ft_putstr(NEWNUM);
        scanf("%d", &nb);
        if (nb == number)
        {
            ft_putstr(SPACE VICTORY SPACE LIGNE SPACE);
            break;
        }
        if (nb > number)
            ft_putstr(TOBIG);
        else if (nb < number)
            ft_putstr(TOLESS);
        try--;
        if (try == 0)
            break;
        ft_putnbr(try);
        ft_putstr(TRY);
    }
    if (nb != number)
    {
        ft_putstr(LOOSER);
        ft_putnbr(number);
        ft_putstr(SPACE SPACE LIGNE SPACE);
    }
    main();
}