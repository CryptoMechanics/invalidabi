#include <eosio/eosio.hpp>
#include <eosio/singleton.hpp>

using namespace eosio;

CONTRACT contract1 : public contract {
   public:
      using contract::contract;
      
      TABLE global {

         name           someval;

      } global_row;

      using globaltable = eosio::singleton<"global"_n, global>;
      
      TABLE sometable {

         uint64_t                   someotherval;

         uint64_t primary_key()const { return someotherval; }

      };

      typedef eosio::multi_index<"sometable"_n, sometable> some_table;

      ACTION hi( name nm, global g );

      using hi_action = action_wrapper<"hi"_n, &contract1::hi>;


};