#include <iostream>
using namespace std;

class Ctask {
private:
  string m_taskname;
public:
  Ctask (string);
  virtual ~Ctask () {};
  void getInformation ();
  string createFilename ();
  void createFile ();
  void startWork ();
  void stopWork ();
  float report (int startdate = 0,int stopdate = 2000000000); //Jan 1970 - May 2033
  void reportmonth (const char[], const char[]);
};
