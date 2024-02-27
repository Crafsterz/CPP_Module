#ifndefine SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstreams>
using std::string;
using std::cout;
using std::endl;

class Sed
{
  private:
    
  public:
    Sed();
    ~Sed();
    string sedReplace();
}



#end