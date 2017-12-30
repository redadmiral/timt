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
  void report ();
};
