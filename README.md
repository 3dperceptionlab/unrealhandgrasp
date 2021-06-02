# UnrealHandGrasp

[![Watch the video](Cover.png)](https://youtu.be/IXkU7_WnBMU)

## Description   

In this project we have developed an object grasping system in Unreal Engine 4. For the creation of this system, we have started from a base project named UnrealGrasp that has been modified to use the hand detection framework offered by Oculus and to be able to interact with the objects in the virtual environment only with our own hands.The work consisted in the implementation of an algorithm that decides when to move and lock the fingers of our virtual hand, as well as when we are grasping an object and when it has been released. Once this was done, it can be used to interact in an environment withmany objects. Different people have been asked to grasp different objects as they spawn in the environment. These objects appear sequentially and in different orientations to encourage differenttypes of grasping. This information has been collected in the format of a heat map, creat-ing a dataset of 12 objects that can be used in different fields, such as training an artificial intelligence system or making a more exhaustive study on grasping. Finally, an environment has been created in which the user can move and interact with objects of all kinds: toys, technical tools, laboratory utensils or foodstuffs, among others. This is intended to demonstrate the wide range of applications of this new technology.

## How to use  

First, install Unreal Engine 4, version 2.25 or upper.

```bash
# clone project   
git clone https://github.com/3dperceptionlab/unrealhandgrasp.git
```
The Environment map consists of a demo that uses this grasping system. In the Minimal default map you can grab objects and generate the dataset.

## Author

This project has been carried out as an end-of-degree project by:
- David Mulero Pérez ([davidmuleroperez@gmail.com](mailto:davidmuleroperez@gmail.com))
