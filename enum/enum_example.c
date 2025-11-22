#include <stdio.h>

enum PrimaryColor {
  RED,
  YELLOW,
  BLUE
};

enum SecondaryColor {
  ORANGE,
  GREEN,
  PURPLE
};

const char* getColorName(enum PrimaryColor color) {
  switch (color) {
    case RED:
      return "Red";
    case YELLOW:
      return "Yellow";
    case BLUE:
      return "Blue";
    default:
      return "Unknown Color";
  }
}

const char* getComplimentaryColor(enum PrimaryColor color) {
  enum SecondaryColor s_color;
  switch (color) {
    case RED:
      printf("Red selected\n");
      s_color = GREEN;
      break;
    case YELLOW:
      printf("Yellow selected\n");
      s_color = PURPLE;
      break;
    case BLUE:
      printf("Blue selected\n");
      s_color = ORANGE;
      break;
    default:
      return "Unknown Color";
  }
  switch(s_color) {
    case ORANGE:
      return "Orange";
    case GREEN:
      return "Green";
    case PURPLE:
      return "Purple";
    default:
      return "Unknown Color";
  };
}

int main() {
  enum PrimaryColor myColor = BLUE;
  printf("My primary color is: %s\n", getColorName(myColor));
  printf("The complimentary color is: %s\n", getComplimentaryColor(myColor));
  return 0;
}
