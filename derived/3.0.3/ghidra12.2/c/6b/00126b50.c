
undefined8 FUN_00126b50(long param_1,long param_2,short *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  undefined1 uVar14;
  long lVar15;
  byte *pbVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ushort uVar29;
  byte local_158 [224];
  byte *local_78;
  byte *local_70;
  byte *local_68;
  
  lVar11 = *(long *)(param_3 + 4);
  iVar9 = *(int *)(lVar11 + 0x70);
  if (*(char *)(param_2 + 0x50) == '\x02') {
    lVar23 = *(long *)(param_2 + 0x30);
    if (((lVar23 != 0) && (lVar12 = *(long *)(param_2 + 0x38), lVar12 != 0)) &&
       (*(short *)(param_2 + 0x4c) != 0)) {
      lVar15 = *(long *)(lVar11 + 8);
      uVar28 = (*(uint *)(lVar15 + 0x5c) & 0xff00ff00) >> 8 |
               (*(uint *)(lVar15 + 0x5c) & 0xff00ff) << 8;
      uVar28 = uVar28 >> 0x10 | uVar28 << 0x10;
      goto joined_r0x00126c04;
    }
  }
  else if ((*(char *)(param_2 + 0x50) == '\x01') && (*(char *)(param_1 + 0x62751) != '\0')) {
    lVar12 = FUN_0012db90(param_1,0,0);
    lVar23 = lVar12 + 0xc;
    lVar12 = lVar12 + 0x7c;
    lVar11 = *(long *)(param_3 + 4);
    lVar15 = *(long *)(lVar11 + 8);
    uVar28 = (*(uint *)(lVar15 + 0x5c) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar15 + 0x5c) & 0xff00ff) << 8;
    uVar28 = uVar28 >> 0x10 | uVar28 << 0x10;
joined_r0x00126c04:
    if (uVar28 != 0) {
      iVar17 = 10;
      if (iVar9 == 0x40050001) {
        iVar17 = 6;
      }
      lVar18 = *(long *)(lVar11 + 0x18);
      uVar24 = 0;
      uVar21 = (*(uint *)(lVar15 + 0x20) & 0xff00ff00) >> 8 |
               (*(uint *)(lVar15 + 0x20) & 0xff00ff) << 8;
      uVar19 = (*(uint *)(lVar15 + 0x24) & 0xff00ff00) >> 8 |
               (*(uint *)(lVar15 + 0x24) & 0xff00ff) << 8;
      uVar25 = uVar19 >> 0x10 | uVar19 << 0x10;
      uVar19 = 1;
      do {
        uVar27 = uVar19 + (uVar28 - uVar19 >> 1);
        uVar26 = uVar27 - 1;
        puVar1 = (undefined1 *)(lVar18 + (ulong)(uVar26 * 6));
        uVar22 = (*(uint *)(lVar11 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar11 + 8) & 0xff00ff) << 8
        ;
        uVar10 = 6;
        if ((uVar22 >> 0x10 | uVar22 << 0x10) != 0x40050001) {
          uVar10 = 10;
        }
        iVar8 = FUN_0010dbc0(lVar11,5,(uVar21 >> 0x10 | uVar21 << 0x10) +
                                      (CONCAT21(CONCAT11(*puVar1,puVar1[1]),
                                                *(undefined1 *)(lVar18 + (ulong)(uVar26 * 6 + 2))) -
                                      1) * iVar17,uVar10,&local_68);
        if (iVar8 < 0) goto LAB_00127144;
        iVar8 = ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 | (uint)local_68[3]) + uVar25;
        if (iVar9 == 0x40050001) {
          iVar8 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),10,iVar8,*local_68 & 0x7f,&local_70);
          if (iVar8 < 0) goto LAB_00127144;
          bVar2 = *local_68;
          if ((bVar2 & 0x7f) == 0) {
            pbVar16 = local_158 + 0x70;
          }
          else {
            lVar11 = *(long *)(*(long *)(param_3 + 4) + 8);
            uVar14 = *(undefined1 *)(lVar11 + 0x76);
            uVar3 = *(undefined1 *)(lVar11 + 0x77);
            lVar11 = *(long *)(*(long *)(param_3 + 4) + 0x48);
            pbVar16 = local_158 + 0x70;
            uVar22 = 0;
            uVar29 = 0;
            pbVar20 = local_70;
            do {
              pbVar13 = (byte *)(lVar11 + (ulong)CONCAT11(uVar14,uVar3) * (ulong)*pbVar20);
              if ((*pbVar13 & 0xfc) == 0xd8) {
                iVar8 = 1;
                if (*(short *)(pbVar13 + 2) != 0) {
                  iVar8 = 2;
                }
              }
              else {
                iVar8 = 1;
              }
              uVar22 = iVar8 * 2 + (uVar22 & 0xffff);
              if (0x6f < uVar22) break;
              FUN_00100660(pbVar16,pbVar13,iVar8 * 2);
              pbVar16 = pbVar16 + (ulong)(byte)iVar8 * 2;
              uVar29 = uVar29 + 1;
              pbVar20 = pbVar20 + 1;
            } while (uVar29 < (bVar2 & 0x7f));
          }
          pbVar20 = local_158 + 0x70;
          pbVar16[0] = 0;
          pbVar16[1] = 0;
        }
        else {
          bVar2 = *local_68 >> 1;
          uVar22 = bVar2 & 0x3f;
          iVar8 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),10,iVar8,uVar22 << 1,&local_70);
          if (iVar8 < 0) goto LAB_00127144;
          if ((bVar2 & 0x3f) == 0) {
            pbVar16 = local_158 + 0x70;
          }
          else {
            pbVar16 = local_158 + 0x70;
            if (uVar22 != 1) {
              iVar8 = (bVar2 & 1) - uVar22;
              do {
                pbVar20 = local_70;
                *pbVar16 = *local_70;
                pbVar13 = local_70;
                local_70 = local_70 + 2;
                pbVar16[1] = pbVar20[1];
                pbVar16[2] = pbVar13[2];
                pbVar20 = local_70 + 2;
                pbVar16[3] = pbVar13[3];
                pbVar16 = pbVar16 + 4;
                iVar8 = iVar8 + 2;
                local_70 = pbVar20;
              } while (iVar8 != 0);
            }
            pbVar20 = local_70;
            if ((bVar2 & 1) != 0) {
              *pbVar16 = *local_70;
              pbVar16[1] = pbVar20[1];
              local_70 = local_70 + 2;
              pbVar16 = pbVar16 + 2;
            }
          }
          pbVar16[0] = 0;
          pbVar16[1] = 0;
          uVar5 = (uint)(int)(char)local_68[4] >> 1;
          uVar6 = uVar5 & 0x3f;
          if (uVar6 == 0) {
            if ((char)local_68[4] < 0) {
              pbVar20 = local_158;
              FUN_00114550(local_158 + 0x70,local_158,uVar22);
            }
            else {
              pbVar20 = local_158 + 0x70;
            }
          }
          else {
            iVar8 = FUN_0010dbc0(*(undefined8 *)(param_3 + 4),10,
                                 ((uint)local_68[5] << 0x10 | (uint)local_68[6] << 8 |
                                 (uint)local_68[7]) + uVar25,uVar6 << 1,&local_78);
            if (iVar8 < 0) goto LAB_00127144;
            uVar5 = uVar5 & 1;
            pbVar16 = local_158;
            if (uVar6 != 1) {
              iVar8 = uVar5 - uVar6;
              do {
                pbVar20 = local_78;
                *pbVar16 = *local_78;
                pbVar13 = local_78;
                local_78 = local_78 + 2;
                pbVar16[1] = pbVar20[1];
                pbVar16[2] = pbVar13[2];
                pbVar20 = local_78 + 2;
                pbVar16[3] = pbVar13[3];
                pbVar16 = pbVar16 + 4;
                iVar8 = iVar8 + 2;
                local_78 = pbVar20;
              } while (iVar8 != 0);
            }
            pbVar20 = local_78;
            if (uVar5 != 0) {
              *pbVar16 = *local_78;
              pbVar16[1] = pbVar20[1];
              local_78 = local_78 + 2;
              pbVar16 = pbVar16 + 2;
            }
            pbVar20 = local_158;
            pbVar16[0] = 0;
            pbVar16[1] = 0;
          }
        }
        sVar7 = FUN_00100410(lVar23,local_158 + 0x70);
        if ((sVar7 == 0) && (sVar7 = FUN_00100410(lVar12,pbVar20), sVar7 == 0)) {
          uVar28 = uVar26;
          uVar24 = uVar27;
          if (uVar26 < uVar19) goto LAB_00127000;
        }
        else {
          if (-1 < sVar7) {
            uVar19 = uVar27 + 1;
            uVar26 = uVar28;
          }
          uVar28 = uVar26;
          if (uVar26 < uVar19) goto LAB_00127000;
        }
        lVar11 = *(long *)(param_3 + 4);
      } while( true );
    }
    goto LAB_0012713c;
  }
