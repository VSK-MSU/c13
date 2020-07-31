/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 19:22:53 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/31 19:34:34 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void *ans;

	ans = NULL;
	if (root)
	{
		ans = btree_search_item(root->left, data_ref, cmpf);
		if (!ans && !((*cmpf)(root->item, data_ref)))
			ans = root->item;
		if (!ans)
			ans = btree_search_item(root->right, data_ref, cmpf);
	}
	return (ans);
}
