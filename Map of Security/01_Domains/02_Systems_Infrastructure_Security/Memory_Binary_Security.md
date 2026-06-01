---
type: subarea
cssclasses: security-map
tags: [security, binary, memory]
---

# Memory & Binary Security

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Stack/heap, memory safety, exploitation, reverse engineering, mitigations. | Debug binaries, reproduce lab overflows, inspect compiler protections. | Use memory-safe languages, compiler hardening, sandboxing, fuzzing. |

## Connections

* **Supports:** [[Operating_System_Endpoint_Security]].
* **Influences:** [[Secure_Software_Engineering]].
* **Detected by:** [[Malware_Analysis]] and [[Incident_Response_Forensics]].

## Important Problems

* **Buffer overflow:** input writes past its intended memory area.
* **Use-after-free:** a program uses memory after it has been released.
* **ROP chains:** attackers reuse existing code to bypass protections.
* **Open problem:** removing memory-unsafe legacy code without breaking critical systems. See [[Problem_Memory_Safety_Mitigations]].

## People

* Hovav Shacham - return-oriented programming research.
* Dawn Song - binary analysis and systems security.
* Halvar Flake - reverse engineering and binary analysis.
* Local: [[Person_Dr_Ciprian_Pungila]], [ADD SYSTEMS PROGRAMMING PROFESSOR].

## Venues

* USENIX Security
* IEEE Security & Privacy
* REcon
* Black Hat / DEF CON
* Local: [[Venue_SYNASC]]

## UVT Project Idea

Compile a small C program with and without hardening flags, then explain what protections changed.

## More Information

* [Memory safety overview by CISA](https://www.cisa.gov/resources-tools/resources/secure-by-design)
