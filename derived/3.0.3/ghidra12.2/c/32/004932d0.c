
uint FUN_004932d0(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar5 = (undefined8 *)*param_1;
  puVar9 = (uint *)*puVar5;
  if ((puVar5[5] - puVar5[2]) + (long)puVar9 < (long)param_1[1]) {
    if (puVar5[1] - (long)puVar9 < 8) {
      if ((puVar5[7] == 0) || (lVar6 = FUN_0049e6c0(puVar5,8), lVar6 < 8)) {
        return 1;
      }
      puVar5 = (undefined8 *)*param_1;
      puVar9 = (uint *)*puVar5;
    }
    uVar4 = puVar9[1];
    if (uVar4 != 0) {
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((param_2 != 0) && (uVar4 != param_2)) goto LAB_00493360;
      uVar2 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
      uVar3 = uVar2 >> 0x10;
      uVar2 = uVar2 << 0x10;
      lVar6 = (puVar5[5] - puVar5[2]) + (long)puVar9;
      uVar8 = uVar3 | uVar2 & 0x3fffffff;
      uVar1 = lVar6 + (ulong)uVar8;
      if (7 < uVar8 && uVar1 <= (ulong)param_1[1]) {
        uVar8 = *(uint *)(param_1 + 3);
        if (uVar8 == (*(uint *)((long)param_1 + 0x1c) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,param_1 + 2,0x18);
          uVar8 = *(uint *)(param_1 + 3);
        }
        *(uint *)(param_1 + 3) = uVar8 + 1;
        puVar9 = (uint *)(param_1[2] + (long)(int)uVar8 * 0x18);
        puVar9[1] = uVar3 | uVar2;
        puVar9[2] = (uint)lVar6;
        *puVar9 = uVar4;
        *(undefined8 *)(puVar9 + 4) = param_1[1];
        puVar7 = (ulong *)*param_1;
        param_1[1] = uVar1;
        if (puVar7[1] < *puVar7 + 8) {
          FUN_0049e6e0(puVar7,8);
        }
        else {
          *puVar7 = *puVar7 + 8;
        }
        return *puVar9;
      }
    }
    *(byte *)(puVar5 + 4) = *(byte *)(puVar5 + 4) | 2;
    uVar4 = 1;
  }
  else {
LAB_00493360:
    uVar4 = 0;
  }
  return uVar4;
}

