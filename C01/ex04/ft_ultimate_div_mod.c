/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:42:02 by silndoj           #+#    #+#             */
/*   Updated: 2023/10/22 22:51:56 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	test1;
	int	test2;

	test1 = *a;
	test2 = *b;
	*a = test1 / test2;
	*b = test1 % test2;
}
