
/* WARNING: Removing unreachable block (ram,0x015af3bc) */

void FUN_015af378(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  *param_1 = 0;
  if ((((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x50) != 0)) &&
      (plVar2 = *(long **)(*(long *)(DAT_05231900 + 0x50) + 0x118), plVar2 != (long *)0x0)) &&
     (((char)plVar2[7] != '\0' && (uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2), (uVar1 & 1) != 0))
     )) {
    *param_1 = plVar2;
  }
  return;
}

