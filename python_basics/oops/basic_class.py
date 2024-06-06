class Fan:
    def __init__(self, colour, wings, cost):
        self.colour = colour
        self.wings = wings
        self.cost = cost

    def On(self):
     print("switch on the fan")
    def spin(self):
     print("fan is running")
    def off(self):
     print("switch off the fan")
f1=Fan("brown",3,1000)

f1.spin()
"""is equal to """
Fan.spin(f1)
""" this is how internally pyhton makes this function call to catch f1 parameter we use self(self refering parameter)"""