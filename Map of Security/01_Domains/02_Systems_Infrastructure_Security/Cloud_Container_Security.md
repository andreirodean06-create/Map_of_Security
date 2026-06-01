---
type: subarea
cssclasses: security-map
tags: [security, cloud, containers]
---

# Cloud & Container Security

## Main Activities

| Theory | Experiment | Design |
| --- | --- | --- |
| Shared responsibility, IAM, container isolation, orchestration, secrets. | Inspect cloud permissions, scan containers, test exposed storage, review Kubernetes config. | Least-privilege IAM, secure images, secret management, logging, network policies. |

## Connections

* **Depends on:** [[Operating_System_Endpoint_Security]] and [[Network_Security]].
* **Supports:** [[DevSecOps_Supply_Chain_Security]].
* **Feeds:** [[SOC_Monitoring_Detection]] with cloud logs.

## Important Problems

* **Over-permissive IAM:** one token can do too much.
* **Public storage:** private data is accidentally exposed.
* **Container escape/misuse:** weak isolation or dangerous mounts expose the host.
* **Open problem:** keeping cloud permissions understandable at large scale.

## People

* Kelsey Hightower - cloud-native infrastructure education.
* Liz Rice - container security education.
* Ian Coldwater - Kubernetes and container security.
* Local: [[Person_Dr_Florin_Spataru]], [ADD CLOUD PROFESSOR].

## Venues

* KubeCon + CloudNativeCon
* USENIX Security
* Black Hat
* Cloud Security Alliance events
* Local: [ADD CLOUD / DISTRIBUTED SYSTEMS EVENT]

## UVT Project Idea

Deploy a small containerized app locally, remove dangerous privileges, add logs, and document container security settings.

## More Information

* [Cloud Security Alliance](https://cloudsecurityalliance.org/)
* [Kubernetes security docs](https://kubernetes.io/docs/concepts/security/)
