# Field Notes

`allocscope` is easiest to review by starting with the fixture, not the prose.

The domain cases cover `allocation pressure`, `dirty state`, `guard slack`, and `layout drift`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

`recovery` is the strongest case at 214 on `layout drift`. `stale` is the cautious anchor at 161 on `allocation pressure`.

The local verifier covers this data so the notes stay tied to code.
