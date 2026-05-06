# Allocscope Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | allocation pressure | 188 | ship |
| stress | dirty state | 196 | ship |
| edge | guard slack | 180 | ship |
| recovery | layout drift | 214 | ship |
| stale | allocation pressure | 161 | ship |

Start with `recovery` and `stale`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`recovery` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
