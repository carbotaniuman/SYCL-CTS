/*******************************************************************************
//
//  SYCL 2020 Conformance Test Suite
//
//  Enum stringification for the SYCL CTS
//
*******************************************************************************/

#ifndef __SYCLCTS_UTIL_SYCL_ENUMS_H
#define __SYCLCTS_UTIL_SYCL_ENUMS_H

#include <catch2/catch_tostring.hpp>
#include <sycl/sycl.hpp>

CATCH_REGISTER_ENUM(sycl::errc, sycl::errc::success, sycl::errc::runtime,
                    sycl::errc::kernel, sycl::errc::accessor,
                    sycl::errc::nd_range, sycl::errc::event,
                    sycl::errc::kernel_argument, sycl::errc::build,
                    sycl::errc::invalid, sycl::errc::memory_allocation,
                    sycl::errc::platform, sycl::errc::profiling,
                    sycl::errc::feature_not_supported,
                    sycl::errc::kernel_not_supported,
                    sycl::errc::backend_mismatch);

#endif  // __SYCLCTS_UTIL_SYCL_ENUMS_H
