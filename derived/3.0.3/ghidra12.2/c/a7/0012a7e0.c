
int FUN_0012a7e0(long param_1,uint param_2,short param_3,long param_4,undefined1 *param_5,
                ushort param_6)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  
  lVar3 = *(long *)(param_4 + 8);
  iVar11 = (int)param_3;
  if (*(long *)(param_4 + 0x10) != 0) {
    lVar13 = *(long *)(lVar3 + 8);
    iVar11 = (*(byte *)(*(long *)(param_4 + 0x10) +
                        ((ulong)*(byte *)(lVar13 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar13 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar13 + 0x12) << 8 | (ulong)*(byte *)(lVar13 + 0x13)) +
                        (ulong)(param_2 - 1) + 0x3c) & 0x3f) + iVar11;
    if (99 < iVar11) {
      iVar11 = 100;
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    lVar13 = *(long *)(lVar3 + 0x60);
    *param_5 = 0;
    if ((*(char *)(param_1 + 0x62751) != '\0') && ((*(byte *)(param_1 + 0x6d641) >> 1 & 1) != 0)) {
      lVar1 = param_1 + (ulong)param_6 * 8;
      uVar10 = *(uint *)(lVar1 + 0x641ec);
      if ((uVar10 != 0) &&
         (((uVar12 = *(uint *)(lVar1 + 0x641f0), uVar12 != 0 && (uVar10 <= uVar12)) &&
          (*(char *)(lVar13 + (ulong)(param_2 * 2 - 2)) < '\0')))) {
        do {
          uVar4 = uVar10 + uVar12 >> 1;
          uVar7 = uVar4 - 1;
          pbVar2 = (byte *)(*(long *)(lVar3 + 0x50) + (ulong)(uVar7 * 4));
          uVar6 = (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 | (uint)pbVar2[3];
          if (uVar6 == param_2) {
            iVar11 = iVar11 + (*pbVar2 & 0x3f);
            *param_5 = 1;
            iVar9 = FUN_0012a960();
            if (iVar9 == 0) {
              return iVar11;
            }
            goto LAB_0012a878;
          }
          if (uVar6 < param_2) {
            uVar10 = uVar4 + 1;
            uVar7 = uVar12;
          }
          uVar12 = uVar7;
        } while (uVar10 <= uVar7);
      }
    }
  }
  iVar9 = FUN_0012a960();
  if (iVar9 != 0) {
LAB_0012a878:
    iVar9 = FUN_00113a80(param_1,iVar9);
    iVar8 = (uint)*(ushort *)(param_4 + 6) - (uint)*(ushort *)(param_4 + 4);
    if ((uint)*(ushort *)(param_4 + 4) <= (uint)*(ushort *)(param_4 + 6) && iVar8 != 0) {
      iVar5 = iVar9 * 100;
      iVar9 = 0;
      if (iVar8 != 0) {
        iVar9 = iVar5 / iVar8;
      }
    }
    iVar11 = iVar9 + iVar11;
  }
  return iVar11;
}

