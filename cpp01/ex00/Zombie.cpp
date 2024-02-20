#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie(){}

void Zombie::announce(void)
{
  cout << name;
  cout << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie* newZombie( std::string name );

void randomChump( std::string name );
