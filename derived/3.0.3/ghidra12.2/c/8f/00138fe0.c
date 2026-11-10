
void FUN_00138fe0(long param_1,byte *param_2,long param_3,char param_4,int param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  byte *pbVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined2 auStack_d0 [56];
  
  puVar15 = auStack_d0;
  puVar16 = auStack_d0;
  uVar11 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  if (param_4 == '\0') {
    iVar17 = -2;
  }
  else {
    if (param_4 != '\x01') goto LAB_00139058;
    iVar17 = -1;
  }
  *(ushort *)(param_3 + 8) =
       *(byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x28) << 0x18 |
                            (ulong)*(byte *)(param_1 + 0x29) << 0x10 |
                            (ulong)*(byte *)(param_1 + 0x2a) << 8 | (ulong)*(byte *)(param_1 + 0x2b)
                           ) + (ulong)(uint)(iVar17 + param_5 * 2)) & 0x3f;
LAB_00139058:
  lVar1 = 8;
  if (uVar11 == 0x50001) {
    lVar1 = 4;
  }
  lVar2 = 9;
  if (uVar11 == 0x50001) {
    lVar2 = 5;
  }
  bVar8 = param_2[lVar1];
  bVar9 = param_2[lVar2];
  if (*(byte *)(param_1 + 0x4b) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = CONCAT11(bVar8,bVar9) >> (ulong)(0x10 - *(byte *)(param_1 + 0x4b) & 0x1f);
  }
  *(ushort *)(param_3 + 0xe) = uVar13;
  bVar3 = *(byte *)(param_1 + 0x4a);
  pbVar14 = (byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x44) << 0x18 |
                                (ulong)*(byte *)(param_1 + 0x45) << 0x10 |
                                (ulong)*(byte *)(param_1 + 0x46) << 8 |
                               (ulong)*(byte *)(param_1 + 0x47)) + (ulong)uVar13 * (ulong)bVar3);
  bVar4 = *pbVar14;
  uVar13 = (ushort)bVar4;
  if (bVar3 == 2) {
    uVar13 = CONCAT11(bVar4,pbVar14[1]);
  }
  *(ushort *)(param_3 + 0x12) = uVar13;
  if (*(byte *)(param_1 + 0x4f) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0x10 - *(byte *)(param_1 + 0x4f);
    uVar12 = (uint)(ushort)(CONCAT11(bVar8,bVar9) >>
                           (ulong)(uVar12 - *(byte *)(param_1 + 0x4b) & 0x1f)) &
             0xffffU >> (ulong)(uVar12 & 0x1f);
  }
  *(short *)(param_3 + 0x10) = (short)uVar12;
  pbVar14 = (byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x44) << 0x18 |
                                (ulong)*(byte *)(param_1 + 0x45) << 0x10 |
                                (ulong)*(byte *)(param_1 + 0x46) << 8 |
                               (ulong)*(byte *)(param_1 + 0x47)) +
                    (ulong)(uVar12 * *(byte *)(param_1 + 0x4e) +
                           ((int)(short)((ushort)*(byte *)(param_1 + 0x48) << 8) |
                           (uint)*(byte *)(param_1 + 0x49)) * (uint)bVar3));
  bVar8 = *pbVar14;
  uVar13 = (ushort)bVar8;
  if (*(byte *)(param_1 + 0x4e) == 2) {
    uVar13 = CONCAT11(bVar8,pbVar14[1]);
  }
  *(ushort *)(param_3 + 0x14) = uVar13;
  if (uVar11 == 0x50001) {
    bVar8 = *param_2;
    if ((bVar8 & 0x7f) == 0) {
      uVar11 = 0;
    }
    else {
      uVar5 = *(undefined1 *)(param_1 + 0x76);
      uVar6 = *(undefined1 *)(param_1 + 0x77);
      bVar9 = *(byte *)(param_1 + 0x70);
      bVar3 = *(byte *)(param_1 + 0x71);
      bVar4 = *(byte *)(param_1 + 0x72);
      bVar7 = *(byte *)(param_1 + 0x73);
      uVar13 = 0;
      pbVar14 = (byte *)(param_1 + ((ulong)*(byte *)(param_1 + 0x24) << 0x18 |
                                    (ulong)*(byte *)(param_1 + 0x25) << 0x10 |
                                    (ulong)*(byte *)(param_1 + 0x26) << 8 |
                                   (ulong)*(byte *)(param_1 + 0x27)) +
                        ((ulong)param_2[1] << 0x10 | (ulong)param_2[2] << 8 | (ulong)param_2[3]));
      uVar11 = 0;
      do {
        pbVar10 = (byte *)(param_1 + ((ulong)bVar9 << 0x18 | (ulong)bVar3 << 0x10 |
                                      (ulong)bVar4 << 8 | (ulong)bVar7) +
                          (ulong)CONCAT11(uVar5,uVar6) * (ulong)*pbVar14);
        if ((*pbVar10 & 0xfc) == 0xd8) {
          iVar17 = 1;
          if (*(short *)(pbVar10 + 2) != 0) {
            iVar17 = 2;
          }
        }
        else {
          iVar17 = 1;
        }
        uVar12 = iVar17 * 2 + (uVar11 & 0xffff);
        puVar16 = puVar15;
        if (0x6f < uVar12) goto LAB_001392b0;
        FUN_00100660(puVar15,pbVar10,iVar17 * 2);
        puVar15 = puVar15 + (byte)iVar17;
        uVar13 = uVar13 + 1;
        pbVar14 = pbVar14 + 1;
        uVar11 = uVar12;
      } while (uVar13 < (bVar8 & 0x7f));
      puVar16 = puVar15;
    }
LAB_001392b0:
    uVar13 = (ushort)(uVar11 >> 1) & 0x7fff;
    *puVar16 = 0;
    *(ushort *)(param_3 + 10) = uVar13;
  }
  else {
    *(ushort *)(param_3 + 10) = param_2[4] >> 1 & 0x3f;
    uVar13 = *param_2 >> 1 & 0x3f;
  }
  *(ushort *)(param_3 + 0xc) = uVar13;
  return;
}

