/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:23:48 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/16 09:02:44 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	int		curr_char;

	curr_char = 0;
	while(src[curr_char] != '\0')
	{
		dest[curr_char] = src[curr_char];
		curr_char++;
	}
	dest[curr_char] = '\0';
	return dest;
}

