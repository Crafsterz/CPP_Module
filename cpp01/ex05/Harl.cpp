#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl(void)
{}

void	Harl::debug(void)
{
  cout << "The solution has been met" << endl;
}

void	Harl::info(void)
{
  cout << "The answers were simple and well met. The calcuations were correct." << endl;
}

void	Harl::warning(void)
{
  cout << "There seems to be a problem with the solution. Particular factors are missing to the calculations." << endl;
}

void	Harl::error(void)
{
  cout << "UNSOLVABLE! The calculations and each permusable factor are wrong!" << endl;
}

void Harl::complain(string level)
{
  t_func funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  string levels[] = {"debug", "info", "warning", "error"};
  int i = 0;
  while (i < 4 && levels[i].compare(level))
      i++ ;
  if (i < 4)
      (this->*funcs[i])();
}
