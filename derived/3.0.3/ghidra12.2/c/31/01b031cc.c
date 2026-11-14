
undefined8 FUN_01b031cc(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar3 = *puVar6;
    if (uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
      if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
          goto LAB_01b0327c;
        }
      }
    }
    uVar5 = 0;
  }
LAB_01b0327c:
  if ((uVar5 == 0x86) && (uVar4 = FUN_01b032d0(param_1), (uVar4 & 1) != 0)) {
    uVar4 = FUN_01b032d0(param_1);
    if ((uVar4 & 1) == 0) {
      return 1;
    }
    if ((*(byte *)(param_1 + 0xb) & 3) == 0) {
      return 1;
    }
  }
  return 0;
}

