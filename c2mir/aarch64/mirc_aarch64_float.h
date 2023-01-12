/* This file is a part of MIR project.
   Copyright (C) 2020-2023 Vladimir Makarov <vmakarov.gcc@gmail.com>.
*/

/* See C11 5.2.4.2.2 */
static char float_str[]
  = "#ifndef __FLOAT_H\n"
    "#define __FLOAT_H\n"
    "\n"
    "#define FLT_RADIX 2\n"
    "\n"
    "#define FLT_MANT_DIG 24\n"
    "#define DBL_MANT_DIG 53\n"
    "#define LDBL_MANT_DIG DBL_MANT_DIG\n"
    "\n"
    "#define FLT_DECIMAL_DIG 9\n"
    "#define DBL_DECIMAL_DIG 17\n"
    "#define LDBL_DECIMAL_DIG DBL_DECIMAL_DIG\n"
    "#define FLT_DIG FLT_DECIMAL_DIG\n"
    "#define DBL_DIG DBL_DECIMAL_DIG\n"
    "#define LDBL_DIG LDBL_DECIMAL_DIG\n"
    "\n"
    "#define DECIMAL_DIG LDBL_DECIMAL_DIG\n"
    "\n"
    "#define FLT_MIN_EXP (-125)\n"
    "#define DBL_MIN_EXP (-1021)\n"
    "#define LDBL_MIN_EXP (-16381)\n"
    "\n"
    "#define FLT_MIN_10_EXP (-37)\n"
    "#define DBL_MIN_10_EXP (-307)\n"
    "#define LDBL_MIN_10_EXP (-4931)\n"
    "\n"
    "#define FLT_MAX_EXP 128\n"
    "#define DBL_MAX_EXP 1024\n"
    "#define LDBL_MAX_EXP 16384\n"
    "\n"
    "#define FLT_MAX_10_EXP 38\n"
    "#define DBL_MAX_10_EXP 308\n"
    "#define LDBL_MAX_10_EXP 4932\n"
    "\n"
    "#define FLT_MAX 0x1.fffffep+127\n"
    "#define DBL_MAX 0x1.fffffffffffffp+1023\n"
    "#define LDBL_MAX 0x1.ffffffffffffffffffffffffffffp+16383l\n"
    "\n"
    "#define FLT_EPSILON 0x1p-23\n"
    "#define DBL_EPSILON 0x1p-52\n"
    "#define LDBL_EPSILON 0x1p-112l\n"
    "\n"
    "#define FLT_MIN 0x1p-126\n"
    "#define DBL_MIN 0x1p-1022\n"
    "#define LDBL_MIN 0x1p-16382\n"
    "\n"
    "#define FLT_TRUE_MIN 0x1p-149\n"
    "#define DBL_TRUE_MIN 0x0.0000000000001p-1022\n"
    "#define LDBL_TRUE_MIN 0x0.0000000000000000000000000001p-16382l\n"
    "\n"
    "#define FLT_EVAL_METHOD 0\n"
    "#define FLT_ROUNDS 1 /* round to the nearest */\n"
    "\n"
    "#endif /* #ifndef __FLOAT_H */\n";
