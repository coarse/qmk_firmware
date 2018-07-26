#include "split_postage.h"

#ifdef SWAP_HANDS_ENABLE
__attribute__ ((weak))
const keypos_t hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {

  {{0, 3}, {1, 3}, {2, 3}},
  {{0, 4}, {1, 4}, {2, 4}},
  {{0, 5}, {1, 5}, {2, 5}},
  {{0, 0}, {1, 0}, {2, 0}},
  {{0, 1}, {1, 1}, {2, 1}},
  {{0, 2}, {1, 2}, {2, 2}},
};
#endif
