---
type: subarea
cssclasses: security-map
tags: [security, devsecops, supply-chain]
---

# DevSecOps & Supply Chain Security

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Build trust, dependency risk, provenance, CI/CD security, secrets lifecycle. | Scan dependencies, inspect pipelines, test secret leakage, review build permissions. | Secure CI/CD, signed releases, SBOMs, least-privilege tokens, protected branches. |

## Connections

* **Depends on:** [[Public_Key_Crypto_PKI]] for signing and trust.
* **Influences:** [[Secure_Software_Engineering]] and [[Cloud_Container_Security]].
* **Feeds:** [[SOC_Monitoring_Detection]] with build and deployment logs.

## Important Problems

* **Dependency confusion:** a malicious package is chosen instead of the intended private package.
* **Leaked secrets:** tokens or keys appear in repos, logs, or build output.
* **Compromised build pipeline:** attackers modify software before release.
* **Open problem:** proving what code and dependencies actually produced a released artifact.

## People

* Dan Lorenc - software supply chain security and Sigstore.
* Kelsey Hightower - cloud-native operations education.
* Katie Moussouris - vulnerability disclosure and coordinated processes.
* Local: [ADD DEVOPS / CLOUD PROFESSOR].

## Venues

* KubeCon + CloudNativeCon
* USENIX Security
* ACM CCS
* OWASP Global AppSec
* Local: [ADD CLOUD / DEVOPS EVENT]

## UVT Project Idea

Create a GitHub Actions pipeline that runs tests, dependency scanning, secret scanning, and produces a simple SBOM for a demo app.

## More Information

* [SLSA Framework](https://slsa.dev/)
* [OpenSSF](https://openssf.org/)
