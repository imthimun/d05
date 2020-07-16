/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:46:30 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/16 09:01:00 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsinged int n)
{
	int curr_char;

	curr_char = 0;
	while(curr_char < n)
	{
		dest[curr_char] = src[curr_char];
		curr_char++;
	}
	dest[curr_char] = '\0';
	return dest;
}
