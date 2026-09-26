class ParkingSystem {
private:
    int _big;
    int _medium;
    int _small;
    int curr_big = 0;
    int curr_medium = 0;
    int curr_small = 0;

public:
    ParkingSystem(int big, int medium, int small) {
        _big = big;
        _medium = medium;
        _small = small;
    }
    
    bool addCar(int carType) {
        if (carType == 3) {
            if (curr_small < _small) {
                curr_small++;
                return true;
            }
            else
                return false;
        }

        if (carType == 2) {
            if (curr_medium < _medium) {
                curr_medium++;
                return true;
            }
            else
                return false;
        }

        if (carType == 1) {
            if (curr_big < _big) {
                curr_big++;
                return true;
            }
            else
                return false;
        }

        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */