
long FUN_0034efc0(ushort *param_1)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  
  uVar2 = (ulong)*param_1;
  if (uVar2 == 0) {
    return (ulong)param_1[1] * 8;
  }
  uVar4 = 0xffffffff;
  plVar3 = (long *)(*(long *)(param_1 + 4) + 0x10);
  do {
    while (uVar1 = *(ushort *)((long)plVar3 + -0xe), (short)uVar1 < 0) {
      uVar4 = 0xf;
      uVar2 = uVar2 - 1;
      plVar3 = plVar3 + 5;
      if (uVar2 == 0) goto LAB_0034f018;
    }
    if ((int)uVar4 <= (int)(uint)uVar1) {
      uVar4 = (uint)uVar1;
    }
    if (*plVar3 != 0) {
      uVar4 = 0xf;
    }
    uVar2 = uVar2 - 1;
    plVar3 = plVar3 + 5;
  } while (uVar2 != 0);
LAB_0034f018:
  return (ulong)param_1[1] * 8 + (ulong)(uVar4 + 1) * 4;
}

