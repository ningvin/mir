/* This file is a part of MIR project.
   Copyright (C) 2018-2024 Vladimir Makarov <vmakarov.gcc@gmail.com>.
*/

#ifndef MIR_GEN_MEMCTL_H
#define MIR_GEN_MEMCTL_H

#include <assert.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAP_FAILED NULL

typedef enum MIR_mem_protect {
  PROT_WRITE_EXEC,
  PROT_READ_EXEC
} MIR_mem_protect_t;

typedef struct MIR_gen_memctl {
  void *(*mem_map) (size_t, void *);
  int (*mem_unmap) (void *, size_t, void *);
  int (*mem_protect) (void *, size_t, MIR_mem_protect_t, void *);
  void *memory_data;
} *MIR_gen_memctl_t;

static inline void *MIR_mem_map (MIR_gen_memctl_t memctl, size_t len) {
  return memctl->mem_map (len, memctl->memory_data);
}

static inline int MIR_mem_unmap (MIR_gen_memctl_t memctl, void *addr, size_t len) {
  return memctl->mem_unmap (addr, len, memctl->memory_data);
}

static inline int MIR_mem_protect (MIR_gen_memctl_t memctl, void *addr, size_t len, MIR_mem_protect_t prot) {
  return memctl->mem_protect (addr, len, prot, memctl->memory_data);
}

#ifdef __cplusplus
}
#endif

#endif /* #ifndef MIR_GEN_MEMCTL_H */