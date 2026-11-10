
undefined8 FUN_0010f320(long *param_1,short *param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined1 *puVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  
  lVar6 = *(long *)(param_2 + 4);
  pcVar14 = (char *)(lVar6 + ((ulong)*(byte *)(lVar6 + 0x2b) << 0x18 |
                              (ulong)*(byte *)(lVar6 + 0x2c) << 0x10 |
                              (ulong)*(byte *)(lVar6 + 0x2d) << 8 | (ulong)*(byte *)(lVar6 + 0x2e))
                    + (ulong)(uint)(*(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x1e)));
  if ((*(byte *)((long)param_2 + 0x5f) & 0xf) == 1) {
    iVar15 = 0;
    bVar8 = *(byte *)(lVar6 + 0x1c) & 3;
    if ((*(byte *)(lVar6 + 0x1c) & 3) != 0) goto LAB_0010f390;
LAB_0010f444:
    pcVar16 = (char *)(lVar6 + ((ulong)*(byte *)(lVar6 + 0xc) << 0x18 |
                                (ulong)*(byte *)(lVar6 + 0xd) << 0x10 |
                                (ulong)*(byte *)(lVar6 + 0xe) << 8 | (ulong)*(byte *)(lVar6 + 0xf))
                       + ((ulong)*(byte *)(lVar6 + 0x10) << 0x18 |
                          (ulong)*(byte *)(lVar6 + 0x11) << 0x10 |
                          (ulong)*(byte *)(lVar6 + 0x12) << 8 | (ulong)*(byte *)(lVar6 + 0x13)) +
                      0x18);
    if (pcVar16 <= pcVar14) goto LAB_0010f730;
  }
  else {
    if (*pcVar14 < '\0') goto LAB_0010f730;
    bVar2 = *(byte *)(lVar6 + 0x1c);
    bVar8 = *(byte *)(lVar6 + 0x33);
    if ((bVar2 & 3) != 0) {
      bVar8 = bVar8 + 1;
    }
    uVar11 = (ulong)*(byte *)(lVar6 + 0x32) + (ulong)*(byte *)(lVar6 + 0x30) +
             (ulong)*(byte *)(lVar6 + 0x31) + (ulong)bVar8 + 1;
    uVar9 = 0x10 - *(byte *)(lVar6 + 0x2f);
    uVar10 = (uint)uVar11;
    iVar15 = ((uint)(ushort)(CONCAT11(pcVar14[uVar11 >> 3],(pcVar14 + (uVar11 >> 3))[1]) >>
                            (ulong)(uVar9 - (uVar10 & 7) & 0x1f)) & 0xffffU >> (ulong)(uVar9 & 0x1f)
             ) + (uVar10 + *(byte *)(lVar6 + 0x2f) + 7 >> 3 & 0xff);
    pcVar14 = pcVar14 + (short)iVar15;
    bVar8 = bVar2 & 3;
    if ((bVar2 & 3) == 0) goto LAB_0010f444;
LAB_0010f390:
    pcVar16 = (char *)(lVar6 + ((ulong)*(byte *)(lVar6 + 0x52) << 0x18 |
                                (ulong)*(byte *)(lVar6 + 0x53) << 0x10 |
                                (ulong)*(byte *)(lVar6 + 0x54) << 8 | (ulong)*(byte *)(lVar6 + 0x55)
                               ));
    if (pcVar16 <= pcVar14) goto LAB_0010f730;
  }
  bVar2 = *(byte *)(lVar6 + 0x25);
  uVar9 = (uint)*(byte *)(lVar6 + 0x33);
  if (bVar8 != 0) {
    uVar9 = uVar9 + 1;
  }
  lVar13 = ((ulong)uVar9 & 0xff) + 1;
  do {
    if (*param_1 == 0) {
      uVar4 = 0;
      if (param_1[1] == 0) goto LAB_0010f684;
LAB_0010f544:
      bVar8 = *(byte *)(lVar6 + 0x31);
      uVar9 = (uint)bVar8;
      if (bVar8 != 0) {
        uVar11 = lVar13 + (ulong)*(byte *)(lVar6 + 0x32) + (ulong)*(byte *)(lVar6 + 0x30);
        uVar9 = 0x10 - bVar8;
        uVar9 = (uint)(ushort)(CONCAT11(pcVar14[uVar11 >> 3],(pcVar14 + (uVar11 >> 3))[1]) >>
                              (ulong)(uVar9 - ((uint)uVar11 & 7) & 0x1f)) &
                0xffffU >> (ulong)(uVar9 & 0x1f);
      }
      puVar7 = (undefined1 *)
               (lVar6 + ((ulong)*(byte *)(lVar6 + 0x1d) << 0x18 |
                         (ulong)*(byte *)(lVar6 + 0x1e) << 0x10 |
                         (ulong)*(byte *)(lVar6 + 0x1f) << 8 | (ulong)*(byte *)(lVar6 + 0x20)) +
               (long)(int)(((int)(short)((ushort)*(byte *)(lVar6 + 0x21) << 8) |
                           (uint)*(byte *)(lVar6 + 0x22)) + uVar9) * (ulong)bVar2);
      uVar5 = *puVar7;
      if (bVar2 != 2) goto LAB_0010f688;
      sVar3 = FUN_001139a0(param_1,uVar4,CONCAT11(uVar5,puVar7[1]));
    }
    else {
      bVar8 = *(byte *)(lVar6 + 0x30);
      uVar11 = (ulong)bVar8;
      if (bVar8 != 0) {
        uVar11 = lVar13 + (ulong)*(byte *)(lVar6 + 0x32);
        uVar9 = 0x10 - bVar8;
        uVar11 = (ulong)((uint)(ushort)(CONCAT11(pcVar14[uVar11 >> 3],(pcVar14 + (uVar11 >> 3))[1])
                                       >> (ulong)(uVar9 - ((uint)uVar11 & 7) & 0x1f)) &
                        0xffffU >> (ulong)(uVar9 & 0x1f));
      }
      pbVar12 = (byte *)(lVar6 + ((ulong)*(byte *)(lVar6 + 0x1d) << 0x18 |
                                  (ulong)*(byte *)(lVar6 + 0x1e) << 0x10 |
                                  (ulong)*(byte *)(lVar6 + 0x1f) << 8 |
                                 (ulong)*(byte *)(lVar6 + 0x20)) + uVar11 * bVar2);
      bVar8 = *pbVar12;
      uVar4 = (ushort)bVar8;
      if (bVar2 == 2) {
        uVar4 = CONCAT11(bVar8,pbVar12[1]);
      }
      if (param_1[1] != 0) goto LAB_0010f544;
LAB_0010f684:
      uVar5 = 0;
LAB_0010f688:
      sVar3 = FUN_001139a0(param_1,uVar4,uVar5);
    }
    if (sVar3 != 0) {
      lVar6 = *(long *)(param_2 + 4);
      param_2[0x2f] = 0x210;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + (int)(short)iVar15;
      uVar9 = (uint)*(byte *)(lVar6 + 0x33);
      if ((*(byte *)(lVar6 + 0x1c) & 3) != 0) {
        uVar9 = uVar9 + 1;
      }
      if (*(byte *)(lVar6 + 0x32) == 0) {
        lVar13 = 0;
      }
      else {
        uVar10 = 0x10 - *(byte *)(lVar6 + 0x32);
        lVar13 = (long)(short)(CONCAT11(pcVar14[((ulong)uVar9 & 0xff) + 1 >> 3],
                                        (pcVar14 + (((ulong)uVar9 & 0xff) + 1 >> 3))[1]) >>
                               ((ulong)(uVar10 - (uVar9 + 1 & 7)) & 0x3f) &
                              (ushort)(0xffffL >> ((ulong)uVar10 & 0x3f)));
      }
      uVar9 = (*(uint *)(lVar6 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 4) & 0xff00ff) << 8;
      uVar10 = (uint)*(byte *)(lVar6 + ((ulong)*(byte *)(lVar6 + 0x26) << 0x18 |
                                        (ulong)*(byte *)(lVar6 + 0x27) << 0x10 |
                                        (ulong)*(byte *)(lVar6 + 0x28) << 8 |
                                       (ulong)*(byte *)(lVar6 + 0x29)) + lVar13);
      if ((uVar9 >> 0x10 | uVar9 << 0x10) == 0x30000) {
        uVar4 = param_2[2];
        uVar9 = ((uint)(ushort)param_2[3] - (uint)uVar4) * (uVar10 - 0x20);
        sVar3 = uVar4 + ((short)((ulong)((long)(int)uVar9 * 0x82082083) >> 0x25) -
                        (short)((int)uVar9 >> 0x1f));
        *param_2 = sVar3;
        if ((int)(uint)uVar4 <= (int)sVar3) {
          return 1;
        }
        uVar10 = uVar9 + 0x1f;
        if (-1 < (int)uVar9) {
          uVar10 = uVar9;
        }
        sVar3 = (short)(uVar10 >> 5) - (short)((uint)(ushort)param_2[3] - (uint)uVar4);
      }
      else {
        iVar15 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_2[2]) * uVar10;
        sVar3 = param_2[2] +
                ((short)((ulong)((long)iVar15 * 0x82082083) >> 0x25) - (short)(iVar15 >> 0x1f));
      }
      *param_2 = sVar3;
      return 1;
    }
    if (*pcVar14 < '\0') break;
    lVar6 = *(long *)(param_2 + 4);
    bVar8 = *(byte *)(lVar6 + 0x33);
    if ((*(byte *)(lVar6 + 0x1c) & 3) != 0) {
      bVar8 = bVar8 + 1;
    }
    uVar11 = (ulong)*(byte *)(lVar6 + 0x32) + (ulong)*(byte *)(lVar6 + 0x30) +
             (ulong)*(byte *)(lVar6 + 0x31) + (ulong)bVar8 + 1;
    uVar10 = (uint)uVar11;
    uVar9 = 0x10 - *(byte *)(lVar6 + 0x2f);
    iVar1 = ((uint)(ushort)(CONCAT11(pcVar14[uVar11 >> 3],(pcVar14 + (uVar11 >> 3))[1]) >>
                           (ulong)(uVar9 - (uVar10 & 7) & 0x1f)) & 0xffffU >> (ulong)(uVar9 & 0x1f))
            + (uVar10 + *(byte *)(lVar6 + 0x2f) + 7 >> 3 & 0xff);
    pcVar14 = pcVar14 + (short)iVar1;
    iVar15 = iVar15 + iVar1;
  } while (pcVar14 < pcVar16);
LAB_0010f730:
  *(undefined1 *)((long)param_2 + 0x5f) = 3;
  return 0;
}

