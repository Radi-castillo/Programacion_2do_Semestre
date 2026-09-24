#Controladores industriales
class Controlador:
    def __init__(self, nombre : str, setpoint : float):
        if not nombre.strip():
            raise ValueError("El nombre está vacio. Por favor ingresar un nombre válido")
        
        self.__nombre = nombre
        self._setpoint = setpoint

    def controlar(self):
        return "El controlador ajusta el sistema"

    @property
    def nombre(self):
        return self.__nombre

    @nombre.setter
    def nombre(self, nuevo_nombre):
        self.__nombre = nuevo_nombre

class ControladorPID(Controlador):
    def __init__(self, nombre, setpoint):
        super().__init__(nombre, setpoint)

    def controlar(self):
        return "Aplicando control PID"

class ControladorOnOff(Controlador):
    def __init__(self, nombre, setpoint):
        super().__init__(nombre, setpoint)

    def controlar(self):
        return "Aplicando control On/Off"  

#Zona de pruebas

#Prueba con la clase padre Controlador
miControlador1 = Controlador("Sistema de control", 10)  
print(miControlador1.nombre) 
print(miControlador1.controlar())
miControlador1.nombre = "Sistema de descontrol" 
print(miControlador1.nombre)
print("\n")

#Prueba con la clase padre ControladorPID
miControlador2 = Controlador("", 20)  
print(miControlador2.nombre) 
print(miControlador2.controlar())
miControlador2.nombre = "Balance" 
print(miControlador2.nombre)
print("\n")

#Prueba con la clase padre ControladorOnOff
miControlador3 = Controlador("Activa", 30)  
print(miControlador3.nombre) 
print(miControlador3.controlar())
miControlador3.nombre = "Detiene" 
print(miControlador3.nombre)
print("\n")



    
