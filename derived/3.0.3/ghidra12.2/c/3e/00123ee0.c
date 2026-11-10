
undefined8 FUN_00123ee0(long *param_1,short *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  ushort uVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  char *local_68;
  
  lVar16 = *(long *)(param_2 + 4);
  lVar29 = *(long *)(lVar16 + 8);
  uVar28 = (*(uint *)(lVar29 + 0x20) & 0xff00ff00) >> 8 | (*(uint *)(lVar29 + 0x20) & 0xff00ff) << 8
  ;
  uVar20 = uVar28 >> 0x10 | uVar28 << 0x10;
  lVar21 = *(long *)(lVar16 + 0x28);
  lVar22 = *(long *)(param_2 + 0x10);
  uVar28 = *(uint *)(param_2 + 0x1c);
  iVar14 = *(int *)(lVar16 + 0x70);
  lVar22 = lVar22 + ((ulong)*(byte *)(lVar22 + 0x10) << 0x18 |
                     (ulong)*(byte *)(lVar22 + 0x11) << 0x10 | (ulong)*(byte *)(lVar22 + 0x12) << 8
                    | (ulong)*(byte *)(lVar22 + 0x13));
  pbVar24 = (byte *)(lVar22 + (ulong)(uVar28 * 4 - 4));
  bVar6 = pbVar24[1];
  bVar7 = pbVar24[2];
  bVar8 = pbVar24[3];
  iVar12 = FUN_0010dbc0(lVar16,5,uVar20,1,&local_68);
  if (-1 < iVar12) {
    cVar9 = *local_68;
    iVar12 = 10;
    if (iVar14 == 0x40050001) {
      iVar12 = 6;
    }
    uVar19 = *(uint *)(*(long *)(param_2 + 4) + 8);
    uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
    uVar15 = 6;
    if ((uVar19 >> 0x10 | uVar19 << 0x10) != 0x40050001) {
      uVar15 = 10;
    }
    iVar13 = FUN_0010dbc0(*(long *)(param_2 + 4),5,
                          uVar20 + (((uint)bVar6 << 0x10 | (uint)bVar7 << 8 | (uint)bVar8) - 1) *
                                   iVar12,uVar15,&local_68);
    if (-1 < iVar13) {
      bVar6 = *(byte *)((long)param_2 + 0x5f) & 0xf;
      uVar19 = *(uint *)(param_2 + 0x1c);
      if ((char)param_1[10] != '\x03') {
        if (bVar6 == 1) {
          param_2[0x2f] = 0x210;
        }
        else {
          if (*(char *)((long)param_1 + 0x51) == '\0') {
            uVar20 = *(uint *)(param_2 + 0x1e);
            uVar19 = *(uint *)(param_2 + 0x20);
            if (uVar19 < uVar20) goto LAB_001243d8;
            uVar26 = uVar20 * 4 - 4;
            uVar27 = 0xffffd8f0;
            uVar25 = 0;
            do {
              while (-1 < (char)*(byte *)(lVar22 + (ulong)uVar26)) {
                uVar20 = uVar20 + 1;
                uVar26 = uVar26 + 4;
                if (uVar19 < uVar20) goto LAB_001242b0;
              }
              uVar3 = *(byte *)(lVar22 + (ulong)uVar26) & 0x3f;
              if ((uVar28 < uVar20) && (uVar3 == (*pbVar24 & 0x3f))) {
                lVar22 = lVar22 + (ulong)uVar26;
                param_2[0x2f] = 0x210;
                *(uint *)(param_2 + 0x1c) = uVar20;
                uVar15 = FUN_0012a960(*(undefined8 *)(param_2 + 4),
                                      (uint)*(byte *)(lVar22 + 1) << 0x10 |
                                      (uint)*(byte *)(lVar22 + 2) << 8 | (uint)*(byte *)(lVar22 + 3)
                                     );
                *(undefined4 *)(param_2 + 0x2c) = uVar15;
                return 1;
              }
              uVar4 = uVar20;
              if ((*pbVar24 & 0x3f) <= uVar3 || (int)uVar3 <= (int)uVar27) {
                uVar4 = uVar25;
                uVar3 = uVar27;
              }
              uVar27 = uVar3;
              uVar20 = uVar20 + 1;
              uVar26 = uVar26 + 4;
              uVar25 = uVar4;
            } while (uVar20 <= uVar19);
LAB_001242b0:
            if (uVar25 == 0) goto LAB_001243d8;
            *(undefined1 *)((long)param_2 + 0x5f) = 2;
            *(uint *)(param_2 + 0x1c) = uVar25;
            pbVar24 = (byte *)(lVar22 + (ulong)(uVar25 * 4 - 4));
          }
          else {
            if (uVar19 == *(uint *)(param_2 + 0x20)) goto LAB_001243d8;
            *(uint *)(param_2 + 0x1c) = uVar19 + 1;
            uVar30 = (ulong)(uVar19 << 2);
            *(undefined1 *)((long)param_2 + 0x5f) = 2;
LAB_001242e0:
            pbVar24 = (byte *)(lVar22 + uVar30);
            uVar27 = *pbVar24 & 0x3f;
          }
          uVar15 = FUN_0012a960(*(undefined8 *)(param_2 + 4),
                                (uint)pbVar24[1] << 0x10 | (uint)pbVar24[2] << 8 | (uint)pbVar24[3])
          ;
          *(undefined1 *)(param_2 + 0x2f) = 0x10;
          iVar14 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_2[2]) * uVar27;
          sVar10 = param_2[2] +
                   ((short)((ulong)((long)iVar14 * 0x51eb851f) >> 0x25) - (short)(iVar14 >> 0x1f));
          *(undefined4 *)(param_2 + 0x2c) = uVar15;
          *param_2 = sVar10;
          sVar11 = param_2[0x35];
          if ((sVar11 <= sVar10) && (sVar11 = param_2[0x34], sVar10 <= param_2[0x34])) {
            sVar11 = sVar10;
          }
          *param_2 = sVar11;
        }
        return 1;
      }
      uVar28 = uVar19;
      if (bVar6 != 1) {
        if (uVar19 == *(uint *)(param_2 + 0x20)) goto LAB_001243d8;
        if (*(char *)((long)param_1 + 0x51) == '\0') {
          uVar28 = uVar19 + 1;
          if (*(uint *)(param_2 + 0x20) < uVar28) goto LAB_001243d8;
          lVar16 = lVar22 + (ulong)(uVar19 << 2);
          uVar19 = *(uint *)(*(long *)(param_2 + 4) + 8);
          uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
          uVar15 = 6;
          if ((uVar19 >> 0x10 | uVar19 << 0x10) != 0x40050001) {
            uVar15 = 10;
          }
          iVar13 = FUN_0010dbc0(*(long *)(param_2 + 4),5,
                                uVar20 + (((uint)*(byte *)(lVar16 + 1) << 0x10 |
                                           (uint)*(byte *)(lVar16 + 2) << 8 |
                                          (uint)*(byte *)(lVar16 + 3)) - 1) * iVar12,uVar15,
                                &local_68);
          if (iVar13 < 0) goto LAB_001243d8;
        }
      }
      bVar6 = *(byte *)(lVar29 + 0x4a);
      lVar16 = 8;
      if (iVar14 == 0x40050001) {
        lVar16 = 4;
      }
      bVar7 = *(byte *)(lVar29 + 0x4e);
      lVar5 = 9;
      if (iVar14 == 0x40050001) {
        lVar5 = 5;
      }
      uVar30 = (ulong)(uVar28 * 4 - 4);
      while (uVar28 <= *(uint *)(param_2 + 0x20)) {
        if (*param_1 == 0) {
          uVar17 = 0;
          if (param_1[1] == 0) goto LAB_00124170;
LAB_001240d8:
          bVar8 = *(byte *)(lVar29 + 0x4f);
          uVar19 = (uint)bVar8;
          if (bVar8 != 0) {
            uVar19 = 0x10 - bVar8;
            uVar19 = (uint)(ushort)(CONCAT11(local_68[lVar16],local_68[lVar5]) >>
                                   (ulong)(uVar19 - *(byte *)(lVar29 + 0x4b) & 0x1f)) &
                     0xffffU >> (ulong)(uVar19 & 0x1f);
          }
          puVar1 = (undefined1 *)
                   (lVar21 + (ulong)(uVar19 * bVar7 +
                                    ((int)(short)((ushort)*(byte *)(lVar29 + 0x48) << 8) |
                                    (uint)*(byte *)(lVar29 + 0x49)) * (uint)bVar6));
          uVar18 = *puVar1;
          if (bVar7 != 2) goto LAB_00124174;
          sVar11 = FUN_001139a0(param_1,uVar17,CONCAT11(uVar18,puVar1[1]));
        }
        else {
          bVar8 = *(byte *)(lVar29 + 0x4b);
          uVar23 = (ulong)bVar8;
          if (bVar8 != 0) {
            uVar23 = (ulong)(ushort)(CONCAT11(local_68[lVar16],local_68[lVar5]) >>
                                    (ulong)(0x10 - bVar8 & 0x1f));
          }
          pbVar24 = (byte *)(lVar21 + uVar23 * bVar6);
          bVar8 = *pbVar24;
          uVar17 = (ushort)bVar8;
          if (bVar6 == 2) {
            uVar17 = CONCAT11(bVar8,pbVar24[1]);
          }
          if (param_1[1] != 0) goto LAB_001240d8;
LAB_00124170:
          uVar18 = 0;
LAB_00124174:
          sVar11 = FUN_001139a0(param_1,uVar17,uVar18);
        }
        if (sVar11 != 0) {
          *(undefined1 *)((long)param_2 + 0x5f) = 2;
          *(uint *)(param_2 + 0x1c) = uVar28;
          goto LAB_001242e0;
        }
        if ((cVar9 < '\0') || (uVar28 = uVar28 + 1, *(uint *)(param_2 + 0x20) < uVar28)) break;
        uVar30 = (ulong)((int)uVar30 + 4);
        lVar2 = lVar22 + uVar30;
        uVar19 = *(uint *)(*(long *)(param_2 + 4) + 8);
        uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
        uVar15 = 6;
        if ((uVar19 >> 0x10 | uVar19 << 0x10) != 0x40050001) {
          uVar15 = 10;
        }
        iVar14 = FUN_0010dbc0(*(long *)(param_2 + 4),5,
                              uVar20 + (((uint)*(byte *)(lVar2 + 1) << 0x10 |
                                         (uint)*(byte *)(lVar2 + 2) << 8 |
                                        (uint)*(byte *)(lVar2 + 3)) - 1) * iVar12,uVar15,&local_68);
        if (iVar14 < 0) break;
      }
    }
  }
LAB_001243d8:
  *(undefined1 *)((long)param_2 + 0x5f) = 3;
  return 0;
}

