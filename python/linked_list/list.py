import node


class LinkedList:
    
    def __init__(self):
        self.head = None
        self.end = None
        self.list_size = 0
    
    def __str__(self):
        return hex(id(self.head))

    def print_simple_list(self):
        
        node = self.head
        
        if self.list_size == 0:
            print("Empty list!!")
        elif self.list_size == 1:
            print(node.value)
        else:
            while node.next != None:
                print('{} -> '.format(node.value), end='')
                node = node.next
            else:
                print(node.value)
    
    def print_detailed_list(self):
        
        node = self.head
        
        if self.list_size == 0:
            print("Empty list!!")
        elif self.list_size == 1:
            print(node.value)
        else:
            while node.next != None:
                print('current dir: {} | value: {} | next: {}\n'.format(hex(id(node)), node.value, hex(id(node.next))), end='')
                node = node.next
            else:
                print('current dir: {} | value: {} | next: {}\n'.format(hex(id(node)), node.value, node.next), end='')
    
    
    def insert_begin(self, value):
        
        node = Node(value)
        
        if self.list_size == 0:
            self.head = node
            self.end = node
        else:
            node.next = self.head
            self.head = node
            
        self.list_size += 1
        
        
    def insert_end(self, value):
        
        new_node = Node(value)
        
        self.end.next = new_node
        self.end = new_node
        new_node.next = None
        
        self.list_size += 1
        
    
    def insert_position(self, value, target_pos):
        
        new_node = Node(value)
        
        current_node = self.head
        prev_node = None
        
        current_pos = 0
        while current_pos != target_pos:
            prev_node = current_node
            current_node = current_node.next
            
            current_pos += 1
        else:
            new_node.next = current_node
            prev_node.next = new_node
            
        self.list_size += 1
        
    
    def delete_begin(self):
        
        node = self.head
        new_head = node.next
        self.head = new_head
        
    
    def delete_end(self):
        
        node = self.head
        node_prev = None
        
        while node.next != None:
            node_prev = node
            node = node.next
        else:
            self.end = node_prev
            node_prev.next = None
            node = None
        
        self.list_size -= 1

    
    def delete_in_position(self, target_pos):
              
        current_node = self.head
        prev_node = None
        
        current_pos = 0
        while current_pos != target_pos:
            prev_node = current_node
            current_node = current_node.next
            
            current_pos += 1
        else:
            prev_node.next = current_node.next
            
        self.list_size -= 1
        