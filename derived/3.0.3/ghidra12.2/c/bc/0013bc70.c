
int FUN_0013bc70(long param_1,uint param_2,short param_3,long param_4,undefined1 *param_5,
                ushort param_6)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  lVar3 = *(long *)(param_4 + 8);
  iVar15 = (int)param_3;
  if ((*(long *)(param_4 + 0x10) != 0) &&
     (iVar15 = (*(byte *)(*(long *)(param_4 + 0x10) +
                          ((ulong)*(byte *)(lVar3 + 0x10) << 0x18 |
                           (ulong)*(byte *)(lVar3 + 0x11) << 0x10 |
                           (ulong)*(byte *)(lVar3 + 0x12) << 8 | (ulong)*(byte *)(lVar3 + 0x13)) +
                          (ulong)(param_2 - 1) + 0x3c) & 0x3f) + iVar15, 99 < iVar15)) {
    iVar15 = 100;
  }
  if (param_5 != (undefined1 *)0x0) {
    bVar4 = *(byte *)(lVar3 + 0x28);
    bVar5 = *(byte *)(lVar3 + 0x29);
    bVar6 = *(byte *)(lVar3 + 0x2a);
    bVar7 = *(byte *)(lVar3 + 0x2b);
    *param_5 = 0;
    if ((*(char *)(param_1 + 0x62751) != '\0') && ((*(byte *)(param_1 + 0x6d641) >> 1 & 1) != 0)) {
      lVar1 = param_1 + (ulong)param_6 * 8;
      uVar14 = *(uint *)(lVar1 + 0x641ec);
      if ((uVar14 != 0) &&
         (((uVar16 = *(uint *)(lVar1 + 0x641f0), uVar16 != 0 && (uVar14 <= uVar16)) &&
          (*(char *)(lVar3 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 |
                             (ulong)bVar7) + (ulong)(param_2 * 2 - 2)) < '\0')))) {
        do {
          uVar8 = uVar14 + uVar16 >> 1;
          uVar11 = uVar8 - 1;
          pbVar2 = (byte *)(lVar3 + ((ulong)*(byte *)(lVar3 + 0x2c) << 0x18 |
                                     (ulong)*(byte *)(lVar3 + 0x2d) << 0x10 |
                                     (ulong)*(byte *)(lVar3 + 0x2e) << 8 |
                                    (ulong)*(byte *)(lVar3 + 0x2f)) + (ulong)(uVar11 * 4));
          uVar10 = (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 | (uint)pbVar2[3];
          if (uVar10 == param_2) {
            iVar15 = iVar15 + (*pbVar2 & 0x3f);
            *param_5 = 1;
            iVar13 = FUN_0013be30();
            if (iVar13 == 0) {
              return iVar15;
            }
            goto LAB_0013bd10;
          }
          if (uVar10 < param_2) {
            uVar14 = uVar8 + 1;
            uVar11 = uVar16;
          }
          uVar16 = uVar11;
        } while (uVar14 <= uVar11);
      }
    }
  }
  iVar13 = FUN_0013be30();
  if (iVar13 != 0) {
LAB_0013bd10:
    iVar13 = FUN_00113a80(param_1,iVar13);
    iVar12 = (uint)*(ushort *)(param_4 + 6) - (uint)*(ushort *)(param_4 + 4);
    if ((uint)*(ushort *)(param_4 + 4) <= (uint)*(ushort *)(param_4 + 6) && iVar12 != 0) {
      iVar9 = iVar13 * 100;
      iVar13 = 0;
      if (iVar12 != 0) {
        iVar13 = iVar9 / iVar12;
      }
    }
    iVar15 = iVar13 + iVar15;
  }
  return iVar15;
}

