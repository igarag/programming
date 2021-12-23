"""
Exercise 2: Dive!
"""

from typing import List, Tuple, Literal
from enum import Enum
from dataclasses import dataclass


class AvailableOrders(Enum):
    FORWARD = "forward"
    DOWN = "down"
    UP = "up"
    
    @classmethod
    def has_value(cls, value):
        return value in cls._value2member_map_ 


@dataclass
class Command:
    order: str
    value: int


def read_input(file_name) -> List[Command]:
    """
       0      1
    (order, value)
    """
    data: List[Tuple] = []

    with open(file_name) as file:
        for item in file:
            order = item.replace("\n", "").split(" ")
            if AvailableOrders.has_value(order[0]):
                data.append(Command(order[0], int(order[1])))

    return data


def compute_data(data: List) -> None:
    """
    Input data has two values: (order: str, value: int)
    Depth_counter > 0 = up
    Depth_counter < 0 = down
    """
    forward_counter: int = 0
    depth_counter: int = 0
    
    for command_input in data:
        print(command_input)
        if command_input.order == AvailableOrders.FORWARD.value:
            forward_counter += command_input.value
        elif command_input.order == AvailableOrders.UP.value:
            depth_counter += command_input.value
        elif command_input.order == AvailableOrders.DOWN.value:
            depth_counter -= command_input.value

    print(f"Horizontal: {forward_counter}")
    print(f"Depth: {depth_counter}")
    print(f"Final result: {forward_counter * abs(depth_counter)}")


def compute_data_hard(data: List) -> None:

    """
    Input data has two values: (order: str, value: int)
    Depth_counter > 0 = up
    Depth_counter < 0 = down
    """
    forward_counter: int = 0
    depth_counter: int = 0
    aim_counter: int = 0
    
    for command_input in data:
        print(command_input)
        # breakpoint()
        if command_input.order == AvailableOrders.FORWARD.value:
            forward_counter += command_input.value
            depth_counter += aim_counter * command_input.value
        elif command_input.order == AvailableOrders.UP.value:
            aim_counter -= command_input.value
        elif command_input.order == AvailableOrders.DOWN.value:
            aim_counter += command_input.value

    print(f"Horizontal: {forward_counter}")
    print(f"Depth: {depth_counter}")
    print(f"Aim: {aim_counter}")
    print(f"Final result: {forward_counter * abs(depth_counter)}")


def main():
    
    data = read_input("02.txt")

    # Part A
    compute_data(data)

    # Part B
    compute_data_hard(data)


if __name__ == "__main__":
    main()

