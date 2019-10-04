/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <jcanteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:11:35 by jcanteau          #+#    #+#             */
/*   Updated: 2019/10/04 17:09:27 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len;

	new = NULL;
	if (s1 == NULL && s2 == NULL)
		new = NULL;
	else if (s1 == NULL)
		new = ft_strdup(s2);
	else if (s2 == NULL)
		new = ft_strdup(s1);
	else
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		new = ft_strnew(len);
		if (new != NULL)
		{
			ft_strcpy(new, s1);
			ft_strcat(new, s2);
		}
	}
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	return (new);
}
