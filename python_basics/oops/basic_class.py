class Fan:
    def __init__(self, colour, wings, cost):
        self.colour = colour
        self.wings = wings
        self.cost = cost
        speed =1000

    def On(self):
     print("switch on the fan")
    @staticmethod
    def speed():
      print("speed is 1000")
    def spin(self):
     print("fan is running")
    def off(self):
     print("switch off the fan")
f1=Fan("brown",3,1000)

f1.spin()
#is equal to
Fan.spin(f1)
""" this is how internally pyhton makes this function call to catch f1 parameter we use self(self refering parameter)"""
''' if we dont use self for attritubes the lifespan will be restricted within hust that method!!'''
f1.speed()