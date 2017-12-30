#include <iostream>
using namespace std;

class Ctask {
private:
  string m_name;
  string m_customer;
  float m_timespent;
public:
  Ctask (string, string);
  virtual ~Ctask () {};
  void getInformation ();
};
