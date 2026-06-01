---
type: subarea
cssclasses: security-map
tags: [security, appsec, web, api]
---

# Web & API Security

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Authentication, authorization, sessions, trust boundaries, input validation. | Proxy requests, test labs, review access checks, fuzz parameters. | Secure routing, role checks, password hashing, rate limits, audit logs. |

## Connections

* **Depends on:** [[Public_Key_Crypto_PKI]], [[Operating_System_Endpoint_Security]]
* **Influences:** [[SOC_Monitoring_Detection]] through logs and alerts.
* **Governed by:** [[Privacy_Data_Protection]] when apps process personal data.

## Important Problems

* **Broken access control:** changing `/user/12` to `/user/13` reveals another user's data.
* **Injection:** a form input becomes SQL, shell, or template code.
* **API abuse:** valid endpoints are used in unexpected sequences.
* **Open problem:** finding complex business-logic flaws automatically. See [[Problem_Microservice_Logic_Flaws]].

## People

* Tavis Ormandy - practical vulnerability research.
* Orange Tsai - web and server-side vulnerability research.
* Tanya Janca - AppSec education and secure development.
* Local: [ADD WEB / DATABASE PROFESSOR], [ADD TEACHING ASSISTANT].

## Venues

* OWASP Global AppSec
* NDSS
* USENIX Security
* Black Hat / DEF CON web security talks
* Local: [[Venue_SYNASC]], [ADD LOCAL HACKATHON]

## UVT Project Idea

Build a small API with login, roles, and audit logs. Add tests proving that normal users cannot access admin routes.

## More Information

* [OWASP Top 10](https://owasp.org/www-project-top-ten/)
* [PortSwigger Web Security Academy](https://portswigger.net/web-security)
