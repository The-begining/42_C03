/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:59:41 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/17 00:11:00 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (*s1 != '\0') && (*(s1 + i) == *(s2 + i)))
	{	
		i++;
	}
	if (n == i)
		return (0);
	return (*(s1 + i) - *(s2 + i));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "122";
// 	char s2[] = "12";
// 	char s3[] = "campare me here";
// 	char s4[] = "compareme";
// 	printf("%d\n", ft_strncmp(s1, s2, 2));
// 	printf("%d\n", strncmp(s1, s2, 2));
// 	printf("%d\n", ft_strncmp(s3, s4, 20));
// 	printf("%d\n", strncmp(s3, s4, 20));
// 	return (0);
// }
