#include "Texture.hpp"

Texture::Texture(std::string name) : m_name(name) {}
Texture::~Texture() {}

int Texture::getId() { return m_id; }

void Texture::setName(const std::string& name) { m_name = name; }

