print("   __ _     _                     _                    _")
print("  / /(_)___| |_ __ _    ___ _ __ | | __ _ ______ _  __| | __ _")
print(" / / | / __| __/ _` |  / _ \ '_ \| |/ _` |_  / _` |/ _` |/ _` |")
print("/ /__| \__ \ || (_| | |  __/ | | | | (_| |/ / (_| | (_| | (_| |")
print("\____/_|___/\__\__,_|  \___|_| |_|_|\__,_/___\__,_|\__,_|\__,_|")

menu = {
    1: "Insert begin",
    2: "Insert end",
    3: "Insert position",
    4: "Delete begin",
    5: "Delete end",
    6: "Delete in position",
}

for k, v in menu.items():
    print("\t", k, '-->', v)
print("\n")


option = input("Select an option: ")