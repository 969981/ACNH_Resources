
void FUN_028cd960(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = 0x44c;
  while( true ) {
    uVar3 = *(uint *)((long)param_1 + lVar2 * 4);
    plVar1 = param_1 + (ulong)uVar3 * 0xb;
    if (0x31 < uVar3) {
      plVar1 = param_1;
    }
    if ((*plVar1 != 0) &&
       ((*(int *)((long)plVar1 + 0x24) != 0 && (int)plVar1[1] != 0) && *plVar1 == *param_2)) break;
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x47e) {
      return;
    }
  }
  uVar3 = (int)lVar2 - 0x44c;
  if ((int)uVar3 < 0) {
    return;
  }
  plVar1 = param_1;
  if ((uVar3 < 0x32) &&
     (uVar3 = *(uint *)((long)param_1 + lVar2 * 4), plVar1 = param_1 + (ulong)uVar3 * 0xb,
     0x31 < uVar3)) {
    plVar1 = param_1;
  }
  *(byte *)((long)plVar1 + 0x54) = *(byte *)((long)plVar1 + 0x54) | 1;
  return;
}

