---
cssclasses: security-map
type: master_map
tags: [security, roadmap, beginner, uvt]
---

# Security: A Nested Map for Computer Science

> Security is too large to understand as one flat list. This map works like a game world: choose a main area, enter its local map, then choose a subarea for the detailed information.

The project is organized in three levels:

1. **Main map:** choose one of five major cybersecurity areas.
2. **Area map:** choose a subarea inside that area.
3. **Subarea page:** read activities, connections, problems, people, venues, and UVT/local actions.

## Choose a Main Area

| Main area | What it covers | Enter the map |
| --- | --- | --- |
| Application & Software Security | Web, APIs, secure coding, DevSecOps, software supply chain | [[Application_Software_Security_Map]] |
| Systems & Infrastructure Security | OS, networks, cloud, containers, memory, endpoint security | [[Systems_Infrastructure_Security_Map]] |
| Cryptography | Encryption, hashing, signatures, protocols, privacy, post-quantum crypto | [[Cryptography_Map]] |
| Security Operations & Threat Intelligence | SOC, incident response, malware, forensics, threat intel | [[Security_Operations_Threat_Intelligence_Map]] |
| Governance, Risk & Human Security | Policy, risk, compliance, privacy, awareness, usable security | [[Governance_Risk_Human_Security_Map]] |

## Global Structure

```mermaid
%%{init: {"theme": "base", "themeVariables": {"background": "transparent", "primaryColor": "#101827", "primaryTextColor": "#e9fff4", "primaryBorderColor": "#39ff88", "lineColor": "#3ee7ff", "secondaryColor": "#151f33", "tertiaryColor": "#0b1020", "fontFamily": "Courier New"}}}%%
flowchart TB
    Main["Security Map"]
    App["AppSec"]
    Sys["Systems"]
    Crypto["Crypto"]
    Ops["SecOps + Intel"]
    GRC["Governance + Risk"]
    UVT["UVT Local Layer"]

    Main --> App
    Main --> Sys
    Main --> Crypto
    Main --> Ops
    Main --> GRC
    UVT --> App
    UVT --> Sys
    UVT --> Crypto
    UVT --> Ops
    UVT --> GRC

    classDef main fill:#10283a,stroke:#39ff88,color:#e9fff4,stroke-width:2px;
    classDef domain fill:#151f33,stroke:#3ee7ff,color:#e9fff4,stroke-width:2px;
    classDef local fill:#2a2414,stroke:#ffd166,color:#fff7cf,stroke-width:2px;
    class Main main;
    class App,Sys,Crypto,Ops,GRC domain;
    class UVT local;
```

## How To Use This Map

* Start with the area that matches your interest.
* Open its area map and choose one subarea.
* Read the subarea page and pick one small project or local contact.
* Use the external links for deeper reading instead of making this vault too large.
* Fill in UVT placeholders such as `[ADD PROFESSOR EMAIL]`, `[ADD COURSE NAME]`, and `[ADD LOCAL EVENT]`.

## Local Dimension

The local UVT layer is here: [[UVT_CS_Security_Landscape]]. It connects the global security areas to courses, professors, labs, project ideas, and events at the Department of Computer Science @ UVT.

## External Starting Points

* [StationX overview of cybersecurity domains](https://www.stationx.net/cyber-security-domains/) - broad domain map.
* [OWASP projects](https://owasp.org/projects/) - application security.
* [MITRE ATT&CK](https://attack.mitre.org/) - attacker behavior and operations.
* [NIST Cybersecurity Framework](https://www.nist.gov/cyberframework) - governance and risk.
* [CISA Known Exploited Vulnerabilities Catalog](https://www.cisa.gov/known-exploited-vulnerabilities-catalog) - real exploited vulnerabilities.
