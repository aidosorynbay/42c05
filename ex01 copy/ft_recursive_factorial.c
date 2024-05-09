/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:06:41 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/08 17:06:43 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		if (nb > 1)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
		return (1);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 5;
// 	printf("%i", ft_recursive_factorial(a));
// }