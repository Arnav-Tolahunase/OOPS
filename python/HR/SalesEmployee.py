from Employee import Employee

class SalesEmployee(Employee):

    def __init__(self, id, firstName, lastName, email, contactNumber, location, birthDate,
                 incentive, target, achievedTarget, basicSalary, hra):

        super().__init__(id, firstName, lastName, email, contactNumber, location, birthDate)

        self.incentive = incentive
        self.target = target
        self.achievedTarget = achievedTarget
        self.basicSalary = basicSalary
        self.hra = hra

    def doWork(self):
        print(f"{self.firstName} {self.lastName} is working on sales targets.")

    def computePay(self):
        totalPay = self.basicSalary + self.hra
        if self.achievedTarget >= self.target:
            totalPay += self.incentive
        return totalPay
