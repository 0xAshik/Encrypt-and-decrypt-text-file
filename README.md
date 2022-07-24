# Encrypt-and-decrypt-text-file
Encryption in cryptography is a process by which a plain text or a piece of information is converted into ciphertext or a text which can only be decoded by the receiver for whom the information was intended. The algorithm that is used for the process of encryption is known as a cipher. It helps protect consumer information, emails, and other sensitive data from unauthorized access to it and secures communication networks. Presently there are many options to choose from and find the most secure algorithm which meets our requirements.

Decryption: Decryption is the process of converting a meaningless message (Ciphertext) into its original form (Plaintext). It works by applying the conversion algorithm opposite of the one that is used to encrypt the data. The same key is required to decrypt the information back to its normal form.

Types of Cryptography: There are two types of cryptography:

Symmetric Cryptography: It is an encryption system where the sender and receiver of a message use a single common key to encrypt and decrypt messages. Symmetric Key Systems are faster and simpler, but the sender and receiver have to somehow exchange keys securely. The most popular symmetric-key cryptography system is Data Encryption System(DES).
Asymmetric Cryptography: Under this system, a pair of keys is used to encrypt and decrypt information. A public key is used for encryption and a private key is used for decryption. The public key and the private key are different. Even if the public key is known by everyone, the intended receiver can only decode it because he alone knows the private key.
In this article, symmetric cryptography is used to encrypt and decrypt data.

Approach: Let’s discuss the approach in detail before proceeding to the implementation part:

A class encdec is defined with two member functions: encrypt() and decrypt(). The name of the file to be encrypted is the member variable of the class.
encrypt() function is used to handle the encryption of the input file. The file handling code is included in the encrypt() function to read the file and write to the file. A new encrypted file called encrypt.txt  is generated with all the encrypted data in it. The encrypted file is encrypted using a key that is being inputted by the user.
decrypt() function is used to read the encrypted file and decrypt the data and generate a new file decrypt.txt. To decrypt a file, a key is requested from the user. If the correct key is entered, then the file is successfully decrypted.
The input stream fin is used to read from the file and the output stream fout is used to write to the file.
Below is the implementation of the above approach:
