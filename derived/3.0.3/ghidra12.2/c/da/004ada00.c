
void FUN_004ada00(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  uVar2 = param_2[1];
  lVar5 = (long)(int)param_1[1] + -1;
  if (uVar2 != (uint)lVar5) {
    lVar5 = FUN_004ad980(param_1,*param_1 + lVar5 * 0x18);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  lVar5 = *param_1 + (long)(int)uVar2 * 0x18;
  uVar4 = *(uint *)(lVar5 + 0x14);
  *(undefined4 *)(lVar5 + 0x10) = 0;
  if ((-1 < (int)uVar4) && (lVar3 = *(long *)(lVar5 + 8), lVar3 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,lVar3,8,uVar4 & 0x3fffffff);
  }
  *(long *)(lVar5 + 8) = 0;
  *(uint *)(lVar5 + 0x14) = 0x80000000;
  lVar5 = (long)(int)param_1[1] + -1;
  uVar4 = (uint)lVar5;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != uVar2) {
    puVar6 = (undefined8 *)(*param_1 + lVar5 * 0x18);
    puVar8 = (undefined8 *)(*param_1 + (long)(int)uVar2 * 0x18);
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
    puVar8[2] = puVar6[2];
  }
  lVar5 = param_1[2];
  uVar7 = (ulong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + (((long)param_2 - lVar5 >> 3) + 1U & uVar7) * 8);
  uVar2 = puVar1[1];
  while (-1 < (int)uVar2) {
    lVar3 = lVar5 + (uVar7 & *puVar1) * 8;
    if ((ulong)((long)(int)uVar7 & (long)param_2 - lVar3 >> 3) <
        (ulong)((long)(int)uVar7 & (long)puVar1 - lVar3 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      lVar5 = param_1[2];
      uVar7 = (ulong)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    puVar1 = (uint *)(lVar5 + (((ulong)((long)puVar1 - lVar5) >> 3) + 1 & (long)(int)uVar7) * 8);
    uVar2 = puVar1[1];
  }
  param_2[1] = 0xffffffff;
  return;
}

