/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:25:11 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/08 18:25:12 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		if (index >= 0)
		{
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		}
		return (1);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_fibonacci(6));
// }