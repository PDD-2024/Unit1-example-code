#include <iostream>
#include <string>

// Abstract Product
class MarioCharacter {
public:
    virtual void render() const = 0;
    virtual ~MarioCharacter() = default;
};

class MarioPowerUp {
public:
    virtual void apply() const = 0;
    virtual ~MarioPowerUp() = default;
};

// Concrete Products
class MarioBrosCharacter : public MarioCharacter {
public:
    void render() const override {
        std::cout << "Rendered Mario Bros style character." << std::endl;
    }
};

class MarioBrosPowerUp : public MarioPowerUp {
public:
    void apply() const override {
        std::cout << "Applied Mario Bros style power-up." << std::endl;
    }
};

class MarioGalaxyCharacter : public MarioCharacter {
public:
    void render() const override {
        std::cout << "Rendered Mario Galaxy style character." << std::endl;
    }
};

class MarioGalaxyPowerUp : public MarioPowerUp {
public:
    void apply() const override {
        std::cout << "Applied Mario Galaxy style power-up." << std::endl;
    }
};

class MarioOdysseyCharacter : public MarioCharacter {
public:
    void render() const override {
        std::cout << "Rendered Mario Odyssey style character." << std::endl;
    }
};

class MarioOdysseyPowerUp : public MarioPowerUp {
public:
    void apply() const override {
        std::cout << "Applied Mario Odyssey style power-up." << std::endl;
    }
};

// Abstract Factory
class MarioAbstractFactory {
public:
    virtual MarioCharacter* createCharacter() const = 0;
    virtual MarioPowerUp* createPowerUp() const = 0;
    virtual ~MarioAbstractFactory() = default;
};

// Concrete Factories
class MarioBrosCharacterFactory : public MarioAbstractFactory {
public:
    MarioCharacter* createCharacter() const override {
        return new MarioBrosCharacter();
    }

    MarioPowerUp* createPowerUp() const override {
        return new MarioBrosPowerUp();
    }
};

class MarioGalaxyCharacterFactory : public MarioAbstractFactory {
public:
    MarioCharacter* createCharacter() const override {
        return new MarioGalaxyCharacter();
    }

    MarioPowerUp* createPowerUp() const override {
        return new MarioGalaxyPowerUp();
    }
};

class MarioOdysseyCharacterFactory : public MarioAbstractFactory {
public:
    MarioCharacter* createCharacter() const override {
        return new MarioOdysseyCharacter();
    }

    MarioPowerUp* createPowerUp() const override {
        return new MarioOdysseyPowerUp();
    }
};

// Client
int main() {
    MarioAbstractFactory* factory = nullptr;
    MarioCharacter* character = nullptr;
    MarioPowerUp* powerUp = nullptr;

    // Selector for Mario game style
    int gameStyle = 0;
    std::cout << "Select Mario game style (1, 2, 3): ";
    std::cin >> gameStyle;

    switch (gameStyle) {
        case 1:
            factory = new MarioBrosCharacterFactory();
            break;

        case 2:
            factory = new MarioGalaxyCharacterFactory();
            break;

        case 3:
            factory = new MarioOdysseyCharacterFactory();
            break;

        default:
            std::cout << "Invalid game style selected." << std::endl;
            return 1;
    }

        character = factory->createCharacter();
        powerUp = factory->createPowerUp();
        character->render();
        powerUp->apply();
        delete factory;
        delete character;
        delete powerUp;


    return 0;
}
