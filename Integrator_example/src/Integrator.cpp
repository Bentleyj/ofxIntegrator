//
//  IntegratorVec2f.cpp
//  Spirographs
//
//  Created by James Bentley on 5/15/15.
//
//

#include "Integrator.h"
template <class T>
Integrator<T>::Integrator(float _val) {
}

template <class T>
Integrator<T>::Integrator(float _val, float _damping, float _attraction) {

}

template <class T>
void Integrator<T>::set(float _val) {
}

template <class T>
void Integrator<T>::update(void) {
}

template <class T>
void Integrator<T>::target(float _tar) {
    targeting = true;
    tar = _tar;
}

template <class T>
void Integrator<T>::noTarget() {
    targeting = false;
}

template <class T>
Integrator<T>::~Integrator(void)
{
    
}