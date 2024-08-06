/* This file is a part of MIR project.
   Copyright (C) 2018-2024 Vladimir Makarov <vmakarov.gcc@gmail.com>.
*/

#include <stdlib.h>
#include "mir-memctl.h"

#ifdef __GNUC__
#define MEMCTL_UNUSED __attribute__ ((unused))
#else
#define MEMCTL_UNUSED
#endif

static void *default_malloc (size_t size, void *memory_data MEMCTL_UNUSED) {
  return malloc (size);
}

static void *default_calloc (size_t num, size_t size, void *memory_data MEMCTL_UNUSED) {
  return calloc (num, size);
}

static void *default_realloc (void *ptr, size_t size, void *memory_data MEMCTL_UNUSED) {
  return realloc (ptr, size);
}

static void default_free (void *ptr, void *memory_data MEMCTL_UNUSED) {
  free (ptr);
}

static struct MIR_memctl default_memctl = {
  .malloc = default_malloc,
  .calloc = default_calloc,
  .realloc = default_realloc,
  .free = default_free,
  .memory_data = NULL
};
