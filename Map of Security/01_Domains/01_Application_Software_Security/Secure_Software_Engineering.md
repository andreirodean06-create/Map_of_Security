---
type: subarea
cssclasses: security-map
tags: [security, appsec, software-engineering]
---

# Secure Software Engineering

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Secure design, threat modeling, code review, testing strategy, secure defaults. | Review code, run static analysis, write abuse-case tests. | Build secure SDLC steps, checklists, review gates, safe error handling. |

## Connections

* **Depends on:** [[Risk_Management_Compliance]] for priorities.
* **Influences:** [[DevSecOps_Supply_Chain_Security]] through secure build requirements.
* **Supports:** [[Web_API_Security]] and [[Mobile_Client_Security]].

## Important Problems

* **Insecure design:** the system has no correct place to enforce a rule.
* **Missing tests for abuse cases:** tests check expected use but not malicious use.
* **Unsafe error handling:** error messages expose stack traces, secrets, or internal structure.
* **Open problem:** making security reviews fast enough for modern development without becoming superficial.

## People

* Gary McGraw - software security and secure SDLC.
* Michael Howard - secure development lifecycle work.
* Tanya Janca - practical secure coding education.
* Local: [ADD SOFTWARE ENGINEERING PROFESSOR].

## Venues

* IEEE Security & Privacy
* USENIX Security
* OWASP Global AppSec
* ACM CCS
* Local: [ADD SOFTWARE ENGINEERING EVENT]

## UVT Project Idea

Take an existing student project and add a threat model, secure coding checklist, dependency scan, and tests for unauthorized actions.

## More Information

* [OWASP Software Assurance Maturity Model](https://owaspsamm.org/)
* [OWASP Cheat Sheet Series](https://cheatsheetseries.owasp.org/)
