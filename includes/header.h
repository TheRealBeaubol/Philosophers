/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:21:34 by lboiteux          #+#    #+#             */
/*   Updated: 2024/03/19 23:21:34 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "define.h"
# include "structs.h"

int		ft_atoi(const char *nptr);
long	get_time(void);
int		meal_check(t_philo **philo);
int		death_check(t_philo *philo);
void	print_message(t_philo *philo, char *msg);
void	init_forks(t_philo **philo);
void	init_philo(t_philo **philo, t_data data);
void	start_simulation(t_philo **philo);
void	sleep_philo(int type);

#endif