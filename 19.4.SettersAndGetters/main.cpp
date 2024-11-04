#include <iostream>

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
// (freeCodeCamp.org)

const double Pi {3.1415926535897932384626433832795};

class Cylinder {
    public :
        // Constructors
        Cylinder () = default;

        Cylinder (double rad_param, double height_param){
            base_radius = rad_param;
            height = height_param;
        }

        // Functions (methods)
        double volume(){
            return Pi * base_radius * base_radius * height;
        }

        // Getter and setter methods (which must be public to be accessible from outside)
        
        double get_base_radius(){
            return base_radius;
        }

        double get_height(){
            return height;
        }

        void set_base_radius(double rad_param){
            base_radius = rad_param;
        }

        void set_height(double height_param){
            height = height_param;
        }

    private :
        // Member variables;
        double base_radius{1};
        double height {1};
};

int main(){
    
    Cylinder cylinder1(2,3);

    std::cout << "base_radius : " << cylinder1.get_base_radius() << std::endl;
    std::cout << "height : " << cylinder1.get_height() << std::endl;
    std::cout << "volume : " << cylinder1.volume() << std::endl;
    
    std::cout << std::endl;

    // Modify our object
    cylinder1.set_base_radius(15);  // if you made these functions private in above,
    cylinder1.set_height(5);        // you would get error when you use them.

    std::cout << "new base_radius : " << cylinder1.get_base_radius() << std::endl;
    std::cout << "new height : " << cylinder1.get_height() << std::endl;
    std::cout << "and the new volume : " << cylinder1.volume() << std::endl;
    
    return 0;
}
