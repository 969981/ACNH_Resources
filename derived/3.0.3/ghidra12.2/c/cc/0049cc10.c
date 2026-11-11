
ulong FUN_0049cc10(long *param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar6 = *(uint *)(param_1 + 3);
  if ((int)(uVar6 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_0043d3c0(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 3);
  }
  lVar3 = param_1[2];
  uVar5 = (ulong)(uVar6 & 0x9e3779b9);
  piVar2 = (int *)(lVar3 + uVar5 * 8);
  puVar7 = (uint *)(piVar2 + 1);
  uVar1 = *puVar7;
  if (-1 < (int)uVar1) {
    do {
      uVar4 = (ulong)uVar1;
      if ((*piVar2 == -0x61c88647) &&
         (*(long *)(*param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4)) == 0))
      goto LAB_0049ccb8;
      uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)uVar6;
      piVar2 = (int *)(lVar3 + uVar5 * 8);
      puVar7 = (uint *)(piVar2 + 1);
      uVar1 = *puVar7;
    } while (-1 < (int)uVar1);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *piVar2 = -0x61c88647;
  *puVar7 = uVar6;
  uVar4 = (ulong)*(uint *)(param_1 + 1);
  lVar3 = param_1[2];
LAB_0049ccb8:
  return uVar4 | ((long)piVar2 - lVar3) * 0x20000000;
}

