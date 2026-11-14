
bool FUN_01ad6944(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  
  iVar4 = FUN_0277d6c4(param_1 + 8);
  if (iVar4 == 0x38d) {
    return true;
  }
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
            goto LAB_01ad6a10;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_01ad6a10:
  return uVar6 == 0x84;
}

