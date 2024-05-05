from os import urandom

''' GeistShifter Rotor Generator '''
''' by Karl Zander '''

def gen_rotor():
    rotor = []
    while len(rotor) != 26:
        x = ord(urandom(1))
        if (x >= 0) and (x <= 25) and (x not in rotor):
            rotor.append(x)
    return rotor

def gen_ctl_rotor():
    rotor = []
    while len(rotor) != 52:
        x = ord(urandom(1))
        if (x >= 0) and (x <= 51) and (x not in rotor):
            rotor.append(x)
    return rotor

def gen_rotors():
    rotors = []
    for x in range(52):
        rotor = gen_rotor()
        rotors.append(rotor)
    return rotors

ctl_rotor = gen_ctl_rotor()
print(ctl_rotor)
rotors = gen_rotors()
print(rotors)
