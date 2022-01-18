/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkim <lkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:04:53 by lkim              #+#    #+#             */
/*   Updated: 2022/01/16 19:04:56 by lkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_RUSH_H
# define MY_RUSH_H

void	resolve(void);
void	dfs(int r, int c, int n);
int		start_check(int **arr, int *argv);

#endif
