/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 05:09:06 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/31 05:36:33 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *btree;

	btree = NULL;
	btree = (t_btree*)malloc(sizeof(t_btree));
	it (b_tree)
	{
		btree->left = NULL;
		btree->right = NULL;
		btree->item = item;
	}
	return (btree);
}

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (*root != NULL)
	{
		if(cmpf(item, (*root)->item < 0))
			btree_insert_data(&(*root)->left, item, cmpf);
		else
			btree_insert_data(&(*root)->right, item, cmpf);
	}
	else
		*root = btree_create_node(item);
}
