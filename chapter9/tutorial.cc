#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TutorialConfig.h"
int main(int argc, char* argv[]) {
  fprintf(stdout, "%s Version %d.%d\n", argv[0], TUTORIAL_VERSION_MAJOR, TUTORIAL_VERSION_MINOR);
  if (argc < 2) {\
    fprintf(stdout, "Usage: %s number\n", argv[0]);
    return 1;
  }
  double inputValue = atof(argv[1]);
  double outputValue = sqrt(inputValue);
  fprintf(stdout, "The square root of %g is %g\n", inputValue, outputValue);
  return 0;
}
