#include "classes.h"
#include <fstream>
#include <string>

Ctask::Ctask (string taskname) {
  m_taskname = taskname;
  };

void Ctask::createFile () {
  string filename = createFilename();
  ofstream task (filename);
  task << "Start, Stop\n";
  task.close();
  std::cout << "Task '" << m_taskname << "' created." << '\n';
};

void Ctask::getInformation () {
  std::cout << "Task's name: " << m_taskname << '\n';
};

string Ctask::createFilename () {
  return "." + m_taskname + ".csv";
};

void Ctask::startWork () {
  //What happens if no file is found?
  //Check if file ends with \n .
  string filename = createFilename();
  ofstream file (filename, ofstream::app);
  file << time(0) << ",";
  file.close();
  std::cout << "Worky, worky!" << '\n';
};

void Ctask::stopWork () {
  //What happens if no file is found?
  //Check if file ends with \n 
  string filename = createFilename();
  ofstream file (filename, ofstream::app);
  file << time(0) << "\n";
  file.close();
  std::cout << "Feierabend <3" << '\n';
};
