---
type: open_problem
cssclasses: security-map
tags: [problem, systems, beginner]
---

# Open Problem: Architectural Memory Corruption

## Context

Languages such as C and C++ give programmers strong control over memory, but mistakes can let attackers read or change memory they should not access. Defenses such as ASLR, DEP/NX, stack canaries, sandboxing, and safer compilers reduce risk, but old code still exists everywhere.

## The Beginner Version

A program is supposed to write inside its own notebook. A memory bug is like writing past the edge of the page and accidentally changing the instructions on the next page.

## Why It Is Hard

* Important operating systems, browsers, drivers, and embedded devices contain old low-level code.
* Some bugs only appear with rare inputs.
* Performance requirements make full runtime checking difficult.
* Attackers can combine small weaknesses into a working exploit.

## Starter Questions

* Which parts of a system are written in memory-unsafe languages?
* Are safer languages such as Rust appropriate for new components?
* What compiler protections are enabled?
* How is untrusted input isolated?

## Connected To

* [[Systems_Infrastructure_Security_Domain]]
* [[Application_Software_Security_Domain]]
* [ADD LOCAL SYSTEMS PROGRAMMING COURSE]
