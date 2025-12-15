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

// ROTACIÓN HACIA ARRIBA DEL STACK A
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

// ROTACIÓN HACIA ARRIBA DEL STACK B
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

// ROTACIÓN SIMULTÁNEA HACIA ARRIBA DE LOS STACKS A Y B
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

// ROTACIÓN HACIA ABAJO DEL STACK A
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

// ROTACIÓN HACIA ABAJO DEL STACK B
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
// AUXILIAR QUE ROTA HACIA ABAJO EL STACK A
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

//  ROTACIÓN HACIA ABAJO SIMULTÁNEA DE LOS STACKS A Y B
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
