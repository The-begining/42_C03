/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:39:37 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/21 12:52:13 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (to_find[len] != '\0')
	{
		len++;
	}
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (len == j && to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

#include <string.h>

int main(void)
{
	char str[] = "find the word";
	char to_find[] = "y";
	printf("%s \n", ft_strstr(str, to_find));
	char str1[] = "find the word";
	char to_find1[] = "";
	printf("%s\n", strstr(str1, to_find1));
	return (0);
}
