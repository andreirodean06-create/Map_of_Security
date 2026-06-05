---
type: subarea
cssclasses: security-map
tags: [security, crypto, post-quantum, privacy]
---

# Post-Quantum & Privacy Crypto

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Lattices, zero-knowledge, private computation, long-term confidentiality. | Compare key sizes, read migration guidance, test privacy-preserving demos. | Plan crypto migration, protect long-lived data, apply privacy-enhancing tools carefully. |

## Connections

* **Influences:** [[Public_Key_Crypto_PKI]] and [[Protocols_Applied_Crypto]].
* **Supports:** [[Privacy_Data_Protection]].
* **Depends on:** governance decisions about long-term data sensitivity.

## Important Problems

* **Harvest now, decrypt later:** attackers store encrypted data today for future quantum decryption.
* **Large signatures/keys:** new algorithms can be harder to deploy in constrained systems.
* **Privacy vs accountability:** privacy tools can conflict with auditing or abuse prevention.
* **Open problem:** practical migration to post-quantum systems. See [[Problem_Post_Quantum_Migration]].

## People

* Shafi Goldwasser - zero-knowledge and theoretical cryptography.
* Tanja Lange - post-quantum cryptography.
* Oded Regev - lattice-based cryptography.
* Local: [[Person_Dr_Ciprian_Pungila]].

## Venues

* CRYPTO
* EUROCRYPT
* ASIACRYPT
* Privacy Enhancing Technologies Symposium
* Local: [[Venue_SYNASC]]

## UVT Project Idea

Write a short migration plan for a student web app: where crypto is used, what data must remain secret, and what would need updating.

## More Information

* [NIST Post-Quantum Cryptography](https://csrc.nist.gov/projects/post-quantum-cryptography)
