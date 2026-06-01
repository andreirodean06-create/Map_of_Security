---
type: open_problem
cssclasses: security-map
tags: [problem, appsec, beginner]
---

# Open Problem: Complex Logic Flaws in Distributed Compositions

## Context

Modern applications are often split into many services. Each service may look secure alone, but the full system can still fail when requests happen in an unexpected order.

## The Beginner Version

Think of an online shop. One service checks payment, another ships the order, and another manages refunds. A logic flaw happens if an attacker finds a sequence like "refund first, ship second, cancel third" that the designers never expected.

## Why It Is Hard

* Security checks may be duplicated or missing between services.
* Race conditions happen when two actions occur almost at the same time.
* Logs are spread across many machines.
* Developers may understand one service but not the full workflow.

## Starter Questions

* What actions should only admins perform?
* Can a user repeat, reorder, or cancel a request?
* What should happen if one service succeeds and another fails?

## Connected To

* [[Application_Software_Security_Domain]]
* [[Systems_Infrastructure_Security_Domain]]
* [ADD LOCAL WEB / SOFTWARE ENGINEERING COURSE]
