
/* WARNING: Removing unreachable block (ram,0x02701074) */
/* WARNING: Removing unreachable block (ram,0x02701014) */
/* WARNING: Removing unreachable block (ram,0x02701020) */
/* WARNING: Removing unreachable block (ram,0x02700fc4) */
/* WARNING: Removing unreachable block (ram,0x02700f28) */
/* WARNING: Removing unreachable block (ram,0x02700f90) */
/* WARNING: Removing unreachable block (ram,0x02700f98) */
/* WARNING: Removing unreachable block (ram,0x02700f80) */
/* WARNING: Removing unreachable block (ram,0x02700f88) */
/* WARNING: Removing unreachable block (ram,0x02700ff8) */
/* WARNING: Removing unreachable block (ram,0x02701000) */
/* WARNING: Removing unreachable block (ram,0x0270100c) */
/* WARNING: Removing unreachable block (ram,0x02701060) */
/* WARNING: Removing unreachable block (ram,0x027010c8) */
/* WARNING: Removing unreachable block (ram,0x027010d4) */
/* WARNING: Removing unreachable block (ram,0x027010b4) */
/* WARNING: Removing unreachable block (ram,0x027010c0) */
/* WARNING: Removing unreachable block (ram,0x02700f3c) */
/* WARNING: Removing unreachable block (ram,0x02700fd4) */

void FUN_02700ee8(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((((*(byte *)(param_1 + 0x50e) ^ 0xff) & 6) == 0) &&
       (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 400), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x28))();
    }
    if ((((*(byte *)(param_1 + 0x50f) ^ 0xff) & 6) == 0) &&
       (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x198), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    if ((((*(byte *)(param_1 + 0x510) ^ 0xff) & 6) == 0) &&
       (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x1a0), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
  }
  return;
}

