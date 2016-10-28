#include <iostream>
using namespace std;

class Animal {
  public:
    Animal();
    Animal(string name, int pounds, char animalType);

    void setName(string name);
    void setWeight(int pounds);
    void setAnimalType(char animalType);

    string getName();
    int getWeight();
    char getAnimalType();

    void description();
  
  private:
    string name;
    int pounds;
    char animalType;
};

Animal::Animal() {
  name = "";
  pounds = 0;
  animalType = 'U'; // Unknown
}

Animal::Animal(string name, int pounds, char animalType) {
  this->name = name;
  this->pounds = pounds;
  this->animalType = animalType;
}

void Animal::setName(string name) {
  this->name = name;
}

void Animal::setWeight(int pounds) {
  this->pounds = pounds;
}

void Animal::setAnimalType(char animalType) {
  this->animalType = animalType;
}

string Animal::getName() {
  return this->name;
}

int Animal::getWeight() {
  return this->pounds;
}

char Animal::getAnimalType() {
  return this->animalType;
}

void Animal::description() {
  cout << "\nName: " << this->getName() << "\nWeight: " << this->getWeight() << " lbs.";
  switch(this->animalType) {
    case 'H':
      cout << "\nAnimal type: Herbivore" << endl;
      break;
    case 'C':
      cout << "\nAnimal type: Carnivore" << endl;
      break;
    case 'O':
      cout << "\nAnimal type: Omnivore" << endl;
      break;
    default:
      cout << "\nAnimal type: Unknown" << endl;
      break;
  }
}

int main() {
  // Create a new Animal object
  Animal a("Gerald the Giraffe", 245, 'H');
  a.description();

  Animal b;
  b.setName("Helix the Hippo");
  b.setWeight(450);
  b.setAnimalType('O');

  b.description();

  return 0;
}