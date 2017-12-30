#include "classes.h"

Ctask::Ctask (string taskname, string customername) {
  m_name = taskname;
  m_customer = customername;
};

void Ctask::getInformation () {
  std::cout << "Task's name: " << m_name << '\n';
  std::cout << "Customer's name: " << m_customer << '\n';
}
