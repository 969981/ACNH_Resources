
void FUN_0047c830(long *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar6 = param_2[1];
  uVar9 = (long)(int)param_1[1] - 1;
  if (uVar6 != (uint)uVar9) {
    lVar7 = FUN_0047c7b0(param_1,*param_1 + uVar9 * 0x10);
    *(uint *)(lVar7 + 4) = uVar6;
    uVar9 = (ulong)((int)param_1[1] - 1);
  }
  uVar8 = (uint)uVar9;
  *(uint *)(param_1 + 1) = uVar8;
  if (uVar8 != uVar6) {
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar8 * 0x10);
    puVar2 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
    uVar5 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
  }
  lVar7 = param_1[2];
  uVar9 = (ulong)(int)param_1[3];
  puVar3 = (uint *)(lVar7 + (((long)param_2 - lVar7 >> 3) + 1U & uVar9) * 8);
  uVar6 = puVar3[1];
  while (-1 < (int)uVar6) {
    lVar4 = lVar7 + (uVar9 & *puVar3) * 8;
    if ((ulong)((long)(int)uVar9 & (long)param_2 - lVar4 >> 3) <
        (ulong)((long)(int)uVar9 & (long)puVar3 - lVar4 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      lVar7 = param_1[2];
      uVar9 = (ulong)*(uint *)(param_1 + 3);
      param_2 = puVar3;
    }
    puVar3 = (uint *)(lVar7 + (((ulong)((long)puVar3 - lVar7) >> 3) + 1 & (long)(int)uVar9) * 8);
    uVar6 = puVar3[1];
  }
  param_2[1] = 0xffffffff;
  return;
}

