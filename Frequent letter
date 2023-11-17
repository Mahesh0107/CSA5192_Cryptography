def mod_inverse(a, m):
    for x in range(1, m):
        if (a * x) % m == 1:
            return x
    return -1  # No mod inverse exists

def decrypt_affine(ciphertext, a, b):
    a_inverse = mod_inverse(a, 26)
    if a_inverse == -1:
        print("Invalid value of 'a' (no modular inverse).")
        return

    decrypted_text = ""
    
    for c in ciphertext:
        if c.isupper():
            decrypted = (a_inverse * ((ord(c) - ord('A') - b + 26) % 26)) % 26
            decrypted_text += chr(decrypted + ord('A'))
        elif c.islower():
            decrypted = (a_inverse * ((ord(c) - ord('a') - b + 26) % 26)) % 26
            decrypted_text += chr(decrypted + ord('a'))
        else:
            decrypted_text += c
    
    print("Decryption with a={} and b={}: {}".format(a, b, decrypted_text))

ciphertext = "Your ciphertext here"
most_common = ord('B') - ord('A')  # Position of 'B' in the alphabet
second_common = ord('U') - ord('A')  # Position of 'U' in the alphabet

for a in range(1, 26):
    a_inverse = mod_inverse(a, 26)
    if a_inverse == -1:
        continue
    for b in range(26):
        if (a * most_common + b) % 26 == second_common:
            decrypt_affine(ciphertext, a, b)
