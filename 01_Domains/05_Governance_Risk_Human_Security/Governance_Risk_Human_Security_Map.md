---
type: area_map
cssclasses: security-map
tags: [security, governance, risk, human-security, area-map]
---

# Governance, Risk & Human Security Map

Governance connects technical security to organizations, people, policies, law, privacy, and decisions about what matters most.

## Choose a Subarea

| Subarea | What it studies | Open |
| --- | --- | --- |
| Risk Management & Compliance | risk assessment, controls, standards, audits, accountability | [[Risk_Management_Compliance]] |
| Privacy & Data Protection | personal data, privacy engineering, GDPR-style obligations | [[Privacy_Data_Protection]] |
| Security Awareness & Social Engineering | phishing, training, behavior, human-centered attacks | [[Security_Awareness_Social_Engineering]] |
| Security Architecture & Program Management | strategy, policies, roadmaps, ownership, maturity | [[Security_Architecture_Program_Management]] |

```mermaid
flowchart TB
    GRC["Governance + Risk"]
    Risk["Risk + Compliance"]
    Privacy["Privacy + Data"]
    Human["Awareness + Social Eng."]
    Program["Architecture + Program"]
    App["AppSec"]
    Ops["SecOps"]

    GRC --> Risk
    GRC --> Privacy
    GRC --> Human
    GRC --> Program
    Risk --> Program
    Privacy --> App
    Human --> Ops
    Program --> App
    Program --> Ops

    classDef root fill:#10283a,stroke:#39ff88,color:#e9fff4,stroke-width:2px;
    classDef sub fill:#151f33,stroke:#3ee7ff,color:#e9fff4,stroke-width:2px;
    class GRC root;
    class Risk,Privacy,Human,Program,App,Ops sub;
```

## Local UVT Questions

* Which courses cover ethics, privacy, law, project management, software process, or organizational systems?
* Who can advise on responsible disclosure, research ethics, or privacy-sensitive projects?
* Are there university policies or local events related to privacy, security, or responsible technology?

## Fast External Links

* [NIST Cybersecurity Framework](https://www.nist.gov/cyberframework)
* [NIST Risk Management Framework](https://csrc.nist.gov/projects/risk-management)
* [SOUPS](https://www.usenix.org/conferences/byname/884)
