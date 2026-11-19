
undefined8 FUN_03c36120(undefined2 *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  int iVar10;
  ushort uVar11;
  ushort local_210 [256];
  
  if (0xff < param_3) {
    return 0xffffffffffffffd2;
  }
  if (0xc < param_4) {
    return 0xffffffffffffffd4;
  }
  uVar7 = 0;
  uVar2 = 1 << (ulong)(param_4 & 0x1f);
  uVar4 = (ulong)uVar2;
  uVar9 = 1;
  uVar6 = uVar2 - 1;
  do {
    uVar11 = *(ushort *)(param_2 + uVar7 * 2);
    if ((short)uVar11 == -1) {
      uVar8 = (ulong)uVar6;
      uVar6 = uVar6 - 1;
      *(char *)(param_1 + uVar8 * 2 + 3) = (char)uVar7;
      uVar11 = 1;
    }
    else if ((int)((uint)(0x8000 << (ulong)(param_4 & 0x1f)) >> 0x10) <= (int)(short)uVar11) {
      uVar9 = 0;
    }
    local_210[uVar7] = uVar11;
    uVar7 = uVar7 + 1;
  } while (param_3 + 1 != uVar7);
  param_1[1] = uVar9;
  uVar7 = 0;
  uVar8 = 0;
  *param_1 = (short)param_4;
  do {
    if (0 < *(short *)(param_2 + uVar7 * 2)) {
      iVar10 = 0;
      do {
        *(char *)(param_1 + uVar8 * 2 + 3) = (char)uVar7;
        do {
          uVar1 = (uVar2 >> 3) + (uVar2 >> 1) + 3 + (int)uVar8 & uVar2 - 1;
          uVar8 = (ulong)uVar1;
        } while (uVar6 < uVar1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(short *)(param_2 + uVar7 * 2));
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != param_3 + 1);
  if ((int)uVar8 == 0) {
    puVar5 = (undefined1 *)((long)param_1 + 7);
    do {
      uVar4 = uVar4 - 1;
      uVar11 = local_210[(byte)puVar5[-1]];
      local_210[(byte)puVar5[-1]] = uVar11 + 1;
      uVar6 = (param_4 - 0x1f) + (int)LZCOUNT((uint)uVar11);
      *puVar5 = (char)uVar6;
      *(ushort *)(puVar5 + -3) = (uVar11 << (ulong)(uVar6 & 0x1f)) - (short)uVar2;
      puVar5 = puVar5 + 4;
    } while (uVar4 != 0);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}

