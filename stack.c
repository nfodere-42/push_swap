/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfodere- <>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:21:55 by nfodere-          #+#    #+#             */
/*   Updated: 2025/09/22 14:22:07 by nfodere-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *sa)
{
	int	tmp;

	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(int *sb)
{
	int	tmp;

	tmp = sb[0];
	sb[0] = sb[1];
	sb[1] = tmp;
	write(1, "sb\n", 3);
}

void	pa(t_list *data)
{
	int	pos;

	pos = data->sia;
	data->sib--;
	data->sia++;
	while (pos > 0)
	{
		swap(&data->sa[pos], &data->sa[pos - 1]);
		pos--;
	}
	data->sa[0] = data->sb[0];
	pos = 0;
	while (pos <= data->sib)
	{
		data->sb[pos] = data->sb[pos + 1];
		pos++;
	}
	write(1, "pa\n", 3);
}

void	pb(t_list *data)
{
	int	pos;

	pos = data->sib;
	data->sib++;
	data->sia--;
	while (pos > 0)
	{
		swap(&data->sb[pos], &data->sb[pos - 1]);
		pos--;
	}
	data->sb[0] = data->sa[0];
	pos = 0;
	while (pos <= data->sia - 1)
	{
		data->sa[pos] = data->sa[pos + 1];
		pos++;
	}
	write(1, "pb\n", 3);
}

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
