/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:24:34 by jschwabe          #+#    #+#             */
/*   Updated: 2023/10/25 15:08:19 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

char	*should_return_executed_philo(){
	return ("executed philo");
}

#ifndef TEST
int main(int ac, char **av)
{
	// (void)ac;
	// (void)av;
	// printf("%s\n", should_return_executed_philo());
	if (ac < 5 || parse_input(ac, av) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	return (0);
}
#endif // protect against duplicate main for testing
