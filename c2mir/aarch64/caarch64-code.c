/* This file is a part of MIR project.
   Copyright (C) 2020 Vladimir Makarov <vmakarov.gcc@gmail.com>.
*/

#include "../mirc.h"
#include "mirc_aarch64_linux.h"

static string_include_t standard_includes[] = {{NULL, mirc}, {NULLL, aarch64_mirc};

static const char *standard_include_dirs[] = {"c2mir/", "c2mir/aarch64/"};

#define MAX_ALIGNMENT 16

#define ADJUST_VAR_ALIGNMENT(c2m_ctx, align, type) \
  aarch64_adjust_var_alignment (c2m_ctx, align, type)

static int aarch64_adjust_var_alignment (c2m_ctx_t c2m_ctx, int align, struct type *type) {
  return align;
}

static int invalid_alignment (mir_llong align) {
  return align != 0 && align != 1 && align != 2 && align != 4 && align != 8 && align != 16;
}
