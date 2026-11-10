
undefined8 FUN_00131e40(long param_1,int param_2,ushort *param_3,uint *param_4,undefined4 *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ushort *puVar18;
  int iVar19;
  ushort *puVar20;
  char *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  
  FUN_00100660(param_4,param_3,0x174);
  uVar13 = *param_3;
  lVar23 = *(long *)(param_1 + 0x6f4f0);
  uVar4 = *(uint *)(param_3 + 8);
  *param_5 = 0;
  uVar8 = (int)(short)((ushort)*(byte *)(lVar23 + 0x24) << 8) | (uint)*(byte *)(lVar23 + 0x25);
  uVar9 = (int)(short)((ushort)*(byte *)(lVar23 + 0x26) << 8) | (uint)*(byte *)(lVar23 + 0x27);
  uVar14 = (uint)uVar13;
  if ((uVar14 == uVar9) && (uVar8 == uVar4 >> 0x10)) {
    uVar14 = uVar4 & 0xffff;
  }
  lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x14) << 0x18 |
                     (ulong)*(byte *)(lVar23 + 0x15) << 0x10 | (ulong)*(byte *)(lVar23 + 0x16) << 8
                    | (ulong)*(byte *)(lVar23 + 0x17));
  cVar7 = *(char *)(lVar17 + (ulong)(uVar14 << 2) + -4);
  if (cVar7 == '\x02') {
    lVar12 = (long)(int)((uint)uVar13 * 4 + -4);
    lVar17 = lVar17 + lVar12;
    pbVar1 = (byte *)(lVar23 + ((ulong)*(byte *)(lVar23 + 0x1c) << 0x18 |
                                (ulong)*(byte *)(lVar23 + 0x1d) << 0x10 |
                                (ulong)*(byte *)(lVar23 + 0x1e) << 8 |
                               (ulong)*(byte *)(lVar23 + 0x1f)) +
                     ((ulong)*(byte *)(lVar17 + 1) << 0x10 | (ulong)*(byte *)(lVar17 + 2) << 8 |
                     (ulong)*(byte *)(lVar17 + 3)));
    uVar16 = (long)(int)((uint)*pbVar1 << 0x18) | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
             (ulong)pbVar1[3];
    if (0 < (int)uVar16) {
      lVar17 = 0;
      do {
        uVar24 = (ulong)(uint)((int)lVar17 * 0xc);
        uVar22 = (ulong)(pbVar1[uVar24 + 0xb] >> 1) & 0x3f;
        iVar15 = (int)uVar22;
        if (iVar15 == 0) {
          iVar19 = 0;
LAB_00132110:
          if (iVar19 == iVar15) {
LAB_00132134:
            uVar16 = (ulong)(uint)((param_2 + -1) * 0x14);
            pbVar1 = (byte *)(lVar23 + ((ulong)*(byte *)(lVar23 + 0x18) << 0x18 |
                                        (ulong)*(byte *)(lVar23 + 0x19) << 0x10 |
                                        (ulong)*(byte *)(lVar23 + 0x1a) << 8 |
                                       (ulong)*(byte *)(lVar23 + 0x1b)) +
                              ((ulong)pbVar1[uVar24 + 0xc] << 0x18 |
                               (ulong)pbVar1[uVar24 + 0xd] << 0x10 |
                               (ulong)pbVar1[uVar24 + 0xe] << 8 | (ulong)pbVar1[uVar24 + 0xf]) +
                             uVar16);
            if (0x6f < pbVar1[3]) {
              return 0;
            }
            bVar10 = pbVar1[3] >> 1;
            FUN_00100380((long)param_4 + (long)(int)((uint)param_3[5] - iVar15) * 2 + 0x20,
                         lVar23 + ((ulong)*(byte *)(lVar23 + 0x20) << 0x18 |
                                   (ulong)*(byte *)(lVar23 + 0x21) << 0x10 |
                                   (ulong)*(byte *)(lVar23 + 0x22) << 8 |
                                  (ulong)*(byte *)(lVar23 + 0x23)) +
                         ((ulong)*pbVar1 << 0x10 | (ulong)pbVar1[1] << 8 | (ulong)pbVar1[2]),bVar10)
            ;
            *(undefined2 *)
             ((long)param_4 + (long)(int)(((uint)bVar10 - iVar15) + (uint)param_3[5]) * 2 + 0x20) =
                 0;
            lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x14) << 0x18 |
                               (ulong)*(byte *)(lVar23 + 0x15) << 0x10 |
                               (ulong)*(byte *)(lVar23 + 0x16) << 8 |
                              (ulong)*(byte *)(lVar23 + 0x17)) + lVar12;
            lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x1c) << 0x18 |
                               (ulong)*(byte *)(lVar23 + 0x1d) << 0x10 |
                               (ulong)*(byte *)(lVar23 + 0x1e) << 8 |
                              (ulong)*(byte *)(lVar23 + 0x1f)) +
                     ((ulong)*(byte *)(lVar17 + 1) << 0x10 | (ulong)*(byte *)(lVar17 + 2) << 8 |
                     (ulong)*(byte *)(lVar17 + 3)) + uVar24;
            lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x18) << 0x18 |
                               (ulong)*(byte *)(lVar23 + 0x19) << 0x10 |
                               (ulong)*(byte *)(lVar23 + 0x1a) << 8 |
                              (ulong)*(byte *)(lVar23 + 0x1b)) +
                     ((ulong)*(byte *)(lVar17 + 0xc) << 0x18 |
                      (ulong)*(byte *)(lVar17 + 0xd) << 0x10 | (ulong)*(byte *)(lVar17 + 0xe) << 8 |
                     (ulong)*(byte *)(lVar17 + 0xf)) + uVar16;
            if (0x6f < *(byte *)(lVar17 + 0xb)) {
              return 0;
            }
            bVar11 = *(byte *)(lVar17 + 0xb) >> 1;
            FUN_00100380((long)param_4 + (long)(int)((uint)param_3[5] - iVar15) * 2 + 0x90,
                         lVar23 + ((ulong)*(byte *)(lVar23 + 0x20) << 0x18 |
                                   (ulong)*(byte *)(lVar23 + 0x21) << 0x10 |
                                   (ulong)*(byte *)(lVar23 + 0x22) << 8 |
                                  (ulong)*(byte *)(lVar23 + 0x23)) +
                         ((ulong)*(byte *)(lVar17 + 8) << 0x10 | (ulong)*(byte *)(lVar17 + 9) << 8 |
                         (ulong)*(byte *)(lVar17 + 10)));
            *(undefined2 *)
             ((long)param_4 + (long)(int)(((uint)bVar11 - iVar15) + (uint)param_3[5]) * 2 + 0x90) =
                 0;
            lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x14) << 0x18 |
                               (ulong)*(byte *)(lVar23 + 0x15) << 0x10 |
                               (ulong)*(byte *)(lVar23 + 0x16) << 8 |
                              (ulong)*(byte *)(lVar23 + 0x17)) + lVar12;
            lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x1c) << 0x18 |
                               (ulong)*(byte *)(lVar23 + 0x1d) << 0x10 |
                               (ulong)*(byte *)(lVar23 + 0x1e) << 8 |
                              (ulong)*(byte *)(lVar23 + 0x1f)) +
                     ((ulong)*(byte *)(lVar17 + 1) << 0x10 | (ulong)*(byte *)(lVar17 + 2) << 8 |
                     (ulong)*(byte *)(lVar17 + 3)) + uVar24;
            lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x18) << 0x18 |
                               (ulong)*(byte *)(lVar23 + 0x19) << 0x10 |
                               (ulong)*(byte *)(lVar23 + 0x1a) << 8 |
                              (ulong)*(byte *)(lVar23 + 0x1b)) +
                     ((ulong)*(byte *)(lVar17 + 0xc) << 0x18 |
                      (ulong)*(byte *)(lVar17 + 0xd) << 0x10 | (ulong)*(byte *)(lVar17 + 0xe) << 8 |
                     (ulong)*(byte *)(lVar17 + 0xf)) + uVar16;
            uVar14 = (uint)*(byte *)(lVar17 + 4) << 0x18 | (uint)*(byte *)(lVar17 + 5) << 0x10;
            bVar5 = *(byte *)(lVar17 + 6);
            bVar6 = *(byte *)(lVar17 + 7);
            param_4[4] = uVar14 | (uint)bVar5 << 8 | (uint)bVar6;
            if ((uVar8 == uVar14 >> 0x10) && (CONCAT11(bVar5,bVar6) == uVar9)) {
              *(ushort *)(param_4 + 2) = (ushort)bVar10;
              *(ushort *)((long)param_4 + 10) = (ushort)bVar11;
              lVar12 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x14) << 0x18 |
                                 (ulong)*(byte *)(lVar23 + 0x15) << 0x10 |
                                 (ulong)*(byte *)(lVar23 + 0x16) << 8 |
                                (ulong)*(byte *)(lVar23 + 0x17)) + lVar12;
              lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x1c) << 0x18 |
                                 (ulong)*(byte *)(lVar23 + 0x1d) << 0x10 |
                                 (ulong)*(byte *)(lVar23 + 0x1e) << 8 |
                                (ulong)*(byte *)(lVar23 + 0x1f)) +
                       ((ulong)*(byte *)(lVar12 + 1) << 0x10 | (ulong)*(byte *)(lVar12 + 2) << 8 |
                       (ulong)*(byte *)(lVar12 + 3)) + uVar24;
              uVar14 = *(uint *)(lVar23 + ((ulong)*(byte *)(lVar23 + 0x18) << 0x18 |
                                           (ulong)*(byte *)(lVar23 + 0x19) << 0x10 |
                                           (ulong)*(byte *)(lVar23 + 0x1a) << 8 |
                                          (ulong)*(byte *)(lVar23 + 0x1b)) +
                                 ((ulong)*(byte *)(lVar17 + 0xc) << 0x18 |
                                  (ulong)*(byte *)(lVar17 + 0xd) << 0x10 |
                                  (ulong)*(byte *)(lVar17 + 0xe) << 8 |
                                 (ulong)*(byte *)(lVar17 + 0xf)) + uVar16 + 0xc);
              param_4[4] = 0;
              uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
              uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
              uVar13 = 0;
            }
            else {
              lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x14) << 0x18 |
                                 (ulong)*(byte *)(lVar23 + 0x15) << 0x10 |
                                 (ulong)*(byte *)(lVar23 + 0x16) << 8 |
                                (ulong)*(byte *)(lVar23 + 0x17)) + lVar12;
              lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x1c) << 0x18 |
                                 (ulong)*(byte *)(lVar23 + 0x1d) << 0x10 |
                                 (ulong)*(byte *)(lVar23 + 0x1e) << 8 |
                                (ulong)*(byte *)(lVar23 + 0x1f)) +
                       ((ulong)*(byte *)(lVar17 + 1) << 0x10 | (ulong)*(byte *)(lVar17 + 2) << 8 |
                       (ulong)*(byte *)(lVar17 + 3)) + uVar24;
              lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x18) << 0x18 |
                                 (ulong)*(byte *)(lVar23 + 0x19) << 0x10 |
                                 (ulong)*(byte *)(lVar23 + 0x1a) << 8 |
                                (ulong)*(byte *)(lVar23 + 0x1b)) +
                       ((ulong)*(byte *)(lVar17 + 0xc) << 0x18 |
                        (ulong)*(byte *)(lVar17 + 0xd) << 0x10 | (ulong)*(byte *)(lVar17 + 0xe) << 8
                       | (ulong)*(byte *)(lVar17 + 0xf)) + uVar16;
              uVar13 = CONCAT11(*(undefined1 *)(lVar17 + 0x12),*(undefined1 *)(lVar17 + 0x13)) >> 1
                       & 0xff;
              *(ushort *)(param_4 + 2) = bVar10 - uVar13;
              *(ushort *)((long)param_4 + 10) = bVar11 - uVar13;
              lVar12 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x14) << 0x18 |
                                 (ulong)*(byte *)(lVar23 + 0x15) << 0x10 |
                                 (ulong)*(byte *)(lVar23 + 0x16) << 8 |
                                (ulong)*(byte *)(lVar23 + 0x17)) + lVar12;
              lVar17 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x1c) << 0x18 |
                                 (ulong)*(byte *)(lVar23 + 0x1d) << 0x10 |
                                 (ulong)*(byte *)(lVar23 + 0x1e) << 8 |
                                (ulong)*(byte *)(lVar23 + 0x1f)) +
                       ((ulong)*(byte *)(lVar12 + 1) << 0x10 | (ulong)*(byte *)(lVar12 + 2) << 8 |
                       (ulong)*(byte *)(lVar12 + 3)) + uVar24;
              uVar14 = *(uint *)(lVar23 + ((ulong)*(byte *)(lVar23 + 0x18) << 0x18 |
                                           (ulong)*(byte *)(lVar23 + 0x19) << 0x10 |
                                           (ulong)*(byte *)(lVar23 + 0x1a) << 8 |
                                          (ulong)*(byte *)(lVar23 + 0x1b)) +
                                 ((ulong)*(byte *)(lVar17 + 0xc) << 0x18 |
                                  (ulong)*(byte *)(lVar17 + 0xd) << 0x10 |
                                  (ulong)*(byte *)(lVar17 + 0xe) << 8 |
                                 (ulong)*(byte *)(lVar17 + 0xf)) + uVar16 + 0xc);
              uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
              uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
            }
            *param_4 = uVar14;
            *(ushort *)(param_4 + 5) = uVar13;
            *(ushort *)((long)param_4 + 0x16) = uVar13;
            *param_5 = 2;
            return 1;
          }
        }
        else {
          pbVar2 = pbVar1 + uVar24 + 8;
          puVar18 = param_3 + (ulong)param_3[5] + (0x48 - uVar22);
          pcVar3 = (char *)(lVar23 + ((ulong)*(byte *)(lVar23 + 0x20) << 0x18 |
                                      (ulong)*(byte *)(lVar23 + 0x21) << 0x10 |
                                      (ulong)*(byte *)(lVar23 + 0x22) << 8 |
                                     (ulong)*(byte *)(lVar23 + 0x23)) +
                           ((ulong)*pbVar2 << 0x10 | (ulong)pbVar2[1] << 8 | (ulong)pbVar2[2]));
          if ((char)*puVar18 == *pcVar3) {
            iVar19 = 0;
            puVar20 = puVar18;
            pcVar21 = pcVar3;
            do {
              if (*(char *)((long)puVar20 + 1) != pcVar21[1]) break;
              uVar14 = iVar19 + 1;
              iVar19 = (int)(short)uVar14;
              if (iVar15 <= iVar19) break;
              uVar22 = -((ulong)(uVar14 >> 0xf) & 1) & 0xfffffffffffe0000 |
                       ((ulong)uVar14 & 0xffff) << 1;
              puVar20 = (ushort *)((long)puVar18 + uVar22);
              pcVar21 = pcVar3 + uVar22;
            } while ((char)*puVar20 == *pcVar21);
            goto LAB_00132110;
          }
          if (iVar15 == 0) goto LAB_00132134;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < (long)uVar16);
    }
  }
  else if (cVar7 == '\x01') {
    lVar17 = lVar17 + (ulong)uVar13 * 4;
    pbVar1 = (byte *)(lVar23 + ((ulong)*(byte *)(lVar23 + 0x18) << 0x18 |
                                (ulong)*(byte *)(lVar23 + 0x19) << 0x10 |
                                (ulong)*(byte *)(lVar23 + 0x1a) << 8 |
                               (ulong)*(byte *)(lVar23 + 0x1b)) +
                      ((ulong)*(byte *)(lVar17 + -3) << 0x10 | (ulong)*(byte *)(lVar17 + -2) << 8 |
                      (ulong)*(byte *)(lVar17 + -1)) + (ulong)(uint)((param_2 + -1) * 8));
    uVar16 = (ulong)*pbVar1 << 0x10 | (ulong)pbVar1[1] << 8 | (ulong)pbVar1[2];
    iVar15 = (int)uVar16;
    if (iVar15 == 0) {
      lVar23 = 0;
    }
    else {
      if (iVar15 == 0xffffff) {
        return 0;
      }
      lVar23 = lVar23 + ((ulong)*(byte *)(lVar23 + 0x20) << 0x18 |
                         (ulong)*(byte *)(lVar23 + 0x21) << 0x10 |
                         (ulong)*(byte *)(lVar23 + 0x22) << 8 | (ulong)*(byte *)(lVar23 + 0x23)) +
               uVar16;
    }
    bVar10 = pbVar1[3] >> 1;
    uVar16 = (ulong)bVar10;
    if (((uint)param_3[4] + (uint)bVar10 < 0x38) && ((uint)param_3[5] + (uint)bVar10 < 0x38)) {
      uVar14 = (uint)pbVar1[4] << 0x18 | (uint)pbVar1[5] << 0x10;
      bVar5 = pbVar1[6];
      bVar6 = pbVar1[7];
      param_4[4] = uVar14 | (uint)bVar5 << 8 | (uint)bVar6;
      if (uVar8 == uVar14 >> 0x10 && CONCAT11(bVar5,bVar6) == uVar9) {
        *(undefined2 *)((long)param_4 + (param_3[4] + uVar16) * 2 + 0x20) = 0;
        *(undefined2 *)((long)param_4 + (param_3[5] + uVar16) * 2 + 0x90) = 0;
        *(ushort *)(param_4 + 5) = (ushort)bVar10;
        *(ushort *)((long)param_4 + 0x16) = (ushort)bVar10;
        param_4[4] = 0;
      }
      else {
        if (lVar23 != 0) {
          FUN_00100380((long)param_4 + (ulong)param_3[4] * 2 + 0x20,lVar23,uVar16);
          FUN_00100380((long)param_4 + (ulong)param_3[5] * 2 + 0x90,lVar23,uVar16);
        }
        *(undefined2 *)((long)param_4 + (param_3[4] + uVar16) * 2 + 0x20) = 0;
        *(undefined2 *)((long)param_4 + (param_3[5] + uVar16) * 2 + 0x90) = 0;
        *(ushort *)(param_4 + 5) = (ushort)bVar10;
        *(ushort *)((long)param_4 + 0x16) = (ushort)bVar10;
      }
      *param_5 = 1;
      return 1;
    }
  }
  return 0;
}

