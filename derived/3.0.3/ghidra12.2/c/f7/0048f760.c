
uint FUN_0048f760(ulong *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  
  puVar6 = (uint *)*param_1;
  lVar7 = (long)puVar6 - param_1[2];
  if (lVar7 < (long)param_1[4]) {
    if ((long)(param_1[1] - (long)puVar6) < 8) {
      return 1;
    }
    uVar4 = puVar6[1];
    if (uVar4 != 0) {
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((param_2 != 0) && (uVar4 != param_2)) goto LAB_0048f7c0;
      uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      uVar3 = uVar2 >> 0x10;
      uVar2 = uVar2 << 0x10;
      uVar5 = uVar3 | uVar2 & 0x3fffffff;
      if ((7 < uVar5) && (uVar1 = lVar7 + (ulong)uVar5, uVar1 <= param_1[4])) {
        uVar5 = (uint)param_1[6];
        if (uVar5 == (*(uint *)((long)param_1 + 0x34) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,param_1 + 5,0x18);
          uVar5 = (uint)param_1[6];
        }
        *(uint *)(param_1 + 6) = uVar5 + 1;
        puVar6 = (uint *)(param_1[5] + (long)(int)uVar5 * 0x18);
        puVar6[1] = uVar3 | uVar2;
        puVar6[2] = (uint)lVar7;
        *puVar6 = uVar4;
        *(ulong *)(puVar6 + 4) = param_1[4];
        param_1[4] = uVar1;
        if (param_1[1] < *param_1 + 8) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        }
        else {
          *param_1 = *param_1 + 8;
        }
        return *puVar6;
      }
    }
    *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
    uVar4 = 1;
  }
  else {
LAB_0048f7c0:
    uVar4 = 0;
  }
  return uVar4;
}

