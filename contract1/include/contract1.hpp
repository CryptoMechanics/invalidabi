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

      ACTION hi( name nm );

      using hi_action = action_wrapper<"hi"_n, &contract1::hi>;


};