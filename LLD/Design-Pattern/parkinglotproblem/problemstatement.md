🔥 LLD Problem: Parking Lot System

Design a Parking Lot System like the one used in malls or airports.

🚗 Requirements
1️⃣ The parking lot has:

Multiple floors

Each floor has multiple parking spots

2️⃣ Types of Vehicles:

Bike

Car

Truck

Each vehicle:

Has a license number

Has a vehicle type

3️⃣ Types of Parking Spots:

Bike Spot

Car Spot

Truck Spot

Rules:

Bike → can park in Bike spot

Car → can park in Car spot

Truck → can park only in Truck spot

4️⃣ System should support:

parkVehicle(Vehicle vehicle)

unparkVehicle(String ticketId)

calculateFee(Ticket ticket)

5️⃣ Fee Rules:

Bike → ₹10/hour

Car → ₹20/hour

Truck → ₹50/hour

⚠️ Constraints

System should follow Open/Closed Principle

Tomorrow new vehicle type can be added (ElectricCar, Bus)

You should not modify too much code

Use proper abstraction

Don’t hardcode everything inside one class

Design should be extensible

💡 What I Expect From You

Design:

1️⃣ Core Classes

Vehicle (abstract?)

ParkingSpot (abstract?)

Ticket

ParkingFloor

ParkingLot

Payment / FeeStrategy (maybe?)

2️⃣ Interfaces

PaymentStrategy?

FeeCalculationStrategy?

SpotAssignmentStrategy?

3️⃣ Relationships

Aggregation vs Composition?

Where to use abstract class vs interface?

🧠 Bonus (Optional but Powerful)

Add:

Different pricing strategy (WeekendPricingStrategy)

Nearest spot allocation strategy

EV charging spot

🎯 Your Task

Reply with:

Your class structure (even text format is fine)

Explain:

Why you used interface vs abstract class

How your design follows SOLID

Where polymorphism is happening

After you submit,
I will:

🔍 Critically review it

Point design flaws

[
   []
   []
   []
]