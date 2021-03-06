#include <algorithm>
#include <array>

#include "config.hpp"

#include "item_effect.hpp"

#include "generated/item_effect.inc"
#if SC_USE_PTR == 1
#include "generated/item_effect_ptr.inc"
#endif

util::span<const item_effect_t> item_effect_t::data( bool ptr )
{
#if SC_USE_PTR == 1
  const auto data = ptr
    ? util::span<const item_effect_t>( __ptr_item_effect_data )
    : util::span<const item_effect_t>( __item_effect_data );
#else
  ( void ) ptr;
  const auto& data = __item_effect_data;
#endif

  return data;
}

