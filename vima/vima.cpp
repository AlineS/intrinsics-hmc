/**
 * Aline Santana Cordeiro - ascordeiro@inf.ufpr.br
 * LSE - Embedded Sistems Laboratory - 2018
 * PPGInf - Federal University of Paraná
 */

#include "vima.hpp"

__vm32s *a32s64, *b32s64, *c32s64, *a32s2K, *b32s2K, *c32s2K, b32s = 1;
__vm32u *a32u64, *b32u64, *c32u64, *a32u2K, *b32u2K, *c32u2K, b32u = 1;
__vm64s *a64s32, *b64s32, *c64s32, *a64s1K, *b64s1K, *c64s1K;
__vm64u *a64u32, *b64u32, *c64u32, *a64u1K, *b64u1K, *c64u1K;
__vm32f *a32f64, *b32f64, *c32f64, b32f = 1;

int main() {
    srand(time(NULL));

    a32s64 = (__vm32s *) malloc(sizeof(__vm32s) * VM64I);
    b32s64 = (__vm32s *) malloc(sizeof(__vm32s) * VM64I);
    c32s64 = (__vm32s *) malloc(sizeof(__vm32s) * VM64I);

    a32u64 = (__vm32u *) malloc(sizeof(__vm32u) * VM64I);
    b32u64 = (__vm32u *) malloc(sizeof(__vm32u) * VM64I);
    c32u64 = (__vm32u *) malloc(sizeof(__vm32u) * VM64I);

    for (int i = 0; i < VM64I; i++) {
        a32s64[i] = 1 + (1 + (rand() % 10)); b32s64[i] = 1 + (rand() % 10);
        a32u64[i] = 1 + (1 + (rand() % 10)); b32u64[i] = 1 + (rand() % 10);
    }

    a32s2K = (__vm32s *) malloc(sizeof(__vm32s) * VM2KI);
    b32s2K = (__vm32s *) malloc(sizeof(__vm32s) * VM2KI);
    c32s2K = (__vm32s *) malloc(sizeof(__vm32s) * VM2KI);

    a32u2K = (__vm32u *) malloc(sizeof(__vm32u) * VM2KI);
    b32u2K = (__vm32u *) malloc(sizeof(__vm32u) * VM2KI);
    c32u2K = (__vm32u *) malloc(sizeof(__vm32u) * VM2KI);

    for (int i = 0; i < VM2KI; i++) {
        a32s2K[i] = 1 + (rand() % 10); b32s2K[i] = 1 + (rand() % 10);
        a32u2K[i] = 1 + (rand() % 10); b32u2K[i] = 1 + (rand() % 10);
    }

    a64s32 = (__vm64s *) malloc(sizeof(__vm64s) * VM32L);
    b64s32 = (__vm64s *) malloc(sizeof(__vm64s) * VM32L);
    c64s32 = (__vm64s *) malloc(sizeof(__vm64s) * VM32L);

    a64u32 = (__vm64u *) malloc(sizeof(__vm64u) * VM32L);
    b64u32 = (__vm64u *) malloc(sizeof(__vm64u) * VM32L);
    c64u32 = (__vm64u *) malloc(sizeof(__vm64u) * VM32L);

    for (int i = 0; i < VM32L; i++) {
        a64s32[i] = 1 + (rand() % 10); b64s32[i] = 1 + (rand() % 10);
        a64u32[i] = 1 + (rand() % 10); b64u32[i] = 1 + (rand() % 10);
    }

    a64s1K = (__vm64s *) malloc(sizeof(__vm64s) * VM1KL);
    b64s1K = (__vm64s *) malloc(sizeof(__vm64s) * VM1KL);
    c64s1K = (__vm64s *) malloc(sizeof(__vm64s) * VM1KL);

    a64u1K = (__vm64u *) malloc(sizeof(__vm64u) * VM1KL);
    b64u1K = (__vm64u *) malloc(sizeof(__vm64u) * VM1KL);
    c64u1K = (__vm64u *) malloc(sizeof(__vm64u) * VM1KL);

    for (int i = 0; i < VM1KL; i++) {
        a64s1K[i] = 1 + (rand() % 10); b64s1K[i] = 1 + (rand() % 10);
        a64u1K[i] = 1 + (rand() % 10); b64u1K[i] = 1 + (rand() % 10);
    }

    a32f64 = (__vm32f *) malloc(sizeof(__vm32f) * VM64I);
    b32f64 = (__vm32f *) malloc(sizeof(__vm32f) * VM64I);
    c32f64 = (__vm32f *) malloc(sizeof(__vm32f) * VM64I);

    for (int i = 0; i < VM64I; i++) {
        a32f64[i] = 1 + (rand() % 10); b32f64[i] = 1 + (rand() % 10);
    }

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 01 *");
    printf("%s\n", "***************");

    _vim64_iadds(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 02 *");
    printf("%s\n", "***************");

    _vim2K_iadds(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 03 *");
    printf("%s\n", "***************");

    _vim64_iaddu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 04 *");
    printf("%s\n", "***************");

    _vim2K_iaddu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 05 *");
    printf("%s\n", "***************");

    _vim64_isubs(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 06 *");
    printf("%s\n", "***************");

    _vim2K_isubs(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 07 *");
    printf("%s\n", "***************");

    _vim64_isubu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 08 *");
    printf("%s\n", "***************");

    _vim2K_isubu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 09 *");
    printf("%s\n", "***************");

    _vim64_iabss(c32s64, b32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 10 *");
    printf("%s\n", "***************");

    _vim2K_iabss(c32s2K, b32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 11 *");
    printf("%s\n", "***************");

    _vim64_imaxs(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 12 *");
    printf("%s\n", "***************");

    _vim2K_imaxs(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 13 *");
    printf("%s\n", "***************");

    _vim64_imins(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 14 *");
    printf("%s\n", "***************");

    _vim2K_imins(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 15 *");
    printf("%s\n", "***************");

    _vim64_iandu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 16 *");
    printf("%s\n", "***************");

    _vim2K_iandu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/
    printf("%s\n", "***************");
    printf("%s\n", "* Operação 17 *");
    printf("%s\n", "***************");

    _vim64_iorun(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 18 *");
    printf("%s\n", "***************");

    _vim2K_iorun(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 19 *");
    printf("%s\n", "***************");

    _vim64_ixoru(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 20 *");
    printf("%s\n", "***************");

    _vim2K_ixoru(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 21 *");
    printf("%s\n", "***************");

    _vim64_inots(a32s64, b32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 22 *");
    printf("%s\n", "***************");

    _vim2K_inots(a32s2K, b32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 23 *");
    printf("%s\n", "***************");

    _vim64_imsks(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 24 *");
    printf("%s\n", "***************");

    _vim2K_imsks(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 25 *");
    printf("%s\n", "***************");

    _vim64_imsku(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 26 *");
    printf("%s\n", "***************");

    _vim2K_imsku(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 27 *");
    printf("%s\n", "***************");

    _vim64_islts(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 28 *");
    printf("%s\n", "***************");

    _vim2K_islts(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 29 *");
    printf("%s\n", "***************");

    _vim64_isltu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 30 *");
    printf("%s\n", "***************");

    _vim2K_isltu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 31 *");
    printf("%s\n", "***************");

    _vim64_icmqs(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 32 *");
    printf("%s\n", "***************");

    _vim2K_icmqs(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/
    printf("%s\n", "***************");
    printf("%s\n", "* Operação 33 *");
    printf("%s\n", "***************");

    _vim64_icmqu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 34 *");
    printf("%s\n", "***************");

    _vim2K_icmqu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 35 *");
    printf("%s\n", "***************");

    _vim64_isllu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 36 *");
    printf("%s\n", "***************");

    _vim2K_isllu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 37 *");
    printf("%s\n", "***************");

    _vim64_isrlu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 38 *");
    printf("%s\n", "***************");

    _vim2K_isrlu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 39 *");
    printf("%s\n", "***************");

    _vim64_isras(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 40 *");
    printf("%s\n", "***************");

    _vim2K_isras(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 41 *");
    printf("%s\n", "***************");

    _vim64_idivs(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 42 *");
    printf("%s\n", "***************");

    _vim2K_idivs(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 43 *");
    printf("%s\n", "***************");

    _vim64_idivu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 44 *");
    printf("%s\n", "***************");

    _vim2K_idivu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 45 *");
    printf("%s\n", "***************");

    _vim64_imods(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 46 *");
    printf("%s\n", "***************");

    _vim2K_imods(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 47 *");
    printf("%s\n", "***************");

    _vim64_imodu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 48 *");
    printf("%s\n", "***************");

    _vim2K_imodu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 49 *");
    printf("%s\n", "***************");

    _vim64_imuls(a32s64, b32s64, c32s64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 50 *");
    printf("%s\n", "***************");

    _vim2K_imuls(a32s2K, b32s2K, c32s2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 51 *");
    printf("%s\n", "***************");

    _vim64_imulu(a32u64, b32u64, c32u64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 52 *");
    printf("%s\n", "***************");

    _vim2K_imulu(a32u2K, b32u2K, c32u2K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 53 *");
    printf("%s\n", "***************");

    _vim32_imuls(a64s1K, b64s1K, c64s1K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 54 *");
    printf("%s\n", "***************");

    _vim1K_imuls(a64s1K, b64s1K, c64s1K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 55 *");
    printf("%s\n", "***************");

    _vim32_imulu(a64u32, b64u32, c64u32);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 56 *");
    printf("%s\n", "***************");

    _vim1K_imulu(a64u1K, b64u1K, c64u1K);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 57 *");
    printf("%s\n", "***************");

    _vim64_imovs(a32s64, b32s);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 58 *");
    printf("%s\n", "***************");

    _vim2K_imovs(a32s2K, b32s);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 59 *");
    printf("%s\n", "***************");

    _vim64_imovu(a32u64, b32u);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 60 *");
    printf("%s\n", "***************");

    _vim2K_imovu(a32u2K, b32u);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 61 *");
    printf("%s\n", "***************");

    _vim64_fmovs(a32f64, b32f);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 62 *");
    printf("%s\n", "***************");

    _vim64_fsubs(a32f64, b32f64, c32f64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 63 *");
    printf("%s\n", "***************");

    _vim64_fmuls(a32f64, b32f64, c32f64);

/*****************************************************************************/

    printf("%s\n", "***************");
    printf("%s\n", "* Operação 64 *");
    printf("%s\n", "***************");

    _vim64_fcsum(a32f64, &b32f);

    return 0;
}
