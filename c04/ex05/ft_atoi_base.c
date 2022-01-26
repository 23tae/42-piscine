/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:25:12 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/26 11:31:37 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_check(char	*k)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (k[i])
	{
		while (k[j])
		{
			if (k[i] == k[j] && i != j)
				return (0);
			j ++;
		}
		if (k[i] == 43 || k[i] == 45)
			return (0);
		i ++;
	}
	if (i == 1)
		return (0);
	else
		return (i);
}

int	sign_check(char	*str, int	i)
{
	int	sign;

	sign = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	return (sign * i);
}

int	whitespace(char	*str, int	*ptr)
{
	int	i;
	int	sign;

	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' || \
	str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i ++;
	sign = sign_check(str, i);
	if (sign < 0)
	{
		*ptr = sign * (-1) - 1;
		sign = -1;
	}
	else
	{
		*ptr = sign - 1;
		sign = 1;
	}
	return (sign);
}

int	is_in_base(char	*str, char	*base, int	*i, int	size)
{
	int	a;
	int	j;

	a = 0;
	while (str[++*i])
	{
		j = -1;
		while (base[++j])
		{
			if (str[*i] == base[j])
			{
				a = a * size + j;
				break ;
			}
		}
		if (base[j] == '\0')
			break ;
	}
	return (a);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	i;
	int	result;

	i = -1;
	if (valid_check(base) == 0)
		return (0);
	result = whitespace(str, &i) * is_in_base(str, base, &i, valid_check(base));
	return (result);
}
