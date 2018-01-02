#include "classes.h"
#include <fstream>
#include <string>

Ctask::Ctask (string taskname) {
  m_taskname = taskname;
  };

void Ctask::createFile () {
  string filename = createFilename();
  ofstream task (filename);
  task.close();
  std::cout << "Task '" << m_taskname << "' created." << '\n';
};

void Ctask::getInformation () {
  std::cout << "Task's name: " << m_taskname << '\n';
};

string Ctask::createFilename () {
  string homedir;
  homedir = getenv ("HOME");
  return homedir + "/.timt/" + m_taskname + ".csv";
};

void Ctask::startWork () {
  //What happens if no file is found?
  //Check if file ends with \n .
  string filename = createFilename();
  ofstream file (filename, ofstream::app);
  file << time(0) << " "; //writes the current unixtime (seconds since 1970)
  file.close();
  std::cout << "Worky, worky!" << '\n';
};

void Ctask::stopWork () {
  //What happens if no file is found?
  //Check if file ends with \n
  string filename = createFilename();
  ofstream file (filename, ofstream::app);
  file << time(0) << "\n"; //writes the current unixtime (seconds since 1970)
  file.close();
  std::cout << "Feierabend <3" << '\n';
};

//reads file created by startWork and stopWork

float Ctask::report (int startdate,int stopdate) {
    string filename = createFilename();
    //from https://stackoverflow.com/questions/7868936/read-file-line-by-line
    std::ifstream infile(filename);

    int start, stop, sum_start=0, sum_stop=0;
    float result;
    while (infile >> start >> stop)
    {
      if (start > startdate && start < stopdate) {
        sum_start += start;
        sum_stop += stop;
      }
    }
    result = (float) (sum_stop - sum_start)/3600;
    std::cout << "You have worked for " << result << " hours on " << m_taskname << '\n';
    return result;
  };

void Ctask::reportmonth (const char month[], const char year[]) {
  struct tm t;
  struct tm * tp = &t;

  t.tm_sec = 0;
  t.tm_min = 0;
  t.tm_hour = 0;
  t.tm_mday = 1;
  t.tm_mon = atoi(month) - 1;
  t.tm_year = atoi(year) + 100;
  t.tm_isdst = -1;

  int starttime = timegm(tp);
  t.tm_mon = atoi(month);
  int stoptime = timegm(tp);

  report(starttime, stoptime);
};
