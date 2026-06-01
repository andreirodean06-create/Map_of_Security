---
type: subarea
cssclasses: security-map
tags: [security, mobile, client]
---

# Mobile & Client Security

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Local trust, client-side storage, platform permissions, reverse engineering risk. | Inspect app traffic, test local storage, analyze permissions, review client logic. | Store secrets safely, enforce rules server-side, use platform security APIs. |

## Connections

* **Depends on:** [[Web_API_Security]] because clients usually talk to APIs.
* **Depends on:** [[Symmetric_Crypto_Hashing]] for local data protection.
* **Influences:** [[Privacy_Data_Protection]] because phones carry personal data.

## Important Problems

* **Secret in client app:** API keys or tokens are hard-coded into the app.
* **Trusting the client:** the server accepts price, role, or permission decisions from the app.
* **Unsafe local storage:** sensitive data is stored without protection.
* **Open problem:** balancing privacy, usability, and anti-abuse controls on personal devices.

## People

* Sarah Edwards - mobile forensics and iOS security education.
* Collin Mulliner - mobile and embedded security research.
* Moxie Marlinspike - secure messaging and mobile privacy systems.
* Local: [ADD MOBILE / CLIENT DEVELOPMENT PROFESSOR].

## Venues

* Black Hat Mobile / AppSec talks
* OWASP Global AppSec
* USENIX Security
* NDSS
* Local: [ADD MOBILE DEVELOPMENT EVENT]

## UVT Project Idea

Build a small mobile or desktop client and document which security checks must happen locally and which must happen on the server.

## More Information

* [OWASP Mobile Application Security](https://mas.owasp.org/)
