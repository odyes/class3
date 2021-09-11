#pragma once

struct Person
{
  unsigned int age;
  const char* name;
  float height;
  float weight;

  Person(unsigned int age, const char* name, float height, float weight)
  {
    this->age = age;
    this->name = name;
    this->height = height;
    this->weight = weight;
  }
};
