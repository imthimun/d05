/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:23:48 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/15 17:50:41 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	int		curr_char,i=1;

	curr_char = 0;
	while(src[curr_char] != '\0')
	{
		dest[curr_char] = src[curr_char];
		curr_char++;
	}
	return dest;
}

