#Drones de automatización
class Dron:
    def __init__(self, id: str =  "", bateria = 100):

        self.volando = False
        self.__id = id
        self._batería = bateria

    def volar(self, *args, **Kwargs):
        return "El dron está volando"

    @property
    def id(self):
        if not self.__id.strip():
            return "El id está vacio. Por favor Crear un id"
        else:
            return self.__id

    @id.setter  
    def id(self, nuevo_id):
        if not nuevo_id.strip():
            print("El id que ingresaste no es valido ya que está vacio")
        else: self.__id = nuevo_id


class DronVigilancia(Dron):
    def __init__(self, id, bateria=100):
        super().__init__(id, bateria)

    def volar(self, *args, **Kwargs):
        return "Dron de vigilancia sobrevolando perímetro"
    

class DronReparto(Dron):
    def __init__(self, id, bateria=100):
        super().__init__(id, bateria)

    def volar(self, *args, **Kwargs):
        return "Dron de reparto entregando paquete"

    
#Pruebas

#Pruebas con la clase padre Dron
miDron1 = Dron("El prototipo")  
print(miDron1.id) 
print(miDron1.volar())
miDron1.id = "RadimirCast" 
print(miDron1.id)
print("\n")

#Pruebas con la clase hija Dron
miDron2 = DronVigilancia("El vigilante")
print(miDron2.id) 
print(miDron2.volar())
miDron2.id = "RadimirCast" 
print(miDron2.id)
print("\n")

#Pruebas con la clase hija DronReparto
miDron3 = DronReparto("El repartidor") 
print(miDron3.id) 
print(miDron3.volar())
miDron3.id = "RadimirCast" 
print(miDron3.id)


        