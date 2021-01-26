/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_validity_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 23:39:36 by abarbie           #+#    #+#             */
/*   Updated: 2020/10/22 09:41:07 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	split_validity_skip(char **s)
{
	if (!*s)
		return (0);
	while (*s && **s == ' ')
		s++;
	if (!*s)
		return (0);
	if (**s == '<' || **s == ';' || **s == '>')
		return (0);
	return (1);
}