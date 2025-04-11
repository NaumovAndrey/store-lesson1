#include "Texture.hpp"

Texture::Texture(std::string name) : m_name(name) {}
Texture::~Texture() {}

int Texture::getId() { return m_id; }
const std::string& Texture::getName() { return m_name; }

void Texture::setName(std::string &name) : m_name(name) {}
