/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:32:25 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/31 17:57:25 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	cnt;

	cnt = 0;
	while (cnt * cnt <= nb)
	{
		if (cnt * cnt == nb)
			return (cnt);
		cnt++;
	}
	return (0);
}