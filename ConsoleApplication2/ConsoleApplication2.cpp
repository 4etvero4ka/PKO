#include <iostream>
#include <string>
#include <vector>
class Tovar {
    private:
        std::string name;
        double cost;
        int gv;
        void findTV() {
            if (name.find("TV") != std::string::npos) {
                cost = cost + cost * 0.2;
            }
        }
public:
    Tovar(std::string name, double cost, int gv) {
        this->name = name;
        this->cost = cost;
        this->gv = gv;
    }
    void setAge() {
        std::cin >> gv;
    }
    void howMuch() {
        std::cout << "How much: " << 2023 - gv<< std::endl;
    }
    void getAll() {
        findTV();
        std::cout << "Name: " << name << " cost: "<< cost << " gv" << gv << std::endl;
    }
};
class Rab {
protected:
    std::string surname;
    int oklad;
    int DateBD;
};
class Sotr: public Rab {
private:
    std::string job;
    void getSotr() {
        std::cout << "surname: " << surname << " Oklad: " << oklad << " DateBD: " << DateBD << " Job: " << job;
    }
public:
    Sotr(std::string surname, int oklad, int DateDB, std::string job) {
        this->surname = surname;
        this->oklad = oklad;
        this->DateBD = DateDB;
        this->job = job;
    }
    void plus() {
        if (job.find("Proger") != std::string::npos) {
            oklad = oklad + oklad * 0.2;
        }
        getSotr();
    }

};
int main()
{
    /* std::vector <Sotr> v1;
     v1.push_back(Sotr("HT", 20000, 2005, "Proger"));
     v1.push_back(Sotr("TT", 20000, 2005, "RealMan"));
     for (int i = 0; i < v1.size(); i++) {
         v1[i].plus();
     }*/

    std::vector <Tovar> v1;
    v1.push_back(Tovar("TV gg", 15000, 2005));
    v1.push_back(Tovar("TVgg", 15000, 2005));
    for (int i = 0; i < v1.size(); i++) {
        v1[i].howMuch();
        v1[i].getAll();

    }
}

