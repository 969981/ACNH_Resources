
ulong FUN_004dcc20(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  
  uVar1 = *(uint *)(param_1 + 3);
  if ((int)(uVar1 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_0043d3c0(param_1 + 2);
    uVar1 = *(uint *)(param_1 + 3);
  }
  lVar6 = param_1[2];
  uVar5 = (ulong)*param_2 & 0x7fffffff;
  uVar7 = uVar1 & uVar5;
  piVar3 = (int *)(lVar6 + uVar7 * 8);
  puVar8 = (uint *)(piVar3 + 1);
  uVar2 = *puVar8;
  iVar4 = (int)uVar5;
  if (-1 < (int)uVar2) {
    do {
      uVar5 = (ulong)uVar2;
      if ((*piVar3 == iVar4) &&
         (*(uint *)(*param_1 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) ==
          *param_2)) goto LAB_004dccd4;
      uVar7 = ((long)(uVar7 << 3) >> 3) + 1U & (long)(int)uVar1;
      piVar3 = (int *)(lVar6 + uVar7 * 8);
      puVar8 = (uint *)(piVar3 + 1);
      uVar2 = *puVar8;
    } while (-1 < (int)uVar2);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *piVar3 = iVar4;
  *puVar8 = uVar1;
  uVar5 = (ulong)*(uint *)(param_1 + 1);
  lVar6 = param_1[2];
LAB_004dccd4:
  return uVar5 | ((long)piVar3 - lVar6) * 0x20000000;
}

