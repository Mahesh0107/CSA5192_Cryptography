from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives import hashes
from cryptography.hazmat.primitives.asymmetric import dsa

def generate_dsa_keypair():
    private_key = dsa.generate_private_key(key_size=2048, backend=default_backend())
    return private_key, private_key.public_key()

def sign_message(private_key, message):
    # The sign method will directly take the message and return its signature
    return private_key.sign(message, hashes.SHA256())

def verify_signature(public_key, message, signature):
    try:
        # The verify method directly checks the provided signature against the message
        public_key.verify(signature, message, hashes.SHA256())
        return True
    except:
        return False

def main():
    message = b"This is a message that needs to be signed."
    
    private_key, public_key = generate_dsa_keypair()
    signature = sign_message(private_key, message)
    
    print("Original Message:", message)
    print("Signature:", signature.hex())
    
    valid = verify_signature(public_key, message, signature)
    if valid:
        print("Signature is valid.")
    else:
        print("Signature is NOT valid.")

if __name__ == "__main__":
    main()
