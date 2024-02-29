#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>
using std::string;
using std::cout;
using std::endl;

class Harl
{
  private:
    void  debug(void);
    void  info(void);
    void  warning(void);
    void  error(void);

  public:
    Harl();
    ~Harl(void);
    void  complain(string level);

};

typedef void (Harl::*t_func) ( void );

#endif