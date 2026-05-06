# allocscope

`allocscope` explores systems programming with a small C codebase and local fixtures. The technical goal is to explore arena allocation, alignment, guard checks, and fragmentation reports.

## Why I Keep It Small

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Allocscope Review Notes

Start with `layout drift` and `allocation pressure`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## Included Behavior

- `fixtures/domain_review.csv` adds cases for allocation pressure and dirty state.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/allocscope-walkthrough.md` walks through the case spread.
- The C code includes a review path for `layout drift` and `allocation pressure`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Internal Model

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The added C path is deliberately direct, with fixtures doing most of the explaining.

## Try It Locally

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Validation

The same command runs the local verification path. The highest-scoring domain case is `recovery` at 214, which lands in `ship`. The most cautious case is `stale` at 161, which lands in `ship`.

## Scope

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
