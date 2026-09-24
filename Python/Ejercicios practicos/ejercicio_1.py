class Vehiculo:     
    def __init__(self, marca):
        self.marca = marca 

    def arrancar(self):         
        print("El vehículo arranca") 


class Coche(Vehiculo):     
    def __init__(self, marca, num_puertas):         
        super().__init__(marca)         
        self.num_puertas = num_puertas  
        
    
    
coche = Coche("Toyota", 4) 
print(f"Marca: {coche.marca}, Puertas: {coche.num_puertas}") 
coche.arrancar() 