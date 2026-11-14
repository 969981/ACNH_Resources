
bool FUN_01b09a34(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  ushort uVar7;
  uint *puVar8;
  
  uVar5 = FUN_01aed584();
  if (((uVar5 & 1) == 0) && (uVar5 = FUN_01b15170(param_1), (uVar5 & 1) == 0)) {
    puVar6 = *(uint **)(param_1 + 0x10);
    if (puVar6 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar3 = *puVar6;
      uVar7 = 0;
      if ((uVar3 != 0) && (puVar6 != (uint *)(ulong)uVar3)) {
        puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
        uVar7 = 0;
        if (*puVar8 != 0) {
          uVar3 = puVar8[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar3 != 0) {
                uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
              goto LAB_01b09af4;
            }
          }
          uVar7 = 0;
        }
      }
LAB_01b09af4:
      if (uVar7 == 0x71) goto LAB_01b09bb8;
      uVar7 = 0;
      uVar3 = *puVar6;
      if ((uVar3 != 0) && (puVar6 != (uint *)(ulong)uVar3)) {
        puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
        uVar7 = 0;
        if (*puVar8 != 0) {
          uVar3 = puVar8[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar3 != 0) {
                uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
              goto LAB_01b09bd4;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_01b09bd4:
    bVar4 = uVar7 == 0x49;
  }
  else {
LAB_01b09bb8:
    bVar4 = true;
  }
  return bVar4;
}

