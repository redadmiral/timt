#include "classes.h"
using namespace std;

int main(int argc, char const *argv[]) {
  if (argv [1] == (string) "new") {
      Ctask task (argv[2]);
      task.createFile();
  } else  if (argv [1] == (string) "start") {
    Ctask task (argv[2]);
    task.startWork();
  }  else if (argv [1] == (string) "stop") {
    Ctask task (argv[2]);
    task.stopWork();
  }
  else {std::cout << "No valid input." << '\n';}
  //std::cout << argv[1] << '\n';
  return 0;
}
