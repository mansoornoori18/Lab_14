#include<iostream>  // COMSC-210 | Lab 14 | Mansoor Noori
#include<iomanip>   // IDE Visual Studio,

using namespace std; // to void using std over and over

// Color class definition
class Color {
    private:
    // Private member variables to store RGB values
    int red;
    int green;
    int blue;

    public:

    // Default constructor: initializes color to black (0, 0, 0)
    Color() : red(0), green(0), blue(0) {}

    // Parameterized constructor: initializes with given RGB values
    Color(int r, int g, int b){
        setRed(r);
        setGreen(g);
        setBlue(b);
    }

    // Setter for red value
    void setRed(int r){
        red = (r >= 0 && r <= 255) ? r : 0;
    }

    // Setter for green value
    void setGreen(int g){
        green = (g >= 0 && g <= 255) ? g : 0;
    }

    // Setter for blue value
    void setBlue(int b){
        blue = (b >= 0 && b <= 255) ? b : 0;
    }

    // Getter for red value
    int getRed() const{
        return red;
    }

    // Getter for green value
    int getGreen() const {
         return green;
    }

    // Getter for blue value
    int getBlue() const {
        return blue;
    }
    

   


    


};


int main (){

    cout << "Hi" << endl;


    return 0;

}