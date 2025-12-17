/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfodere- <>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:21:55 by nfodere-          #+#    #+#             */
/*   Updated: 2025/09/22 14:22:07 by nfodere-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *data)
{
	int	pos;

	pos = 0;
	while (pos + 1 < data->sia)
	{
		swap(&data->sa[pos], &data->sa[pos + 1]);
		pos++;
	}
	write(1, "ra\n", 3);
}

void	rb(t_list *data)
{
	int	pos;

	pos = 0;
	while (pos + 1 < data->sib)
	{
		swap(&data->sb[pos], &data->sb[pos + 1]);
		pos++;
	}
	write(1, "rb\n", 3);
}

void	rr(t_list *data)
{
	int	pos;

	pos = 0;
	while (pos + 1 < data->sia)
	{
		swap(&data->sa[pos], &data->sa[pos + 1]);
		pos++;
	}
	pos = 0;
	while (pos + 1 < data->sib)
	{
		swap(&data->sb[pos], &data->sb[pos + 1]);
		pos++;
	}
	write(1, "rr\n", 3);
}

void	rra(t_list *data)
{
	int	pos;

	pos = data->sia - 1;
	while (pos > 0)
	{
		swap(&data->sa[pos], &data->sa[pos - 1]);
		pos--;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_list *data)
{
	int	pos;

	pos = data->sib - 1;
	while (pos > 0)
	{
		swap(&data->sb[pos], &data->sb[pos - 1]);
		pos--;
	}
	write(1, "rrb\n", 4);
}

/*
void	rrr_aux(t_list *data)
{
	int	last;
	int	pos;

	if (data->sia > 1)
	{
		last = data->sa[data->sia - 1];
		pos = data->sia - 1;
		while (pos > 0)
		{
			data->sa[pos] = data->sa[pos - 1];
			pos--;
		}
		data->sa[0] = last;
	}
}

void	rrr(t_list *data)
{
	int	last;
	int	pos;

	rrr_aux(data);
	if (data->sib > 1)
	{
		last = data->sb[data->sib - 1];
		pos = data->sib - 1;
		while (pos > 0)
		{
			data->sb[pos] = data->sb[pos - 1];
			pos--;
		}
		data->sb[0] = last;
	}
	write(1, "rrr\n", 4);
}
*/
