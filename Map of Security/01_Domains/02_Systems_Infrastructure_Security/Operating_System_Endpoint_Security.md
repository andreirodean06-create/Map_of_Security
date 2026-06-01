---
type: subarea
cssclasses: security-map
tags: [security, systems, endpoint]
---

# Operating System & Endpoint Security

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Permissions, processes, isolation, patching, persistence, logging. | Harden a VM, inspect services, review logs, test least privilege. | Secure baselines, endpoint protection, update policies, backups, monitoring. |

## Connections

* **Supports:** [[Web_API_Security]] and [[SOC_Monitoring_Detection]].
* **Depends on:** [[Public_Key_Crypto_PKI]] for SSH, certificates, and signed updates.
* **Governed by:** [[Risk_Management_Compliance]].

## Important Problems

* **Privilege escalation:** a normal user becomes admin/root.
* **Persistence:** malware survives reboot or user logout.
* **Patch gaps:** old vulnerabilities remain exploitable.
* **Open problem:** protecting many endpoint types without making administration impossible.

## People

* Joanna Rutkowska - OS isolation and platform security.
* Mark Russinovich - Windows internals education.
* Dawn Song - systems security and binary analysis.
* Local: [[Person_Dr_Ciprian_Pungila]], [ADD OPERATING SYSTEMS PROFESSOR].

## Venues

* USENIX Security
* IEEE Security & Privacy
* Black Hat / DEF CON
* ACM CCS
* Local: [[Venue_SYNASC]]

## UVT Project Idea

Create a hardened Linux VM baseline: users, SSH, firewall, updates, logs, and backup plan.

## More Information

* [CIS Benchmarks](https://www.cisecurity.org/cis-benchmarks)
