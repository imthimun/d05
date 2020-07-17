/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:41:45 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/17 10:44:07 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
    int     curr_char;

    curr_char = 0;
    while((s1[curr_char] != '\0') && (curr_char < n))
    {
        if(s1[curr_char] != s2[curr_char])
        {
            return (s1[curr_char] - s2[curr_char]);
        }
        curr_char++;
    }
    return (0);
}
