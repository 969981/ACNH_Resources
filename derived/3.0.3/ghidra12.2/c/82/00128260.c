
undefined8 FUN_00128260(long *param_1,long param_2,short *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ushort uVar11;
  ushort uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  byte *local_38;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    uVar10 = 0x99a3;
  }
  else {
    lVar13 = *param_1;
    lVar2 = *(long *)(lVar13 + 0x50) + (ulong)(*(int *)(param_2 + 0x4c) * 4 - 4);
    iVar4 = *(int *)(lVar13 + 0x70);
    lVar18 = *(long *)(lVar13 + 8);
    lVar13 = *(long *)(lVar13 + 0x28);
    uVar17 = (uint)*(byte *)(lVar2 + 1) << 0x10 | (uint)*(byte *)(lVar2 + 2) << 8 |
             (uint)*(byte *)(lVar2 + 3);
    *(uint *)(param_2 + 0x40) = uVar17;
    *(uint *)(param_2 + 0x44) = uVar17;
    *(uint *)(param_2 + 0x48) = uVar17;
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_2 + 0x5c) = 0;
    iVar9 = 10;
    if (iVar4 == 0x40050001) {
      iVar9 = 6;
    }
    uVar8 = (*(uint *)(lVar18 + 0x20) & 0xff00ff00) >> 8 |
            (*(uint *)(lVar18 + 0x20) & 0xff00ff) << 8;
    uVar5 = *(uint *)(*param_1 + 8);
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar15 = 6;
    if ((uVar5 >> 0x10 | uVar5 << 0x10) != 0x40050001) {
      uVar15 = 10;
    }
    iVar9 = FUN_0010dbc0(*param_1,5,(uVar8 >> 0x10 | uVar8 << 0x10) + (uVar17 - 1) * iVar9,uVar15,
                         &local_38);
    if (iVar9 < 0) {
      uVar10 = 0xbda3;
    }
    else {
      bVar6 = *(byte *)(lVar18 + 0x4a);
      bVar7 = *(byte *)(lVar18 + 0x4b);
      uVar14 = (ulong)bVar7;
      if (bVar7 != 0) {
        lVar2 = 8;
        if (iVar4 == 0x40050001) {
          lVar2 = 4;
        }
        lVar3 = 9;
        if (iVar4 == 0x40050001) {
          lVar3 = 5;
        }
        uVar14 = (ulong)(ushort)(CONCAT11(local_38[lVar2],local_38[lVar3]) >>
                                (ulong)(0x10 - bVar7 & 0x1f));
      }
      pbVar16 = (byte *)(lVar13 + uVar14 * bVar6);
      bVar7 = *pbVar16;
      uVar12 = (ushort)bVar7;
      if (bVar6 == 2) {
        uVar12 = CONCAT11(bVar7,pbVar16[1]);
      }
      *(ushort *)(param_2 + 0x70) = uVar12 << 7 | *(ushort *)(param_2 + 0x70) & 0x7f;
      bVar7 = *(byte *)(lVar18 + 0x4f);
      uVar17 = (uint)bVar7;
      if (bVar7 != 0) {
        lVar2 = 8;
        if (iVar4 == 0x40050001) {
          lVar2 = 4;
        }
        lVar3 = 9;
        if (iVar4 == 0x40050001) {
          lVar3 = 5;
        }
        uVar17 = 0x10 - bVar7;
        uVar17 = 0xffffU >> (ulong)(uVar17 & 0x1f) &
                 (uint)(ushort)(CONCAT11(local_38[lVar2],local_38[lVar3]) >>
                               (ulong)(uVar17 - *(byte *)(lVar18 + 0x4b) & 0x1f));
      }
      pbVar16 = (byte *)(lVar13 + (ulong)(uVar17 * *(byte *)(lVar18 + 0x4e) +
                                         ((int)(short)((ushort)*(byte *)(lVar18 + 0x48) << 8) |
                                         (uint)*(byte *)(lVar18 + 0x49)) * (uint)bVar6));
      bVar6 = *pbVar16;
      uVar11 = (ushort)bVar6;
      if (*(byte *)(lVar18 + 0x4e) == 2) {
        uVar11 = CONCAT11(bVar6,pbVar16[1]);
      }
      *(ushort *)(param_2 + 0x72) = uVar11 << 7 | *(ushort *)(param_2 + 0x72) & 0x7f;
      uVar17 = (uint)*param_3;
      if (999 < *param_3) {
        uVar17 = 1000;
      }
      *(ushort *)(param_2 + 8) = (ushort)uVar17 & ((ushort)(uVar17 >> 0xf) ^ 0xffff);
      bVar1 = iVar4 != 0x40050001;
      *(ushort *)(param_2 + 0x70) = uVar12 << 7 | (ushort)((*local_38 & 0x7f) >> bVar1) & 0xff;
      if (iVar4 == 0x40050001) {
        bVar6 = *local_38 & 0x7f;
        uVar12 = *local_38 & 0x7f;
      }
      else {
        bVar6 = local_38[4] >> 1 & 0x3f;
        uVar12 = local_38[4] >> 1 & 0x3f;
      }
      if (bVar6 == 0) {
        uVar12 = (ushort)((*local_38 & 0x7f) >> (ulong)bVar1);
      }
      uVar10 = 1;
      *(undefined1 *)(param_2 + 0x74) = 0;
      *(ushort *)(param_2 + 0x72) = uVar11 << 7 | uVar12 & 0x7f;
    }
  }
  return uVar10;
}

