//
//  IntegratorVec2f.h
//  Spirographs
//
//  Created by James Bentley on 5/15/15.
//
//

#pragma once

#include "ofMain.h"

#define DAMPING 0.5f
#define ATTRACTION 0.5f

template <class T>
class Integrator
{
public:
    Integrator(void) {
            val = T();
            mass = 1;
            damping = DAMPING;
            attraction = ATTRACTION;
    };
    Integrator(T _val){
        val = _val;
        mass = 1.0f;
        damping = DAMPING;
        attraction = ATTRACTION;
    };
    Integrator(T _val, float _damping, float _attraction){
        val = _val;
        damping = _damping;
        attraction = _attraction;
        mass = 1;
    };
    
    void set(T _val){
        val = _val;
    };
    
    void update(void){
        if(targeting) {
            force = attraction * (tar - val);
        }
        acc = force / mass;
        vel = (vel + acc) * damping;
        val += vel;
        
    };
    void target(T _tar){
        targeting = true;
        tar = _tar;
    };
    void noTarget(){
        targeting = false;
    };
    
    ~Integrator(void) {};
    
    T val;
    T vel;
    T acc;
    T force;
    T tar;
    
    float mass;
    float damping;
    float attraction;
    
    bool targeting;
};
