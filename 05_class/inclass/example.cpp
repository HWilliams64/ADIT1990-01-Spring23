
// struct PrivatePerson {

//     private:
//         string address;

//     public:
//         string name;
//         int age;
//         float height;
// };

#include <iostream>
using namespace std;

struct PhonePlan{

    private:
    int text;
    int minutes;
    int data;

    public: 

    PhonePlan(){}

    PhonePlan(int text, int minutes, int data){
     this->text = text;
     this->minutes = minutes;
     this->data = data;
    }

    bool canCall(){
        return minutes > 0;
    }

    bool makeCall(int duration){
        if(minutes - duration > 0){
            minutes -= duration;
            return true;
        }
        return false;
    }

    bool makeText(){
        if(text - 1 > 0){
            text -= 1;
            return true;
        }
        return false;
    }

    bool surfInternet(int bytes){
        if(data - bytes > 0){
            data -= bytes;
            return true;
        }
        return false;
    }
   

};

class SmartPhone{

    //vector<string> apps;
    float hddCapacity;
    PhonePlan plan;

    public:
        string shape;
        string color;
        float height;
        float width;
        string model;
        string make;

    SmartPhone(string make, string model, PhonePlan plan){
        this-> hddCapacity = 0;
        this-> shape =  "rectangle";
        this-> color = "gold";
        this-> height = 6.33;
        this->width = 3.07;
        this->plan = plan;
    }

    bool call(int duration){
        return this -> plan.makeCall(duration);
    }

    bool takePicture(){
        if(hddCapacity < 1){
            hddCapacity += .01;
            return true;
        }
        return false;
    }
};




int main(){
    PhonePlan verizon {100, 100, 100};
    SmartPhone pixel("Google", "Pixel 7", verizon);

    PhonePlan t_mobile {100, 100, 100};
    SmartPhone iphone("Apple", "iphone 13", t_mobile);

    bool v = pixel.takePicture();
    cout << "Pixel: " <<  v << endl;
    v = iphone.takePicture();
    cout << "Iphone: " << v << endl;

    cout << "Call Result: " << iphone.call(120) << endl;
    cout << "Call Result: " << iphone.call(90) << endl;
    cout << "Call Result: " << iphone.call(90) << endl;
}
