/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avernaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:27:08 by avernaci          #+#    #+#             */
/*   Updated: 2024/11/15 12:39:58 by avernaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 96) && (str[i] < 123)))
			if ((str[i] > 64) && (str[i] < 91))
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}