# VisitorPattern
Visitor Pattern example of calculating area of shape and cubing its dimensions

<img width="988" alt="Screenshot 2022-12-15 at 5 30 51 PM" src="https://user-images.githubusercontent.com/31230953/207981068-5d529883-2af3-4a85-8407-171d3c39a0b7.png">



  * In fact, `Shape`'s method `accept()` doesn't need to be pure virtual because Circle and Square use the exact same function
  * Instead, we can the destructor pure virtual so that the class is Abstract
