/* **************************************************************************** */
/*                                                                      .       */
/*   ZombieEvent.hpp.h                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/11/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_1_ZOMBIEEVENT_HPP
#define CPP_1_ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent{
public:
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
};


#endif
