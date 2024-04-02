#include <iostream>

class ControlTower;

class Plane
{
private:
    int planeNumber;
    ControlTower *tower;

public:
    Plane(int number) : planeNumber(number), tower(nullptr) {}

    int getPlaneNumber()
    {
        return planeNumber;
    }

    void land();
};

class ControlTower
{
public:
    void requestPlanesStatus(Plane planes[], int planesSize)
    {
        for (int i = 0; i < planesSize; i++)
        {
            std::cout << "Control Tower: Requesting status for plane " << planes[i].getPlaneNumber() << std::endl;
        }
    }

    bool requestLanding(Plane *plane)
    {
        std::cout << "Control Tower: Requesting landing for plane " << plane->getPlaneNumber() << std::endl;
        return true;
    }
};

void Plane::land()
{
    if (tower->requestLanding(this))
    {
        std::cout << "Plane " << planeNumber << ": Landing approved. Initiating landing sequence." << std::endl;
    }
}

int main()
{
    ControlTower tower;
    Plane plane(123);

    tower.requestLanding(&plane);

    // requestPlanesStatus()
    Plane planes[3] = {Plane(123), Plane(456), Plane(789)};
    tower.requestPlanesStatus(planes, 3);

    return 0;
}