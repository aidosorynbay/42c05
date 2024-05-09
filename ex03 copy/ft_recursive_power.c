/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:16:46 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/08 18:16:47 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	else
	{
		if (power > 0)
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
		return (1);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 0;
// 	int power = 0;
// 	printf("%i", ft_recursive_power(a, power));
// }