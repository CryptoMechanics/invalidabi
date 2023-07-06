#include <eosio/eosio.hpp>

#include <contract1.hpp>

using namespace eosio;

CONTRACT contract2 : public contract {
   public:
      using contract::contract;

      TABLE sometable {

         uint64_t                   someotherval;

         uint64_t primary_key()const { return someotherval; }

      };

      typedef eosio::multi_index<"sometable"_n, sometable> some_table;

      ACTION hi( name nm );

      using hi_action = action_wrapper<"hi"_n, &contract2::hi>;
};