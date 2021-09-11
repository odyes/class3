#include "User.hh"
#include<iostream>

User::User(unsigned int age, std::string name, float height, float weight)
{
  this->age = age;
  this->name = name;
  this->height = height;
  this->weight = weight;
}

User::~User()
{
  std::cout << "User deleted" << std::endl;
}

unsigned int User::GetAge() const
{
  return age;
}

void User::SetAge(unsigned int age)
{
  this->age = age < 0 ? 1 : age;
}

std::string User::GetName() const
{
  return name;
}

void User::SetName(std::string name)
{
  this->name = name == "" ? "default" : name;
}

float User::GetHeight() const
{
  return height;
}

void User::SetHeight(float height)
{
  this->height = height <= 0.f ? 1.f : height;
}

float User::GetWeight() const
{
  return weight;
}

void User::SetWeight(float weight)
{
  this->weight = weight <= 0.f ? 1.f : weight;
}