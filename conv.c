/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfodere- <>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:21:55 by nfodere-          #+#    #+#             */
/*   Updated: 2025/09/22 14:22:07 by nfodere-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// CONVIERTE UNA CADENA EN ENTERO
int	ft_atoi(const char *str, t_list *data)
{
	long long	num;
	int			pos;
	int			sign;

	num = 0;
	pos = 0;
	sign = 1;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign = -1;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		num = num * 10 + (str[pos] - '0');
		pos++;
		if ((num > (long long)INT_MAX + 1 && sign == -1)
			|| (num > INT_MAX && sign == 1))
			return (error_exit(data, num));
	}
	return ((int)(num * sign));
}

// VERIFICA SI UN CARÁCTER ES UN DÍGITO DECIMAL
int	ft_isdigit(int chr)
{
	return (chr >= '0' && chr <= '9');
}

// CALCULA LA LONGITUD DE UNA CADENA
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// CREA UNA SUBCADENA DESDE UNA POSICIÓN Y LONGITUD DADAS
char	*ft_substr(char *str, int pos, int len)
{
	char	*copy;
	int		count;

	count = 0;
	if (!str)
		return (0);
	if (len > ft_strlen(str))
		copy = malloc(sizeof(char) * (ft_strlen(str) + 1));
	else
		copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (0);
	while (pos < ft_strlen(str) && count < len && str[pos])
		copy[count++] = str[pos++];
	copy[count] = '\0';
	return (copy);
}
