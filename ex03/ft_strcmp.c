/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:52:17 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/17 10:37:41 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int		curr_char;

	curr_char = 0;
	while(s1[curr_char])
	{
		if(s1[curr_char] != s2[curr_char])
		{
			return (s1[curr_char] - s2[curr_char]);
		}
		curr_char++;
	}
	return (0);
}
