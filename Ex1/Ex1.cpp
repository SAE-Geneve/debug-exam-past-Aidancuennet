#define _USE_MATH_DEFINES
        #include <iostream>
    #include <cmath>

int main()


{
    auto radius = 0.0;
    std::cout << "Welcome! Set the radius of a sphere \n";
        std::cin >> radius;
        std::cout << "The volume is: " << 4.0 * M_PI * pow(radius, 3.0) / 3.0 << "\n";
    	std::cout << "The area is: " << 4.0 * M_PI * pow(radius, 2.0) << "\n";

    //Windows specific
    system( "pause" );
    
    return 0;
}
