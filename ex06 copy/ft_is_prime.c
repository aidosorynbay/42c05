/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:40:28 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/08 19:40:30 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb < 0)
	{
		return (0);
	}
	else if (nb == 4)
	{
		return (0);
	}
	while (i < nb / i)
	{
		if (nb % i != 0)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i\n", ft_is_prime(17));
// 	printf("%i\n", ft_is_prime(4));
// 	printf("%i\n", ft_is_prime(61));
// }