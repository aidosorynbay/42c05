/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:26:31 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/08 19:26:32 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checking_midpoint(int num)
{
	int		min;
	long	mid;
	int		max;

	min = 1;
	max = num;
	while (max - 1 > min)
	{
		mid = (max + min) / 2;
		if (mid * mid > num)
		{
			max = mid;
		}
		else if (mid * mid < num)
		{
			min = mid;
		}
		else
		{
			return (mid);
		}
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb == 0 || nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		result = checking_midpoint(nb);
		return (result);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_sqrt(80));
// }