/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoaille <lnoaille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 18:51:03 by lnoaille          #+#    #+#             */
/*   Updated: 2020/05/10 02:37:50 by lnoaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int count;
	int neg;
	int number;

	number = 0;
	neg = 1;
	count = 0;
	while (nptr[count] == ' ' || nptr[count] == '\f' || nptr[count] == '\n'
	|| nptr[count] == '\r' || nptr[count] == '\v' || nptr[count] == '\t')
		count++;
	if (nptr[count] == '-' || nptr[count] == '+')
	{
		if (nptr[count] == '-')
			neg = -1;
		count++;
	}
	while ('0' <= nptr[count] && nptr[count] <= '9' && nptr[count])
	{
		number = number * 10 + (nptr[count] - '0');
		count++;
	}
	return (number * neg);
}
