
uint FUN_01ae43f4(long param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  iVar3 = FUN_01afcfa0();
  if ((iVar3 != 0) &&
     ((((iVar3 = FUN_01afcfa0(param_1), iVar3 == 0 ||
        (puVar7 = (ushort *)FUN_01afd600(param_1), puVar7 == (ushort *)0x0)) ||
       (uVar2 = *puVar7 >> 3 & 3, uVar2 == 3)) || (uVar2 == 0)))) {
    uVar4 = FUN_01ae3a80(param_1);
    uVar5 = FUN_01ae4560(param_1,uVar4);
    if (uVar5 != 0) {
      return uVar5;
    }
  }
  iVar3 = FUN_01ad7260(param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_01ad7260(param_1);
    if ((iVar3 == 0) || (puVar7 = (ushort *)FUN_01afd600(param_1), puVar7 == (ushort *)0x0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar7 & 7;
      uVar6 = FUN_01ad7260(param_1);
      if (uVar6 <= uVar5) {
        uVar5 = 0;
      }
    }
    uVar5 = FUN_01ae4840(param_1,uVar5);
    if (uVar5 != 0) {
      return uVar5;
    }
  }
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar5 = 2;
  }
  else {
    uVar6 = *puVar8;
    uVar5 = 0;
    if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
      if ((*puVar9 != 0) && ((uVar5 = puVar9[1], uVar5 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar1 != 0) {
          uVar6 = 0;
          if ((ulong)uVar5 != 0) {
            uVar6 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar5);
          }
          if (*puVar9 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((uVar6 < DAT_05326d18) &&
             (uVar2 = *(ushort *)(DAT_05326d20 + (long)(int)uVar6 * 2), uVar2 < 0xb)) {
            return (uint)uVar2;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}

