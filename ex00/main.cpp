#include "Zombie.hpp"

int main(void)
{
	Zombie z("stack zombie");
	z.announce();
	Zombie *Heap = newZombie("heap_zombie");
	Heap->announce();
	randomChump("function_zombie");
	delete Heap;
}