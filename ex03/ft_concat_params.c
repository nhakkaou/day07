/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 22:36:06 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/09/18 22:36:58 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	tab = malloc((argc) * sizeof(char));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			tab[k] = argv[i][j];
			k++;
			j++;
		}
		if ((i + 1) < argc)
			tab[k] = '\n';
		k++;
		i++;
	}
	tab[k - 1] = '\0';
	return (tab);
}
