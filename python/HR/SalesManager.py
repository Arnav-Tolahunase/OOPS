from SalesEmployee import SalesEmployee

class SalesManager(SalesEmployee):
    
    def __init__(self, id, firstName, lastName, email, contactNumber, location, birthDate,
                 incentive, target, achievedTarget, basicSalary, hra,
                 bonus):
        
        super().__init__(id, firstName, lastName, email, contactNumber, location, birthDate,
                         incentive, target, achievedTarget, basicSalary, hra)
        
        self.bonus = bonus
        
        
    def doWork(self):
        print(f"{self.firstName} {self.lastName} is managing the sales team and working on high-level sales strategies.")
        
    def computePay(self):
        totalPay = super().computePay()
        totalPay += self.bonus
        return totalPay