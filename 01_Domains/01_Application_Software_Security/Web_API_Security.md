---
type: subarea
cssclasses: security-map
tags:
  - security
  - appsec
  - web
  - api
---
---
type: domain
tags: [security, appsec, web, api]
---
# Web & API Security

> The analysis, hardening, and defense of application-layer interfaces, network protocols, data-transit boundaries, and business logic.

---

## 1. Core Activities

| Dimension | Focus Areas | Action Items |
| :--- | :--- | :--- |
| **Theory** | Authentication, authorization, session states, cryptographic trust boundaries, formal input validation rules. | Defining logic states, modeling attack surfaces. |
| **Experiment** | Intercepting/modifying traffic, spinning up specialized test labs, checking access tokens, fuzzing parameters. | Proxying requests, payload injection testing. |
| **Design** | Strict secure routing, granular role-based checks, salted password hashing, rate limits, centralized audit logs. | Writing robust defensive middleware. |

---

## 2. Structural Connections

* **Depends On:** `[[Public_Key_Crypto_PKI]]`, `[[Operating_System_Endpoint_Security]]`
* **Influences:** `[[SOC_Monitoring_Detection]]` — Feeding structural system execution telemetry through centralized application logs and security alerts.
* **Governed By:** `[[Privacy_Data_Protection]]` — Regulatory frameworks dictating how personal data must be treated when apps process user variables.

---

## 3. Core Problems & Engineering Hurdles

### Important Production Vulnerabilities
* **Broken Access Control:** Horizontal/Vertical escalation issues (e.g., changing parameter IDs from `/user/12` to `/user/13` exposing un-hashed peer profiles).
* **Injection Vulnerabilities:** Context breaks where un-sanitized client input strings escape execution structures to become operational SQL queries, shell commands, or active template code.
* **API Abuse:** Flaws where an adversary consumes valid endpoints out of order, or forces structural stress via unexpected transaction sequences.

### Open Research Frontier
> [!bug] Open Problem: Automated Discovery of Complex Business-Logic Flaws
> *Context:* While syntax parsers and fuzzers easily catch memory leaks or simple injection strings, they cannot automatically comprehend human intent or multi-step logic workflows.
> *Deep Dive:* See [[Problem_Microservice_Logic_Flaws]].

---

## 4. Directory (Global Specialists & Local Faculty)

### Global Figures
* **Tavis Ormandy:** Elite vulnerability researcher at Google Project Zero, focusing on core software binary analysis.
* **Orange Tsai:** Renowned web security researcher famed for discovering complex server-side vulnerabilities and infrastructure logic exploits.
* **Tanya Janca:** Prominent AppSec community educator, software security evangelist, and architect of secure development.

### Local UVT Faculty Alignment
* **[[Person_Cristian_Cira]]:** Institutional anchor managing the competitive security ecosystem, organizing CTF initiatives, and overseeing low-level/blockchain boundaries.
* **[[Person_Paul_Valase]]:** UVT-CTF team lead with practical expertise in offensive web exploitation, penetration testing, and web app auditing.

---

## 5. Research & Competition Venues

### Tier-1 Global Events
* **OWASP Global AppSec:** The definitive software security conference for structural application posture.
* **NDSS / USENIX Security:** Academic benchmarks tracking the state of the art in distributed network defenses.
* **Black Hat / DEF CON:** Industry-defining conventions highlighting cutting-edge web exploitation methodologies and zero-day demonstrations.

### Local Regional Events
* **[[Venue_SYNASC]]:** UVT's hosted international symposium; its parallel computing, software engineering, and logic tracks frame automated system checking and application modeling.
* **[[Venue_ZeroDayTM]]:** The premier local cybersecurity conference and jeopardy-style CTF hosted on-site in Timișoara, supported heavily by UVT to foster offensive web and infrastructure testing skills.

---

## 6. Active UVT Project Sandbox

> [!example] Practical Lab Blueprint: Secure API Architecture
> **Objective:** Engineer a minimal REST API implementing secure authentication pipelines, granular role-based access management, and structured tampering-resistant audit logging.
> **Validation Metric:** Include automated testing workflows mathematically proving that standard user privilege states cannot bypass routing restrictions to hit administrative execution paths.
> **Reference Frameworks:** [[OWASP_Top_10]], [[PortSwigger_Web_Security_Academy]].