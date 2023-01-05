/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:25:21 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/05 18:09:05 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <stdio.h>

void    ft_putchar(char c);
void	ft_putstr(char *str);
void    initialiser_grille(void);
void    ft_affgrille(int b, int player);
int         ft_putnbr(int nb);
int		    ft_strlen(char *str);

#endif