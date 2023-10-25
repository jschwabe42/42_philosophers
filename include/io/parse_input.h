/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:48:42 by jschwabe          #+#    #+#             */
/*   Updated: 2023/10/25 17:24:27 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_INPUT_H
# define PARSE_INPUT_H
# include "struct.h"
# include "philo.h"

int		parse_input(int ac, char **av, t_input *s_input);
long	atol(const char *s);
#endif // PARSE_INPUT_H
