from list import LinkedList

print(" _     _       _            _   _     _     _   ")
print("| |   (_)     | |          | | | |   (_)   | |  ")
print("| |    _ _ __ | | _____  __| | | |    _ ___| |_ ")
print("| |   | | '_ \| |/ / _ \/ _` | | |   | / __| __|")
print("| |___| | | | |   <  __/ (_| | | |___| \__ \ |_ ")
print("\_____/_|_| |_|_|\_\___|\__,_| \_____/_|___/\__|")

menu = """
    ╔═══ MENU ════════════════════════╗
    ║    1: Insert begin              ║
    ║    2: Insert end                ║
    ║    3: Insert position           ║
    ║    4: Delete begin              ║
    ║    5: Delete end                ║
    ║    6: Delete in position        ║
    ║    7: Insert random values      ║
    ║    0: Exit                      ║
    ╚═════════════════════════════════╝
"""

llist = LinkedList()

if __name__ == "__main__":

    while True:
        print(menu)
        
        option = int(input("Select an option: "))

        if option == 0:
            break

        elif option == 1:
            value = int(input("Type a value to insert at the beginning: "))
            llist.insert_begin(value)

        elif option == 2:
            value = int(input("Type a value to insert at the end: "))
            llist.insert_end(value)

        elif option == 3:
            value = int(input("Type a value to insert: "))
            pos = int(input("Type a position into the list: "))
            print("\nCurrent list:\n")
            llist.print_simple_list()
            llist.insert_position(value, pos)

        elif option == 4:
            llist.delete_begin()

        elif option == 5:
            llist.delete_end()

        elif option == 6:
            pos = int(input("Type a position to delete in the list: "))
            llist.delete_in_position(pos)

        elif option == 7:
            values = int(input("Type a number of values to insert randomly: "))
            llist.insert_random_values(values)

        print("\n\n-- State of the list ---------------------\n")
        llist.print_simple_list()

print("End of the program")
