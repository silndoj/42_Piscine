/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:54:25 by silndoj           #+#    #+#             */
/*   Updated: 2023/11/01 21:53:47 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	def;
	int	digit;

	def = 1;
	digit = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		str++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			def = def * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = digit * 10 + (str[i] - '0');
		i++;
	}
	return (digit * def);
}
//int main()
//{
//	char arr[] = " ---+--+1234ab567";
//	ft_atoi(arr);
//}
