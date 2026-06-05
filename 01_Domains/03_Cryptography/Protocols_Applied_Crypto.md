---
type: subarea
cssclasses: security-map
tags: [security, crypto, protocols]
---

# Protocols & Applied Crypto

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Protocol goals, attacker models, key exchange, replay resistance, secure messaging. | Analyze TLS, inspect protocol flows, test misuse cases, review implementation choices. | Choose standard protocols, avoid custom crypto, manage keys and errors safely. |

## Connections

* **Supports:** [[Web_API_Security]], [[Network_Security]], [[Mobile_Client_Security]].
* **Uses:** [[Symmetric_Crypto_Hashing]] and [[Public_Key_Crypto_PKI]].
* **Governed by:** [[Privacy_Data_Protection]].

## Important Problems

* **Replay attacks:** old valid messages are reused maliciously.
* **Downgrade attacks:** systems are tricked into weaker protocol versions.
* **Implementation mistakes:** safe algorithms are used incorrectly.
* **Open problem:** designing protocols that remain secure and understandable in real deployments.

## People

* Moxie Marlinspike - secure messaging systems.
* Hugo Krawczyk - cryptographic protocols.
* Tanja Lange - applied and post-quantum cryptography.
* Local: [[Person_Dr_Ciprian_Pungila]], [[Person_Dr_Florin_Spataru]].

## Venues

* ACM CCS
* IEEE Security & Privacy
* NDSS
* Real World Crypto
* Local: [[Venue_SYNASC]]

## UVT Project Idea

Draw a simplified TLS handshake and explain what each step protects.

## More Information

* [Real World Crypto](https://rwc.iacr.org/)
