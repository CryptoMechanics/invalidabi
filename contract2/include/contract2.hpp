#include <eosio/eosio.hpp>

#include <contract1.hpp>

using namespace eosio;

CONTRACT contract2 : public contract {
   public:
      using contract::contract;

      TABLE othertable {

         uint64_t                   yetanotherval;

         uint64_t primary_key()const { return yetanotherval; }

      };

      typedef eosio::multi_index<"othertable"_n, othertable> other_table;

      ACTION hi( name nm, contract1::sometable );

      using hi_action = action_wrapper<"hi"_n, &contract2::hi>;
};