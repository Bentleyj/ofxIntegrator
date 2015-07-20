# ofxIntegrator

This is a small addon adapted from Ben Fry's book Visualizing data.

The integrator class is a great class that allows you to smoothly change variables. I use it in most of my projects and it works really well!

To use simply add the ofxIntegrator folder to your addons folder and use the project generator to great a new project with the addon included.

Set the initial value of your integrator and set the target then call udpate to move the value towards the target smoothly.

You can set the parameters DAMPING and ATTRACTION to create different effects.

Currently tested with ofVec2f, ofVec3f, float and int but most classes that can be added together and have a * operator with floats should work!
