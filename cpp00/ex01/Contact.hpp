/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vagevorg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:25:20 by vagevorg          #+#    #+#             */
/*   Updated: 2023/02/01 16:00:21 by vagevorg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "header.h"

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phonenumber;
		std::string secret;
	public:
		Contact();
		~Contact();
		void	set_name (std::string line);
		void	set_last_name (std::string line);
		void	set_nickname (std::string line);
		void	set_phone (std::string line);
		void	set_secret (std::string line);
		void	print_all();
};
