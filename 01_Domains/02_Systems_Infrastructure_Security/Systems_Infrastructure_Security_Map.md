---
type: area_map
cssclasses: security-map
tags: [security, systems, infrastructure, area-map]
---

# Systems & Infrastructure Security Map

Systems security protects the platforms that software depends on: operating systems, networks, cloud, containers, identity systems, endpoints, and low-level memory behavior.

## Choose a Subarea

| Subarea | What it studies | Open |
| --- | --- | --- |
| Operating System & Endpoint Security | users, permissions, processes, logs, hardening | [[Operating_System_Endpoint_Security]] |
| Network Security | segmentation, firewalls, DNS, routing, wireless, VPNs | [[Network_Security]] |
| Cloud & Container Security | cloud IAM, storage, Kubernetes, Docker, secrets | [[Cloud_Container_Security]] |
| Memory & Binary Security | memory corruption, exploitation, reverse engineering, mitigations | [[Memory_Binary_Security]] |

```mermaid
flowchart TB
    Sys["Systems"]
    OS["OS + Endpoint"]
    Net["Network"]
    Cloud["Cloud + Containers"]
    Mem["Memory + Binary"]
    App["AppSec"]
    Ops["SecOps"]

    Sys --> OS
    Sys --> Net
    Sys --> Cloud
    Sys --> Mem
    OS --> Ops
    Net --> Ops
    Cloud --> App
    Mem --> App

    classDef root fill:#10283a,stroke:#39ff88,color:#e9fff4,stroke-width:2px;
    classDef sub fill:#151f33,stroke:#3ee7ff,color:#e9fff4,stroke-width:2px;
    class Sys root;
    class OS,Net,Cloud,Mem,App,Ops sub;
```

## Local UVT Questions

* Which courses cover operating systems, networks, distributed systems, cloud, or low-level programming?
* Who supervises Linux, networking, cloud, or performance/security projects?
* Can a student do a lab project around hardening, logs, or secure infrastructure?

## Fast External Links

* [CIS Controls](https://www.cisecurity.org/controls)
* [CISA Known Exploited Vulnerabilities Catalog](https://www.cisa.gov/known-exploited-vulnerabilities-catalog)
* [MITRE ATT&CK Enterprise Matrix](https://attack.mitre.org/matrices/enterprise/)
