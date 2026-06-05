---
type: subarea
cssclasses: security-map
tags: [security, crypto, pki]
---

# Public-Key Crypto & PKI

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| RSA, ECC, signatures, certificates, certificate authorities, trust chains. | Inspect HTTPS certificates, verify signatures, test certificate warnings. | Use TLS correctly, rotate certificates, verify signatures, protect private keys. |

## Connections

* **Supports:** [[Network_Security]], [[Cloud_Container_Security]], [[DevSecOps_Supply_Chain_Security]].
* **Depends on:** [[Risk_Management_Compliance]] for certificate/key policies.
* **Influences:** [[Post_Quantum_Privacy_Crypto]] because migration affects PKI.

## Important Problems

* **Private key exposure:** anyone with the key can impersonate the owner.
* **Broken certificate validation:** the app accepts a fake server.
* **Certificate authority trust:** many systems depend on third parties behaving correctly.
* **Open problem:** migrating PKI to post-quantum-safe choices. See [[Problem_Post_Quantum_Migration]].

## People

* Whitfield Diffie - public-key cryptography pioneer.
* Adi Shamir - RSA co-inventor.
* Taher Elgamal - public-key crypto and SSL contributions.
* Local: [[Person_Dumitru_Penteliuc]]].

## Venues

* CRYPTO
* EUROCRYPT
* ACM CCS
* IEEE Security & Privacy
* Local: [[Venue_SYNASC]]

## UVT Project Idea

Create a certificate inspection note: open three HTTPS sites, inspect certificate fields, and explain the trust chain.

## More Information

* [Let’s Encrypt documentation](https://letsencrypt.org/docs/)
