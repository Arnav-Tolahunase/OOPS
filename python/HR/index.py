from SalesEmployee import SalesEmployee
from SalesManager import SalesManager

def index():
    emp1 = SalesEmployee(
        1, "Rahul", "Sharma", "rahulsharma@example.com",
        "9545611780", "Mumbai", "1990-05-15",
        5000, 100000, 120000, 40000, 15000
    )

    emp2=SalesManager(
        2, "Rakesh", "Verma", "rakeshverma@example.com",
        "7030799646", "Pune", "1995-02-21",
        8000, 100000, 120000, 70000, 15000, 10000
    )
    
    emp1.doWork()
    print("Total Pay:", emp1.computePay())
    
    emp2.doWork()
    print("Total Pay:", emp2.computePay())
    
    

if __name__ == "__main__":
    index()
