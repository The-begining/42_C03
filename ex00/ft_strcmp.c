/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:13:11 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/15 20:43:23 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((*(s1 + i) == *(s2 + i)) && *(s1 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char *s1 = {"do Compare us"};
// 	char *s2 = {"do not compare us"};
// 	printf("%d\n",ft_strcmp (s1, s2));
// 	printf("%d\n",strcmp (s1, s2));
// 	return (0);
// }
