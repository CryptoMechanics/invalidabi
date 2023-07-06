#include <contract2.hpp>
ACTION contract2::hi( name nm, contract1::sometable ) {
   /* fill in action body */
   print_f("Name : %\n",nm);
}