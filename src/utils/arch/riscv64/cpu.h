/**
* Copyright (c) 2001-2013, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
* Copyright (C) ARM Ltd. 2016-2017.  ALL RIGHTS RESERVED.
* Copyright (C) Rivos Inc. 2023
*
* See file LICENSE for terms.
*/


#ifndef UCC_RISCV6464_CPU_H_
#define UCC_RISCV6464_CPU_H_

#define UCC_ARCH_CACHE_LINE_SIZE 64

/* RVWMO rules */
#define ucc_memory_bus_fence()        asm volatile ("fence rw,rw"::: "memory")
#define ucc_memory_bus_store_fence()  asm volatile ("fence r,rw"::: "memory")
#define ucc_memory_bus_load_fence()   asm volatile ("fence rw,w"::: "memory")

#define ucc_memory_cpu_fence()        ucc_memory_bus_fence()
#define ucc_memory_cpu_store_fence()  ucc_memory_bus_store_fence()
#define ucc_memory_cpu_load_fence()   ucc_memory_bus_load_fence()

static inline ucc_cpu_model_t ucc_arch_get_cpu_model()
{
    return UCC_CPU_MODEL_UNKNOWN;
}

static inline ucc_cpu_vendor_t ucc_arch_get_cpu_vendor()
{
    return UCC_CPU_VENDOR_GENERIC_RISCV;
}

#endif
