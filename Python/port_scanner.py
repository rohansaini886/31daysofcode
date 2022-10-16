# Made a port Scanner using python sockets and threading for local ip address(127.0.0.1).


import socket 
import threading
from queue import Queue

target = '127.0.0.1'
queue = Queue()
open_ports =[]

def port_scanner(port):
    try:
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sock.connect((target,port))
        return True
    except:
        return False

def fill_queue(port_list):
    for port in port_list:
        queue.put(port)
        
def worker():
    while not queue.empty():
        port = queue.get()
        if port_scanner(port):
            print('Port {} is open'.format(port))
            open_ports.append(port)

port_list  = range(1,1024)
fill_queue(port_list)

thread_list = []

for t in range(1024):
    thread = threading.Thread(target=worker)
    thread_list.append(thread)
    
for thread in thread_list:
    thread.start()
    
for thread in thread_list:
    thread.join()
    
print('Open ports are: ', open_ports)
