#include"bms_model.h"

//constructor
BmsModel::BmsModel(){
}

//destructor
BmsModel::~BmsModel(){
}

//setter
void BmsModel::set_path(std::string path){
    path_ = path;
}

void BmsModel::set_genre(std::string genre){
    genre_ = genre;
}

void BmsModel::set_title(std::string title){
    title_ = title;
}

void BmsModel::set_subtitle(std::string subtitle){
    subtitle_ = subtitle;
}

void BmsModel::set_artist(std::string artist){
    artist_ = artist;
}

void BmsModel::set_subartist(std::string subartist){
    subartist_ = subartist;
}

void BmsModel::set_bpm(double bpm){
    bpm_ = bpm;
}

void BmsModel::set_total(double total){
    total_ = total;
}

void BmsModel::set_level(int level){
    level_ = level;
}

void BmsModel::set_notes(int notes){
    notes_ = notes;
}

void BmsModel::set_player(int player){
    player_ = player;
}

void BmsModel::set_rank(int rank){
    rank_ = rank;
}


//getter
std::string BmsModel::get_path(){
    return path_;
}

std::string BmsModel::get_genre(){
    return genre_;
}

std::string BmsModel::get_title(){
    return title_;
}

std::string BmsModel::get_subtitle(){
    return subtitle_;
}

std::string BmsModel::get_artist(){
    return artist_;
}

std::string BmsModel::get_subartist(){
    return subartist_;
}

double BmsModel::get_bpm(){
    return bpm_;
}

double BmsModel::get_total(){
    return total_;
}

int BmsModel::get_level(){
    return level_;
}

int BmsModel::get_notes(){
    return notes_;
}

 int BmsModel::get_player(){
    return player_;
}

int BmsModel::get_rank(){
    return rank_;
}
