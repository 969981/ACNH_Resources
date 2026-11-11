
ulong FUN_0044bde0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar8 = (uint *)(param_1 + 1);
  if ((int)param_1[3] * 2 < (int)((*puVar8 + 1) * 3)) {
    FUN_0043d3c0(param_1 + 2);
  }
  uVar4 = FUN_00429110(param_2);
  uVar7 = *(uint *)(param_1 + 3);
  lVar6 = param_1[2];
  puVar2 = (uint *)(lVar6 + (ulong)(uVar7 & uVar4) * 8);
  puVar9 = puVar2 + 1;
  uVar3 = *puVar9;
  while (-1 < (int)uVar3) {
    if (*puVar2 == uVar4) {
      puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar3 * 0x10);
      iVar5 = FUN_00428d60(*puVar1,puVar1[1],*param_2,param_2[1]);
      if (iVar5 == 0) goto LAB_0044bebc;
      lVar6 = param_1[2];
      uVar7 = *(uint *)(param_1 + 3);
    }
    puVar2 = (uint *)(lVar6 + (((ulong)((long)puVar2 - lVar6) >> 3) + 1 & (long)(int)uVar7) * 8);
    puVar9 = puVar2 + 1;
    uVar3 = *puVar9;
  }
  uVar7 = *puVar8;
  *puVar2 = uVar4;
  *puVar9 = uVar7;
  puVar9 = puVar8;
LAB_0044bebc:
  return (ulong)*puVar9 | ((long)puVar2 - param_1[2]) * 0x20000000;
}

