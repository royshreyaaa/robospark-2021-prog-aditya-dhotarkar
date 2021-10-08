import string
import itertools

from enigma.machine import EnigmaMachine

# given by challenge
first_message  = "FKYCEPWYRXTXDHYGUPNG"
second_message = "DPIWPOLLFEUPIKAKLQLC"
plaintext      = "THISISNOTGONNABEEASY"
plug_board     = 'AV BS CG DL FU HZ IN KM OW RX'

def new_machine(ring_config):
    return EnigmaMachine.from_key_sheet(
           rotors = 'I II III',
           reflector = 'B', 
           ring_settings = ring_config,
           plugboard_settings = plug_board)

if _name_ == '_main_':
    ring_space = itertools.product(list(range(25)), repeat=3)

    for setting in ring_space:
        start_pos = itertools.product(string.ascii_uppercase, repeat=3)
        enigma = new_machine(setting)

        # let's show that we're still running
        print("current setting: {}".format(setting)) 
        for position in start_pos:
            current_display = ''.join(position) 
            enigma.set_display(current_display)

            current_plaintext = enigma.process_text(first_message)

            if plaintext != current_plaintext:
                continue

            enigma.set_display(current_display)
            print("Flag: ", enigma.process_text(second_message)); 

            exit()