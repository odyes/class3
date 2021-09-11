#pragma once
#include<string>

class User
{
private:
  unsigned int age;
  std::string name;
  float height;
  float weight;
public:
  User(unsigned int age, std::string name, float height, float weight);
  ~User();

  unsigned int GetAge() const;
  std::string GetName() const;
  float GetHeight() const;
  float GetWeight() const;

  void SetAge(unsigned int age);
  void SetName(std::string name);
  void SetHeight(float height);
  void SetWeight(float weight);
};
