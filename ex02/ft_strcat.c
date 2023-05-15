/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:11:37 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/17 00:05:46 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	if (src[0] == '\0')
		return (dest);
	else
	{
		while (*(src + i) != '\0')
		{
			dest[len++] = src[i];
			i++;
		}
	}
	dest[len] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int 	main(void)
// {
// 	char	src[] = {""};
// 	char	dest[200] = {"abcd0"};
// 	//printf("%s \n", ft_strcat(dest, src));
// 	printf("%s \n", strcat(dest, src));
// 	printf("%lu", strlen(dest));
// 	return (0);
// }
