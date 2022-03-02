/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:26:10 by adunne            #+#    #+#             */
/*   Updated: 2022/01/18 14:27:50 by adunne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int main()
{
	int x;
	int y;

	x = 563;
	y = 96;

	printf("x: %u\n", x);
	printf("y: %u\n", y);

	ft_swap(&x, &y);
	
	printf("x: %u\n", x);
    printf("y: %u\n", y);
}*/
