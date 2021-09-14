/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:21:16 by ztaouil           #+#    #+#             */
/*   Updated: 2021/09/14 19:37:26 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int		main(){
	Sample	instance;
	Sample	instance2(1337);
	
	// instance.bar();
	std::cout << instance.nb << std::endl;
	std::cout << instance.foo << std::endl;
	std::cout << instance.bar1 << std::endl;
	
	std::cout << instance2.nb << std::endl;
	
	return (0);
}