
undefined4 FUN_01b15798(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar3 = *puVar7;
    if (uVar3 != 0 && puVar7 != (uint *)(ulong)uVar3) {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      if (((*puVar8 != 0) && (uVar3 = puVar8[1], uVar3 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd))
          goto LAB_01b1583c;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01b1583c:
  uVar6 = 4;
  if (uVar4 == 0x4e) {
    uVar3 = *(uint *)(param_1 + 0xc) & 3;
    uVar5 = 2;
    if (uVar3 != 1) {
      uVar5 = 4;
    }
    uVar6 = 3;
    if (uVar3 != 2) {
      uVar6 = uVar5;
    }
  }
  return uVar6;
}

