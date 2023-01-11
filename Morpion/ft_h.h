/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:25:21 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/11 20:50:34 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# define GAME "Pour choisir un des jeux suivant, faites ./a.out\n1 : Morpion\n2 : Pendu\n3 : Aucune idee\n"
# define SPACE "\n"
# define LIGNE "---------------------\n"
# define COLONE "  |  "
# define MSG_PLAYERX "Joueur_X a toi de jouer !\n"
# define MSG_PLAYERO "Joueur_O a toi de jouer !\n"
# define PLAYERONE 1
# define PLAYERTWO 2
# define ONE "X"
# define TWO "O"
# define END_GAME "Partie terminée\n"

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void    ft_morpion();
void    ft_putchar(char c);
void	ft_putstr(char *str);
void    initialiser_grille();
void    ft_affgrille(int b, int player, int *tab);
void    print_tab(int *tab, int i);
int         ft_getsymbol(int *tab, int i);
int         get_number(int *tab, int i);
int         checknumber(int *tab, int j);
int         ft_putnbr(int nb);
int		    ft_strlen(char *str);
int         ft_intlen(int *tab);

#endif