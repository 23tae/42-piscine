/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehooki <taehooki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:51:53 by taehooki          #+#    #+#             */
/*   Updated: 2022/01/23 16:53:07 by taehooki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	numcheck(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	lowercheck(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	uppercheck(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	charcheck(char c)
{
	if (numcheck(c))
		return (1);
	if (uppercheck(c))
		return (1);
	if (lowercheck(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i])
	{
		if (!charcheck(str[i]))
			first = 1;
		else
		{
			if (first && lowercheck(str[i]))
				str[i] -= 32;
			else if (!first && uppercheck(str[i]))
				str[i] += 32;
			first = 0;
		}
		++i;
	}
	return (str);
}
