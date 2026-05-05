#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {52, 75, 21, 21, 10};
    assert(score_signal(signal_case_1) == -11);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {60, 106, 20, 6, 13};
    assert(score_signal(signal_case_2) == 136);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {77, 94, 23, 21, 6};
    assert(score_signal(signal_case_3) == 42);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
