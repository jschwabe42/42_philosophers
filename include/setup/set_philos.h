/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_philos.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:49:45 by jschwabe          #+#    #+#             */
/*   Updated: 2023/11/13 07:43:21 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_PHILOS_H
# define SET_PHILOS_H

# include "struct.h"
# include "philo.h"

t_philo	*set_philos(t_table *table);
t_philo	*create_philo(t_table *table, int id);
#endif // SET_PHILOS_H
