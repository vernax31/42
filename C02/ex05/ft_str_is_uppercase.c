/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avernaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:52:06 by avernaci          #+#    #+#             */
/*   Updated: 2024/11/14 21:53:18 by avernaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_uppercase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (!((str[i] > 64 && str[i] < 91)))
                        return 0;
                i++;
        }
        return 1;
}
