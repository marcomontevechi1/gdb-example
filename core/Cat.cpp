#include <stdio.h>
#include <string>
#include <random>
#include <ctime>


struct madPeople {

    int peopleNumber;

};

class Cat{

    std::string name;
    std::string color;

public:

    Cat(std::string name, std::string color) : name(name), color(color) {
	this->dominateWorld();
    }

    void dominateWorld(){
    
        madPeople multitude = this->createChaos();
	this->talkToYourLeader(multitude);
    
    }
    madPeople createChaos(){
         
	std::srand(std::time(nullptr));

        madPeople multitude;
	multitude.peopleNumber = 1 + ( std::rand() % ( 8 - 2 ) );

	return multitude;
    
    }
    void talkToYourLeader(madPeople multitude){
    
	char *message = "Cut the cat-itude!\n";

	for (int i=0; i<multitude.peopleNumber; i++){
	    printf("%s", message);
            *message+=1;
	}
    
    }

};

int main(){

    Cat myCat("Astolfo", "Grey");

}
