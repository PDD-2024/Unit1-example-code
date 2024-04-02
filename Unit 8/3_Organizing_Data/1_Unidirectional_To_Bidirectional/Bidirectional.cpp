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
private:
    Plane *planes;
    int planesSize;

public:
    ControlTower(Plane planes[], int planesSize) : planes(planes), planesSize(planesSize) {}

    void requestPlanesStatus()
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
    Plane planes[3] = {DPlane(123), Plane(456), Plane(789)};
    ControlTower tower(planes, 3);
    Plane plane(123);

    tower.requestLanding(&plane);
    
    tower.requestPlanesStatus();

    return 0;
}