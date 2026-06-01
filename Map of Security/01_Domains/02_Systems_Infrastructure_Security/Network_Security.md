---
type: subarea
cssclasses: security-map
tags: [security, network]
---

# Network Security

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| TCP/IP, DNS, routing, segmentation, trust zones, network attack paths. | Capture packets, scan lab networks, inspect firewall rules, map exposed services. | Network segmentation, VPNs, firewall policy, DNS security, monitoring. |

## Connections

* **Supports:** [[SOC_Monitoring_Detection]] with telemetry.
* **Depends on:** [[Protocols_Applied_Crypto]] for TLS, VPNs, and secure channels.
* **Influences:** [[Cloud_Container_Security]].

## Important Problems

* **Flat networks:** one compromised machine can reach everything.
* **Exposed services:** admin panels or databases are reachable from the internet.
* **DNS abuse:** attackers use domains for phishing, command-and-control, or exfiltration.
* **Open problem:** visibility into encrypted traffic without breaking privacy.

## People

* Vern Paxson - network measurement and intrusion detection.
* Stefan Savage - network security and cybercrime measurement.
* Paul Vixie - DNS operations and security.
* Local: [ADD NETWORKS PROFESSOR].

## Venues

* NDSS
* USENIX Security
* ACM IMC
* IEEE Security & Privacy
* Local: [ADD NETWORKING EVENT]

## UVT Project Idea

Build a small lab network with two services, scan it, write firewall rules, and document what changed.

## More Information

* [Wireshark documentation](https://www.wireshark.org/docs/)
* [MITRE ATT&CK Network techniques](https://attack.mitre.org/)
