import math

minFood = 1.0

def main():
    numberOfCases = int(input())

    for case in range(numberOfCases):
        foodAmount = float(input())
        daysUntilDeath = 0
        while foodAmount > minFood:
            foodAmount = foodAmount / 2
            daysUntilDeath += 1
        
        print(daysUntilDeath, "dias")

if __name__ == "__main__":
    main()