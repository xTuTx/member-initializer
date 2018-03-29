#include "genji.h"
#include <iostream>
genji::genji(int a,int b)
:regvar(a),constvar(b)
{

}
void genji::print()
{
   std::cout<<"regular var is "<<regvar<<" constvar is "<<constvar<<std::endl;
}

