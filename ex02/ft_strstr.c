/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:50:26 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/17 09:44:10 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int		curr_char;
	int		tf_char;

	curr_char = 0;
	while (str[curr_char])
	{
		tf_char = 0;
		while (to_find[tf_char] == str[curr_char + tf_char])
		{
			tf_char++;
			if (to_find[tf_char] == '\0')
			{
				return (&str[curr_char]);
			}
		}
		curr_char++;
	}
	return (0);	
}



