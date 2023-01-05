/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:25:21 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 23:23:43 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# define SPACE "\n"
# define LIGNE "---------------------\n"
# define COLONE "  |  "
# define PLAYERONE 1
# define PLAYERTWO 2
# define ONE "X"
# define TWO "O"
# define END_GAME "Partie terminée\n"

# include <stdio.h>

void    ft_putchar(char c);
void	ft_putstr(char *str);
void    initialiser_grille(void);
void    ft_affgrille(int b, int player);
int         ft_putnbr(int nb);
int		    ft_strlen(char *str);

#endif