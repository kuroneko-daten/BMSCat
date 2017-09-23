#include<string>

class BmsModel {

public:
    BmsModel();
    ~BmsModel();

    //setter
    void set_path(std::string);
    void set_genre(std::string);
    void set_title(std::string);
    void set_subtitle(std::string);
    void set_artist(std::string);
    void set_subartist(std::string);
    void set_bpm(double);
    void set_total(double);
    void set_level(int);
    void set_notes(int);
    void set_player(int);
    void set_rank(int);

    //getter
    std::string get_path();
    std::string get_genre();
    std::string get_title();
    std::string get_subtitle();
    std::string get_artist();
    std::string get_subartist();
    double get_bpm();
    double get_total();
    int get_level();
    int get_notes();
    int get_player();
    int get_rank();

private:
    std::string path_ = "";         //bms file path
    std::string genre_ ="";          //genre
    std::string title_ ="";          //title
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
