/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 19:48:45 by skomatsu          #+#    #+#             */
/*   Updated: 2026/01/07 19:48:58 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
  std::cout << "=== Test 1: Basic Construction ===" << std::endl;
  DiamondTrap diamond("HERO");
  diamond.whoAmI();

  std::cout << "\n=== Test 2: Attribute Values ===" << std::endl;
  std::cout << "Testing attack (AD should be 30 from FragTrap):" << std::endl;
  diamond.attack("Villain"); 

  std::cout << "\nTesting initial energy (should be 50 from ScavTrap):"
            << std::endl;
  for (int i = 0; i < 52; i++) {
    std::cout << "[" << i << "] ";
    diamond.attack("Target");
  }

  std::cout << "\n=== Test 3: Special Abilities ===" << std::endl;
  DiamondTrap robot("ROBOT");
  robot.guardGate();      // ScavTrapの能力
  robot.highFivesGuys();  // FragTrapの能力
  robot.whoAmI();         // DiamondTrapの能力

  std::cout << "\n=== Test 4: Name Verification ===" << std::endl;
  DiamondTrap named("Alice");
  named.whoAmI();
  // 期待される出力: I am DiamondTrap Alice, and my ClapTrap name is
  // Alice_clap_name

  std::cout << "DiamondTrap destroyed." << std::endl;

  return 0;
}
