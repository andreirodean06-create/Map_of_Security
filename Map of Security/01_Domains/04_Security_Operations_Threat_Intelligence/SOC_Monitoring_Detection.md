---
type: subarea
cssclasses: security-map
tags: [security, soc, detection]
---

# SOC Monitoring & Detection

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Detection logic, alert quality, attacker tactics, logging strategy, triage. | Analyze sample logs, write simple rules, map behavior to MITRE ATT&CK. | Build useful alerts, dashboards, escalation paths, and evidence collection. |

## Connections

* **Consumes:** [[Web_API_Security]], [[Operating_System_Endpoint_Security]], [[Network_Security]], [[Cloud_Container_Security]] logs.
* **Feeds:** [[Incident_Response_Forensics]].
* **Reports to:** [[Risk_Management_Compliance]].

## Important Problems

* **Alert fatigue:** too many weak alerts hide the serious ones.
* **Missing logs:** an incident cannot be investigated because evidence was never stored.
* **False positives:** normal behavior looks suspicious.
* **Open problem:** detecting stealthy attacker behavior without overwhelming analysts.

## People

* John Lambert - defender mindset and security operations.
* Katie Nickels - ATT&CK and threat-informed defense.
* Florian Roth - Sigma detection rules.
* Local: [ADD NETWORKS / SYSTEM ADMIN CONTACT].

## Venues

* FIRST Conference
* SANS Blue Team Summit
* Black Hat / DEF CON
* RSA Conference
* Local: [ADD BLUE TEAM EVENT]

## UVT Project Idea

Create a detection notebook using sample logs: suspicious login, timeline, evidence, and recommended response.

## More Information

* [MITRE ATT&CK](https://attack.mitre.org/)
* [Sigma rules](https://sigmahq.io/)
