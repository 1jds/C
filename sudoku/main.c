#include <stdio.h>
#include <string.h>

typedef struct Tile {
  int square;
  int row;
  int column;
  int final_value;
  int poss_values[9];
} Tile;

int sample_board_one_star_1[] = {
    2, 4, 9, 7, 3, 0, 0, 0, 6, 0, 0, 5, 0, 4, 0, 8, 2, 7, 1, 0, 0,
    2, 0, 6, 0, 0, 3, 0, 0, 0, 4, 7, 0, 6, 8, 0, 0, 2, 0, 6, 0, 5,
    0, 1, 0, 0, 6, 3, 0, 9, 2, 0, 0, 0, 5, 0, 0, 8, 0, 4, 0, 0, 1,
    4, 1, 8, 0, 2, 0, 9, 0, 0, 3, 0, 0, 0, 1, 9, 2, 4, 8};

int sample_board_two_stars_1[] = {
    0, 0, 0, 0, 0, 3, 9, 6, 8, 0, 0, 4, 6, 2, 0, 5, 1, 0, 0, 8, 7,
    0, 5, 0, 0, 0, 2, 0, 0, 0, 2, 7, 0, 0, 0, 9, 7, 1, 0, 0, 0, 0,
    0, 2, 4, 9, 0, 0, 0, 1, 5, 0, 0, 0, 5, 0, 0, 0, 8, 0, 4, 3, 0,
    0, 2, 3, 0, 6, 9, 7, 0, 0, 1, 6, 8, 4, 0, 0, 0, 0, 0};

void check_for_sole_possible_values_and_update_final_values(Tile board[]) {
  for (int i = 0; i < 81; i++) {
    if (board[i].final_value == 0) {
      int number_of_possible_values_remaining_for_tile = 0;
      int curr_possible_value = 0;
      for (int j = 0; j < 9; j++) {
        if (number_of_possible_values_remaining_for_tile > 1) {
          break;
        }
        if (board[i].poss_values[j] != 0) {
          number_of_possible_values_remaining_for_tile++;
          curr_possible_value = board[i].poss_values[j];
        }
      }
      if (number_of_possible_values_remaining_for_tile == 1) {
        board[i].final_value = curr_possible_value;
      }
    }
  }
}

void use_final_values_to_limit_possible_values_in_square_row_or_column(
    Tile board[]) {
  for (int i = 0; i < 81; i++) {
    if (board[i].final_value != 0) {
      for (int j = 0; j < 81; j++) {
        if (board[j].final_value == 0 && (board[j].square == board[i].square ||
                                          board[j].row == board[i].row ||
                                          board[j].column == board[i].column)) {
          board[j].poss_values[board[i].final_value - 1] = 0;
        }
      }
    }
  }
}

void update_possible_values_if_final_value_exists(Tile board[]) {
  for (int i = 0; i < 81; i++) {
    if (board[i].final_value != 0) {
      memcpy(board[i].poss_values, (int[]){0, 0, 0, 0, 0, 0, 0, 0, 0},
             sizeof(int) * 9);
    }
  }
}

void place_starting_numbers(Tile board[], int sample_board[]) {
  for (int i = 0; i < 81; i++) {
    board[i].final_value = sample_board[i];
  }
}

void print_board(Tile board[]) {
  printf("\n  ");
  for (int i = 0; i < 81; i++) {
    int curr_tile = i + 1;
    if (board[i].final_value == 0) {
      printf(". ");
    } else {
      printf("%d ", board[i].final_value);
    }
    if (curr_tile % 3 == 0 && curr_tile % 9 != 0) {
      printf("| ");
    }
    if (curr_tile % 9 == 0) {
      printf("\n  ");
    }
    if (curr_tile == 27 || curr_tile == 54) {
      printf("------+-------+------\n  ");
    }
  }
  printf("\n");
}

void set_board_initial_blank_state(Tile board[]) {
  int curr_row = 1;
  int curr_col = 1;
  int squares_top_mid_bottom_offset = 0;
  int curr_square = 0;

  for (int i = 0; i < 81; i++) {
    // Update the current square; using an offset to see if we're looking at the
    // 1st, 2nd, or 3rd row of squares
    // ...Update offset first
    if (curr_row == 4 || curr_row == 5 || curr_row == 6) {
      squares_top_mid_bottom_offset = 3;
    }
    if (curr_row > 6) {
      squares_top_mid_bottom_offset = 6;
    }
    // ...Update actual square
    if (curr_col < 4) {
      curr_square = 1 + squares_top_mid_bottom_offset;
    } else if (curr_col > 6) {
      curr_square = 3 + squares_top_mid_bottom_offset;
    } else {
      curr_square = 2 + squares_top_mid_bottom_offset;
    }
    // Set the values for the current cell/tile struct
    board[i].square = curr_square;
    board[i].row = curr_row;
    board[i].column = curr_col;
    board[i].final_value = 0;
    // I wanted to do this: board[i].poss_values = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // But that doesn't work. So, instead, I used this trick from Google: Copy
    // the values directly into the struct's array
    memcpy(board[i].poss_values, (int[]){1, 2, 3, 4, 5, 6, 7, 8, 9},
           sizeof(int) * 9);
    // Update current row and column for next cell/tile write
    if (curr_col < 9) {
      curr_col++;
    } else {
      curr_col = 1;
      curr_row++;
    }
  }
}

void test_print_one_tile_of_prepopulation(Tile board[], int tile_to_show) {
  if (tile_to_show <= 0 || tile_to_show > 81) {
    printf("Enter a number between 1 and 81 for that tile in human counting "
           "order not 0 index order \n");
    return;
  } else {
    tile_to_show--;
  }
  printf("You want item at index: %d \n", tile_to_show);
  printf("square: %d \nrow: %d \ncolumn: %d \nfinal_value: %d \n",
         board[tile_to_show].square, board[tile_to_show].row,
         board[tile_to_show].column, board[tile_to_show].final_value);
  printf("possible_values: ");
  for (int i = 0; i < 9; i++) {
    printf("%d ", board[tile_to_show].poss_values[i]);
  }
  printf("\n\n");
}

int main(void) {
  Tile board[81];
  set_board_initial_blank_state(board);
  print_board(board);
  place_starting_numbers(board, sample_board_two_stars_1);
  print_board(board);

  // Start with a fixed number of iterations, but this would ideally have a stop
  // condition somehow... possibly a return value...???
  for (int i = 0; i < 10; i++) {
    update_possible_values_if_final_value_exists(board);
    use_final_values_to_limit_possible_values_in_square_row_or_column(board);
    check_for_sole_possible_values_and_update_final_values(board);
    print_board(board);
  }

  // update_possible_values_if_final_value_exists(board);
  // test_print_one_tile_of_prepopulation(board, 1);
  // test_print_one_tile_of_prepopulation(board, 10);
  print_board(board);

  return 0;
}
