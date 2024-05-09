/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:09:06 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/08 16:09:07 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
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
		while (nb > 1)
		{
			result = result * (nb - 1);
			nb--;
		}
		return (result);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 16;
// 	printf("%i", ft_iterative_factorial(a));
// }