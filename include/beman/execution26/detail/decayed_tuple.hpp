// include/beman/execution26/detail/decayed_tuple.hpp                 -*-C++-*-
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef INCLUDED_BEMAN_EXECUTION26_DETAIL_DECAYED_TUPLE
#define INCLUDED_BEMAN_EXECUTION26_DETAIL_DECAYED_TUPLE

#include <tuple>
#include <type_traits>

// ----------------------------------------------------------------------------

namespace beman::execution26::detail {
/*!
 * \brief Helper type alias to get type type of a tuple after decaying the argument types
 * \headerfile beman/execution26/execution.hpp <beman/execution26/execution.hpp>
 * \internal
 */
template <typename... T>
using decayed_tuple = ::std::tuple<::std::decay_t<T>...>;
}

// ----------------------------------------------------------------------------

#endif
