/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yong-lee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:28:52 by yong-lee          #+#    #+#             */
/*   Updated: 2020/08/04 19:40:47 by yong-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 'A' && c <= 'Z')
		{
			*(str + i) += 'a' - 'A';
		}
		i++;
	}
	return (str);
}