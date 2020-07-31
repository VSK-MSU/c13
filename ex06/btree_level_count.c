/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 19:02:45 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/31 19:35:08 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	if (root)
	{
		left = btree_level_count(root->left);
		right = btree_level_count(root->right);
		if (left > right)
			return (left + 1);
		else
			return (right + 1);
	}
	else
		return (0);
}
