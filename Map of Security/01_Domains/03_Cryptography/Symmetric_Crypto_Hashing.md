---
type: subarea
cssclasses: security-map
tags: [security, crypto, hashing]
---

# Symmetric Crypto & Hashing

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Hash functions, MACs, symmetric encryption, password hashing, randomness. | Compare hashes, test password hashing libraries, inspect random tokens. | Use safe libraries, authenticated encryption, salts, slow password hashing. |

## Connections

* **Supports:** [[Web_API_Security]] through password storage and tokens.
* **Supports:** [[Malware_Analysis]] through file hashes.
* **Depends on:** good randomness and key management from [[Protocols_Applied_Crypto]].

## Important Problems

* **Fast password hashes:** attackers can guess many passwords quickly.
* **Unauthenticated encryption:** data is encrypted but tampering is not detected.
* **Weak randomness:** tokens or keys become guessable.
* **Open problem:** making safe crypto choices easy for non-experts.

## People

* Joan Daemen and Vincent Rijmen - AES designers.
* Phillip Rogaway - authenticated encryption and cryptographic practice.
* Dan Boneh - applied cryptography education.
* Local: [ADD CRYPTO / MATH PROFESSOR].

## Venues

* CRYPTO
* EUROCRYPT
* ASIACRYPT
* Journal of Cryptology
* Local: [[Venue_SYNASC]]

## UVT Project Idea

Build a demo that stores passwords with a password-hashing library and explains why plain hashes are not enough.

## More Information

* [Crypto 101](https://www.crypto101.io/)
