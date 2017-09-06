#include<string>

class BmsModel {

public:
    BmsModel();
    ~BmsModel();

private:
    std::string path_ = "";         //bms file path
    std::string genre_ "";          //genre
    std::string title_ "";          //title
    std::string subtitle =  "";     //subtitle
    std::string artist_ = "";       //artist
    std::string subartist_ = "";    //subartist
    double bpm_ = 130;              //bpm (default 130)
    double total_ = 0;              //total (default )
    int level_ = 0;                 //level (default 0)
    int notes_ = 0;                 //total notes (exclude invisible)
    int player_ = 0;                //play style
    int rank_ = 0;                  //judge rank
};
