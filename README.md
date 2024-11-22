This is my take on Arkanoid in SFML C++ without any tutorial.
I've made a lot of mistakes, for example trying to make this code like an actual game engine with Staticbody and Kineticbody which is utterly pointless,
another thing is that not everything need to be private and if I feel like making something private i can actually break the functionallity down to more functions so that the code don't look like mess.
For example:
```C++
  this->object.getPosition().x;  /// could transform into

  float X(){
    return this->object.getPosition().x;
  }

  /// and then it will look like:

  this->object.X();  /// and that is elegant and 1000x more readable
```
I will come back to this repo and implement brick collision as I did with the same project but with tutorial that guided me through this exact part.
