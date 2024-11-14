/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avernaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:52:25 by avernaci          #+#    #+#             */
/*   Updated: 2024/11/14 21:00:53 by avernaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i <= n) && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	if (n > i)
	{
		while ((n - 1) >= i)
		{
			dest[i] = '\0';
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
