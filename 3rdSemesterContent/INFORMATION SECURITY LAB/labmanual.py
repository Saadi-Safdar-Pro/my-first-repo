plaintext = input("Enter Plaintext: ")
if plaintext != plaintext.isupper():
    print("Enter Again!")
elif plaintext == " ":
    print("Enter Again!")
elif plaintext == ",":
        print("Enter Again!")
else:
    plaintext += 1

key = input("Enter Vowel Alphabet key: ")
if key == 'A' | 'E' | 'I' | 'O' | 'U':
    key += 1
else:
    print("Enter Vowel Character!")



def CS_Encrypt(plaintext, key):
    
    if plaintext == 'E':
        'E' == 'Q'
        for ch in plaintext:
        shift = chr((ord(ch) - 65 % 3)  + 65)
        plaintext = shift + 3



        

def CS_Decrypt(ciphertext, key):

 if plaintext == 'Q':
        'Q' == 'E'
        for ch in plaintext:
        shift = chr((ord(ch) - 65 % 3)  + 65)
        plaintext = shift + 3
        




encrypted = CS_Encrypt(plaintext, key)
decrypted = CS_Decrypt(ciphertext, key)

print("Encrypted:", encrypted)
print("Decrypted:", decrypted)























