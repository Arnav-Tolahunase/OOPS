from abc import ABC, abstractmethod

class Employee(ABC):

    def __init__(self, id, firstName, lastName, email, contactNumber, location, birthDate):
        self.id = id
        self.firstName = firstName
        self.lastName = lastName
        self.email = email
        self.contactNumber = contactNumber
        self.location = location
        self.birthDate = birthDate

    @abstractmethod
    def doWork(self):
        pass

    @abstractmethod
    def computePay(self):
        pass

    def __str__(self):
        return f"Employee[ID={self.id}, Name={self.firstName} {self.lastName}, Email={self.email}, Contact={self.contactNumber}, Location={self.location}, BirthDate={self.birthDate}]"
