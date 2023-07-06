#include <eosio/eosio.hpp>

#include <contract1.hpp>

using namespace eosio;

CONTRACT contract2 : public contract {
   public:
      using contract::contract;

      ACTION hi( name nm, contract1::sometable );

      using hi_action = action_wrapper<"hi"_n, &contract2::hi>;
};