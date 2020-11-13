#include <string>

using std::string;

class Person {
 protected:
  unsigned int id;
  string name;

 public:
  Person(unsigned int id, string nome);
  string getName() const;
  unsigned int getId() const;
  void setName(string name);
  bool compareTo(const Person &cli);
};
