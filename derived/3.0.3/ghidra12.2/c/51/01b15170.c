
bool FUN_01b15170(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  uint *puVar8;
  
  lVar1 = param_1 + 8;
  iVar5 = FUN_0277d6c4(lVar1);
  if (iVar5 == 0x9c9) {
    return true;
  }
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar4 = *puVar6;
    uVar7 = 0;
    if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
      puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar6 - lVar2) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar7 < 0xbd))
            goto LAB_01b1523c;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_01b1523c:
  if ((((uVar7 == 0x96) || (iVar5 = FUN_0277d6c4(lVar1), iVar5 == 0x1661)) ||
      (iVar5 = FUN_0277d6c4(lVar1), iVar5 == 0x175e)) ||
     (iVar5 = FUN_0277d6c4(lVar1), iVar5 == 0x165f)) {
    return true;
  }
  iVar5 = FUN_0277d6c4(lVar1);
  return iVar5 == 0x1660;
}

