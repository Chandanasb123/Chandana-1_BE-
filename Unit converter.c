def convert_units():
    print("Unit Conversion Program")
    print("------------------------")
    print("1. Meters to Kilometers")
    print("2. Kilometers to Meters")
    print("3. Grams to Kilograms")
    print("4. Kilograms to Grams")
    print("5. Exit")

    while True:
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            meters = float(input("Enter the value in meters: "))
            kilometers = meters / 1000
            print(f"{meters} meters is equal to {kilometers} kilometers.\n")
        elif choice == '2':
            kilometers = float(input("Enter the value in kilometers: "))
            meters = kilometers * 1000
            print(f"{kilometers} kilometers is equal to {meters} meters.\n")
        elif choice == '3':
            grams = float(input("Enter the value in grams: "))
            kilograms = grams / 1000
            print(f"{grams} grams is equal to {kilograms} kilograms.\n")
        elif choice == '4':
            kilograms = float(input("Enter the value in kilograms: "))
            grams = kilograms * 1000
            print(f"{kilograms} kilograms is equal to {grams} grams.\n")
        elif choice == '5':
            print("Exiting the program. Goodbye!")
            break
        else:
            print("Invalid choice! Please select a valid option (1-5).\n")

# Run the program
convert_units()
