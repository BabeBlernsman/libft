/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:39:53 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/06 19:03:56 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	findchar;
	char	*found;
	int		i;

	findchar = c;
	found = NULL;
	i = 0;
	while (s[i] != '\0' && found == NULL)
	{
		if (s[i] == findchar)
			found = (char *)(s + i);
		i++;
	}
	if (s[i] == findchar && found == NULL)
		found = (char *)(s + i);
	return (found);
}
