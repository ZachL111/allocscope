# Review Journal

I treated `allocscope` as a project where the smallest useful behavior should still be inspectable.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its systems programming focus without claiming live deployment or external usage.

## Cases

- `baseline`: `allocation pressure`, score 188, lane `ship`
- `stress`: `dirty state`, score 196, lane `ship`
- `edge`: `guard slack`, score 180, lane `ship`
- `recovery`: `layout drift`, score 214, lane `ship`
- `stale`: `allocation pressure`, score 161, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
