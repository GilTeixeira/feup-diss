
#include <string>
using std::string;

class Product {
 private:
  string name;
  double cost;


 public:
  Product(string name, double cost);
  string getName() const;
  double getCost() const;
  bool compareTo(const Product &prod); // compare the name of two products, check if smaller
};
