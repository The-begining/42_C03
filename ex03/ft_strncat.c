/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:27:18 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/16 11:53:36 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[len++] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char src[] = "i am source";
// 	char dest[500] = "i am destination";

// 	printf("%s \n", ft_strncat(dest, src, 50));
// 	//printf("%s \n", strncat(dest, src, 50));
// 	return (0);
// }
