
void FUN_004c4ad0(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar4 = param_2[1];
  uVar7 = (long)(int)param_1[1] - 1;
  if (uVar4 != (uint)uVar7) {
    lVar5 = FUN_004c4a20(param_1,*param_1 + uVar7 * 0xc);
    *(uint *)(lVar5 + 4) = uVar4;
    uVar7 = (ulong)((int)param_1[1] - 1);
  }
  uVar6 = (uint)uVar7;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar4) {
    puVar8 = (undefined4 *)(*param_1 + (long)(int)uVar6 * 0xc);
    puVar9 = (undefined4 *)(*param_1 + (long)(int)uVar4 * 0xc);
    *puVar9 = *puVar8;
    uVar3 = puVar8[2];
    puVar9[1] = puVar8[1];
    puVar9[2] = uVar3;
  }
  lVar5 = param_1[2];
  uVar7 = (ulong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + (((long)param_2 - lVar5 >> 3) + 1U & uVar7) * 8);
  uVar4 = puVar1[1];
  while (-1 < (int)uVar4) {
    lVar2 = lVar5 + (uVar7 & *puVar1) * 8;
    if ((ulong)((long)(int)uVar7 & (long)param_2 - lVar2 >> 3) <
        (ulong)((long)(int)uVar7 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      lVar5 = param_1[2];
      uVar7 = (ulong)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    puVar1 = (uint *)(lVar5 + (((ulong)((long)puVar1 - lVar5) >> 3) + 1 & (long)(int)uVar7) * 8);
    uVar4 = puVar1[1];
  }
  param_2[1] = 0xffffffff;
  return;
}

