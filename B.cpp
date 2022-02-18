//
// Created by fourt on 2/8/2022.
//

//The invalid entries protected are only for image type, other than that so long as the data type is okay no errors will show
//There's no real need to protect other entries as it's all arbitrary values anyway, at the very least no inputs are protected

#include "B.h"
using namespace std;

B::B() {

}

const string &B::getFileName() const {
    return file_name;
}

void B::setFileName(const string &fileName) {
    file_name = fileName;
}

const string &B::getImageType() const {
    return image_type;
}

void B::setImageType(const string& imageType) {
    if (imageType == "PNG" || imageType == "GIF" || imageType == "JPEG") {
        B::image_type = imageType;
    }
    else {
        B::image_type = "PNG (result of invalid/no entry)";
    }
}


const string &B::getDateCreated() const {
    return date_created;
}

void B::setDateCreated(const string &dateCreated) {
    date_created = dateCreated;
}

double B::getSize() const {
    return size;
}

void B::setSize(double size) {
    B::size = size;
}

const string &B::getAuthorName() const {
    return author_name;
}

void B::setAuthorName(const string &authorName) {
    author_name = authorName;
}

int B::getWidth() const {
    return width;
}

void B::setWidth(int width) {
    B::width = width;
}

int B::getHeight() const {
    return height;
}

void B::setHeight(int height) {
    B::height = height;
}

const string &B::getApertureSize() const {
    return aperture_size;
}

void B::setApertureSize(const string &apertureSize) {
    aperture_size = apertureSize;
}

const string &B::getShutterSpeed() const {
    return shutter_speed;
}

void B::setShutterSpeed(const string &shutterSpeed) {
    shutter_speed = shutterSpeed;
}

int B::getIsoValue() const {
    return iso_value;
}

void B::setIsoValue(int isoValue) {
    iso_value = isoValue;
}

string B::isFlashEnabled() const {
    if (flash_enabled) {
        return "true";
    }
    return "false";
}


void B::setFlashEnabled(bool flashEnabled) {
    flash_enabled = flashEnabled;
}

ostream &operator<<(ostream &os, const B &b) {
    return os << "File name: " << b.getFileName() << "\nImage type: " << b.getImageType() << "\nDate Created: " << b.getDateCreated()
              << "\nSize: " << b.getSize() << "mb\nAuthor Name: " << b.getAuthorName() << "\nWidth: " << b.getWidth() << "px\nHeight: " << b.getHeight()
              << "px\nAperature Size: " << b.getApertureSize() << "\nShutter speed: " << b.getShutterSpeed() << "\nIso Value: " << b.getIsoValue()
              << "\nFlash Enabled? " << b.isFlashEnabled();
}
