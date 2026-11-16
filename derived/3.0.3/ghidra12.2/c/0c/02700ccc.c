
/* WARNING: Removing unreachable block (ram,0x02700e58) */
/* WARNING: Removing unreachable block (ram,0x02700df8) */
/* WARNING: Removing unreachable block (ram,0x02700e04) */
/* WARNING: Removing unreachable block (ram,0x02700da8) */
/* WARNING: Removing unreachable block (ram,0x02700d0c) */
/* WARNING: Removing unreachable block (ram,0x02700d74) */
/* WARNING: Removing unreachable block (ram,0x02700d7c) */
/* WARNING: Removing unreachable block (ram,0x02700d64) */
/* WARNING: Removing unreachable block (ram,0x02700d6c) */
/* WARNING: Removing unreachable block (ram,0x02700ddc) */
/* WARNING: Removing unreachable block (ram,0x02700de4) */
/* WARNING: Removing unreachable block (ram,0x02700df0) */
/* WARNING: Removing unreachable block (ram,0x02700e44) */
/* WARNING: Removing unreachable block (ram,0x02700eac) */
/* WARNING: Removing unreachable block (ram,0x02700eb8) */
/* WARNING: Removing unreachable block (ram,0x02700e98) */
/* WARNING: Removing unreachable block (ram,0x02700ea4) */
/* WARNING: Removing unreachable block (ram,0x02700d20) */
/* WARNING: Removing unreachable block (ram,0x02700db8) */

void FUN_02700ccc(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((((*(byte *)(param_1 + 0x50e) ^ 0xff) & 6) == 0) &&
       (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 400), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x18))();
    }
    if ((((*(byte *)(param_1 + 0x50f) ^ 0xff) & 6) == 0) &&
       (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x198), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    if ((((*(byte *)(param_1 + 0x510) ^ 0xff) & 6) == 0) &&
       (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x1a0), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return;
}

