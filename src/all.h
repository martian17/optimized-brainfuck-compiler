#ifndef __ALL_H_
#define __ALL_H_

#include <stddef.h>
#include <stdint.h>

enum OPCODE
{
    NOOP,

    INCR,
    DECR,
    NEXT,
    PREV,
    SKIP,
    LOOP,
    PUTC,
    GETC,

    // feel free to add any amount of extra instructions
    // but I need the first 9 to be in this order

    SETV,

    VALDIFF, // tape[ptr] += arg1
    PTRDIFF, // ptr += arg1
    PERMUTE, // vectorized_add((vec_t *)tape, (vec_t *)arg1)
};

// unused
#define BFCHARS(EXP) EXP == 43 || \
EXP == 44 || \
EXP == 45 || \
EXP == 46 || \
EXP == 60 || \
EXP == 62 || \
EXP == 91 || \
EXP == 93

// frontend.c
#define SUCCESS 0
#define FAILURE 1
enum CMDFLAGS
{
    FLAG_EXEC,
    FLAG_VERSION,
    FLAG_HELP,
    FLAG_FILE,
    FLAG_OUTFILE,
    FLAG_INTERPRET,
    FLAG_COMPILER,
    FLAG_INTERPRETER
};

// memutils.c
void *safe_malloc(size_t size);
void *safe_realloc(void *ptr, size_t size);
// TODO: safe_ string.h functions
// TODO: safe_ mmap functions

#endif // everything needs to be above this
