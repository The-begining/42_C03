/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:47:17 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/17 00:14:37 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	slen;

	i = 0;
	len = 0;
	slen = 0;
	while (dest[len] != '\0')
		len++;
	while (src[slen] != '\0')
		slen++;
	if (size > 0)
	{
		while ((src[i] != '\0') && (i < (size - len - 1)))
		{
			dest[len + i] = src[i];
			i++;
		}
	}
	dest[len + i] = '\0';
	return (len + slen);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int main(void)
// {
// 	char src[100] = "123478966";
// 	char dest[100] = "A";

// 	printf("%d\n %s\n", ft_strlcat(dest, src, 10), dest);
// 	char src1[100] = "123478966";
// 	char dest1[100] = "A";
// 	printf("%zu\n %s", strlcat(dest1, src1, 10), dest1);
// 	return (0);
// }
