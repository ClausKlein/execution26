// include/beman/execution26/detail/suppress_pop.hpp                  -*-C++-*-
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// ----------------------------------------------------------------------------

#ifdef BEMAN_EXECUTION26_DIAGNOSTIC_PUSHED
#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
#if defined(__clang__)
#pragma clang diagnostic pop
#endif
#undef BEMAN_EXECUTION26_DIAGNOSTIC_PUSHED
#endif