//
// Created by fourt on 2/8/2022.
//
#include <string>
#include <ostream>

#ifndef B_H
#define B_H
using namespace std;

class B {
public:
    B();

//Used the compiler to help generate the getters/setters, thank you CLion

    friend ostream &operator<<(ostream &os, const B &b);

    const string &getFileName() const;

    void setFileName(const string &fileName);

    const string &getImageType() const;

    void setImageType(const string& imageType);

    const string &getDateCreated() const;

    void setDateCreated(const string &dateCreated);

    double getSize() const;

    void setSize(double size);

    const string &getAuthorName() const;

    void setAuthorName(const string &authorName);

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

    const string &getApertureSize() const;

    void setApertureSize(const string &apertureSize);

    const string &getShutterSpeed() const;

    void setShutterSpeed(const string &shutterSpeed);

    int getIsoValue() const;

    void setIsoValue(int isoValue);

    string isFlashEnabled() const;

    void setFlashEnabled(bool flashEnabled);

private: //Hard code obvious names/values so that when printed, we will know what isnt working
    string file_name = "NoName";
    string image_type = "NoType";
    string date_created = "NoDate";
    double size = 0.0;
    string author_name = "NoAuthor";
    int width =0, height =0;
    string aperture_size = "NoAperture/0";
    string shutter_speed = "Nothing/1000";
    int iso_value = 0;
    bool flash_enabled = false;
};


#endif //B_H
