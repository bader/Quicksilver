#ifndef CUDAFUNCTIONS_HH
#define CUDAFUNCTIONS_HH

#include <CL/sycl.hpp>

#include "cudaUtils.hh"
#include "DeclareMacro.hh"

void warmup_kernel();
int ThreadBlockLayout(sycl::range<3> &grid, sycl::range<3> &block, int num_particles);
SYCL_EXTERNAL DEVICE int getGlobalThreadID(sycl::nd_item<3> item_ct1);

#endif
