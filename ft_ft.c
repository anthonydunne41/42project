/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:42:48 by adunne            #+#    #+#             */
/*   Updated: 2022/03/05 18:59:45 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int poop;

	poop = 420;
	int *p = &poop;
	printf("poop number: %d\n",  *p);
	printf("poop number through pointer: %d\n", *p);

	ft_ft(&poop);
	
	printf("poop number: %d\n",  *p);
    printf("poop number through pointer: %d\n", *p);

}

/*Hello!anthony*/
