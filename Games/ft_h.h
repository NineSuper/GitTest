/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninesuper <ninesuper@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:25:21 by tde-los-          #+#    #+#             */
/*   Updated: 2023/01/18 01:14:25 by ninesuper        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# define GAME "Choisissez un jeu suivant : \n1 : Morpion\n2 : Nombre Aleatoire\n3 : Aucune idee\n"
# define SPACE "\n"
# define LIGNE "---------------------\n"
# define COLONE "  |  "
# define MSG_PLAYERX "Joueur_X a toi de jouer !\n"
# define MSG_PLAYERO "Joueur_O a toi de jouer !\n"
# define MSG_DOUBLONS "DOUBLE ! nouveau chiffre : "
# define MSG_BADNUMBER "Chiffre invalide ! "
# define PLAYERONE 1
# define PLAYERTWO 2
# define ONE "X"
# define TWO "O"
# define END_GAME "Partie terminée\n"
# define NEW_GAME "\n\n\n\nVoulez vous faire une autre partie ?\n1 : Nouvelle partie de Morpion\n2 : Nombre aléatoire\n3 : Sortir\n"
# define TOLESS "C'est plus\n"
# define TOBIG "C'est moins\n"
# define NEWNUM "Entrez un chiffre :"
# define TRY " coups restant\n"
# define LOOSER "Perdu le bon chiffre était : "
# define VICTORY "Gagné !"
# define DIFFICULTY "Bonjour, voici les differénts niveau possibles :\n1 : Facile 15 coups\n2 : Moyen 10 coups\n3 : Difficle 5 coups\n4 : Hardcore 1 coup\n5 : Personnalisé\n"
# define CUSTOM_PARTY "Vous avez chosi une party personnalisée rentrer une valeur pour choisir le nombre de coups : "
# define BIG_NB "Votre chiffre doit être compris entre 1 et 100"

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void    ft_morpion();
void    ft_putchar(char c);
void	ft_putstr(char *str);
void    initialiser_grille();
void    ft_affgrille(int b, int player, int *tab);
void    print_tab(int *tab, int i);
void    ft_hasardnumber();
int         main();
int         ft_getsymbol(int *tab, int i);
int         get_number(int *tab, int i);
int         get_number(int *tab, int i);
int         checknumber(int *tab, int j);
int         ft_putnbr(int nb);
int		    ft_strlen(char *str);
int         ft_intlen(int *tab);

#endif