LAB_00127144:
  uVar14 = 4;
  goto LAB_00127148;
LAB_00127000:
  if (uVar24 != 0) {
    lVar18 = lVar18 + (ulong)(uVar24 * 6 - 6);
    uVar28 = (uint)CONCAT12(*(undefined1 *)(lVar18 + 3),
                            CONCAT11(*(undefined1 *)(lVar18 + 4),*(undefined1 *)(lVar18 + 5)));
    pbVar16 = (byte *)(*(long *)(*(long *)(param_3 + 4) + 0x50) + (ulong)(uVar28 * 4 - 4));
    uVar19 = (uint)pbVar16[1] << 0x10 | (uint)pbVar16[2] << 8 | (uint)pbVar16[3];
    if (uVar19 != 0) {
      uVar21 = 0xffffd8f0;
      uVar25 = uVar28;
      uVar27 = uVar28;
      do {
        uVar26 = uVar27;
        if ((*pbVar16 >> 6 & 1) != 0) {
          uVar27 = *pbVar16 & 0x3f;
          if (*(long *)(param_3 + 8) != 0) {
            lVar11 = *(long *)(*(long *)(param_3 + 4) + 8);
            uVar27 = (*(byte *)(*(long *)(param_3 + 8) +
                                ((ulong)*(byte *)(lVar11 + 0x10) << 0x18 |
                                 (ulong)*(byte *)(lVar11 + 0x11) << 0x10 |
                                 (ulong)*(byte *)(lVar11 + 0x12) << 8 |
                                (ulong)*(byte *)(lVar11 + 0x13)) + (ulong)(uVar19 - 1) + 0x3c) &
                     0x3f) + uVar27;
            if (99 < uVar27) {
              uVar27 = 100;
            }
          }
          iVar9 = FUN_0012a960(*(long *)(param_3 + 4),uVar19);
          if (iVar9 != 0) {
            iVar9 = FUN_00113a80(param_1,iVar9);
            iVar17 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
            if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar17 != 0) {
              iVar8 = iVar9 * 100;
              iVar9 = 0;
              if (iVar17 != 0) {
                iVar9 = iVar8 / iVar17;
              }
            }
            uVar27 = iVar9 + uVar27;
          }
          uVar22 = uVar26;
          if ((int)uVar27 <= (int)uVar21) {
            uVar22 = uVar25;
            uVar27 = uVar21;
            uVar19 = uVar24;
          }
          uVar24 = uVar19;
          uVar21 = uVar27;
          uVar25 = uVar22;
        }
        uVar19 = (uint)pbVar16[5] << 0x10 | (uint)pbVar16[6] << 8 | (uint)pbVar16[7];
        pbVar16 = pbVar16 + 4;
        uVar27 = uVar26 + 1;
      } while (uVar19 != 0);
      if (uVar21 != 0xffffd8f0) {
        *(uint *)(param_3 + 0x1c) = uVar25;
        uVar10 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar24);
        iVar9 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar21;
        sVar4 = param_3[2] +
                ((short)((ulong)((long)iVar9 * 0x51eb851f) >> 0x25) - (short)(iVar9 >> 0x1f));
        *(undefined4 *)(param_3 + 0x2c) = uVar10;
        *(uint *)(param_3 + 0x1e) = uVar28;
        *(uint *)(param_3 + 0x20) = uVar26;
        *param_3 = sVar4;
        sVar7 = param_3[0x35];
        if ((sVar7 <= sVar4) && (sVar7 = param_3[0x34], sVar4 <= param_3[0x34])) {
          sVar7 = sVar4;
        }
        *param_3 = sVar7;
        return 1;
      }
    }
  }
LAB_0012713c:
  uVar14 = 3;
LAB_00127148:
  *(undefined1 *)((long)param_3 + 0x5f) = uVar14;
  return 0;
}

