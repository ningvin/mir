/* This file is a part of MIR project.
   Copyright (C) 2018-2024 Vladimir Makarov <vmakarov.gcc@gmail.com>.
*/

#ifndef MIR_MEMCTL_H
#define MIR_MEMCTL_H

#include <assert.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MIR_memctl {
  void *(*malloc) (size_t, void *);
  void *(*calloc) (size_t, size_t, void *);
  void *(*realloc) (void *, size_t, void *);
  void (*free) (void *, void *);
  void *memory_data;
} *MIR_memctl_t;

static inline void *MIR_malloc (MIR_memctl_t memctl, size_t size) {
  assert (memctl != NULL);
  return memctl->malloc (size, memctl->memory_data);
}

static inline void *MIR_calloc (MIR_memctl_t memctl, size_t num, size_t size) {
  assert (memctl != NULL);
  return memctl->calloc (num, size, memctl->memory_data);
}

static inline void *MIR_realloc (MIR_memctl_t memctl, void *ptr, size_t size) {
  assert (memctl != NULL);
  return memctl->realloc (ptr, size, memctl->memory_data);
}

static inline void MIR_free (MIR_memctl_t memctl, void *ptr) {
  assert (memctl != NULL);
  memctl->free (ptr, memctl->memory_data);
}

#ifdef __cplusplus
}
#endif

#endif /* #ifndef MIR_MEMCTL_H */