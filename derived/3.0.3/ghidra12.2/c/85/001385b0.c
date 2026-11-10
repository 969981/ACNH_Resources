
undefined8 FUN_001385b0(long param_1,long param_2,short *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  short sVar15;
  bool bVar16;
  short sVar17;
  int iVar18;
  undefined4 uVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  long lVar27;
  byte *pbVar28;
  undefined2 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  byte *pbVar33;
  uint uVar34;
  ushort uVar35;
  uint uVar36;
  undefined2 *puVar37;
  uint uVar38;
  uint local_184;
  undefined2 local_140;
  undefined1 local_13e [110];
  undefined2 local_d0;
  byte local_ce [110];
  
  lVar24 = *(long *)(param_3 + 4);
  uVar30 = *(uint *)(lVar24 + 8);
  if (*(char *)(param_2 + 0x50) == '\x02') {
    lVar20 = *(long *)(param_2 + 0x30);
    if (((lVar20 == 0) || (lVar27 = *(long *)(param_2 + 0x38), lVar27 == 0)) ||
       (*(short *)(param_2 + 0x4c) == 0)) goto LAB_00138bcc;
    uVar34 = (*(uint *)(lVar24 + 0x5c) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar24 + 0x5c) & 0xff00ff) << 8;
    uVar34 = uVar34 >> 0x10 | uVar34 << 0x10;
  }
  else {
    if ((*(char *)(param_2 + 0x50) != '\x01') || (*(char *)(param_1 + 0x62751) == '\0')) {
LAB_00138bcc:
      uVar22 = 4;
      goto LAB_00138bd0;
    }
    lVar20 = FUN_0012db90(param_1,0,0);
    lVar27 = lVar20 + 0x7c;
    lVar24 = *(long *)(param_3 + 4);
    lVar20 = lVar20 + 0xc;
    uVar34 = (*(uint *)(lVar24 + 0x5c) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar24 + 0x5c) & 0xff00ff) << 8;
    uVar34 = uVar34 >> 0x10 | uVar34 << 0x10;
  }
  if (uVar34 != 0) {
    bVar4 = *(byte *)(lVar24 + 0x20);
    bVar5 = *(byte *)(lVar24 + 0x21);
    bVar6 = *(byte *)(lVar24 + 0x22);
    bVar7 = *(byte *)(lVar24 + 0x23);
    uVar30 = (uVar30 & 0xff00ff00) >> 8 | (uVar30 & 0xff00ff) << 8;
    uVar31 = uVar30 >> 0x10 | uVar30 << 0x10;
    uVar30 = 1;
    lVar1 = lVar24 + ((ulong)*(byte *)(lVar24 + 0x34) << 0x18 |
                      (ulong)*(byte *)(lVar24 + 0x35) << 0x10 | (ulong)*(byte *)(lVar24 + 0x36) << 8
                     | (ulong)*(byte *)(lVar24 + 0x37));
    lVar2 = lVar24 + ((ulong)*(byte *)(lVar24 + 0x24) << 0x18 |
                      (ulong)*(byte *)(lVar24 + 0x25) << 0x10 | (ulong)*(byte *)(lVar24 + 0x26) << 8
                     | (ulong)*(byte *)(lVar24 + 0x27));
    iVar18 = 10;
    if (uVar31 == 0x50001) {
      iVar18 = 6;
    }
    local_184 = 0;
LAB_00138720:
    do {
      uVar36 = uVar30 + (uVar34 - uVar30 >> 1);
      uVar38 = uVar36 - 1;
      puVar26 = (undefined1 *)(lVar1 + (ulong)(uVar38 * 6));
      pbVar21 = (byte *)(lVar24 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 |
                                  (ulong)bVar7) +
                        (ulong)((CONCAT21(CONCAT11(*puVar26,puVar26[1]),
                                          *(undefined1 *)(lVar1 + (ulong)(uVar38 * 6 + 2))) - 1) *
                               iVar18));
      bVar8 = *pbVar21;
      pbVar33 = (byte *)(lVar2 + ((ulong)pbVar21[1] << 0x10 | (ulong)pbVar21[2] << 8 |
                                 (ulong)pbVar21[3]));
      if (uVar31 == 0x50001) {
        if ((bVar8 & 0x7f) == 0) {
          puVar37 = &local_d0;
        }
        else {
          lVar25 = *(long *)(param_3 + 4);
          uVar22 = *(undefined1 *)(lVar25 + 0x76);
          uVar9 = *(undefined1 *)(lVar25 + 0x77);
          bVar10 = *(byte *)(lVar25 + 0x70);
          bVar11 = *(byte *)(lVar25 + 0x71);
          bVar12 = *(byte *)(lVar25 + 0x72);
          bVar13 = *(byte *)(lVar25 + 0x73);
          uVar32 = 0;
          uVar35 = 0;
          puVar37 = &local_d0;
          do {
            pbVar21 = (byte *)(lVar25 + ((ulong)bVar10 << 0x18 | (ulong)bVar11 << 0x10 |
                                         (ulong)bVar12 << 8 | (ulong)bVar13) +
                              (ulong)CONCAT11(uVar22,uVar9) * (ulong)*pbVar33);
            if ((*pbVar21 & 0xfc) == 0xd8) {
              iVar23 = 1;
              if (*(short *)(pbVar21 + 2) != 0) {
                iVar23 = 2;
              }
            }
            else {
              iVar23 = 1;
            }
            uVar32 = iVar23 * 2 + (uVar32 & 0xffff);
            if (0x6f < uVar32) break;
            FUN_00100660(puVar37,pbVar21,iVar23 * 2);
            puVar37 = puVar37 + (byte)iVar23;
            uVar35 = uVar35 + 1;
            pbVar33 = pbVar33 + 1;
          } while (uVar35 < (bVar8 & 0x7f));
        }
        *puVar37 = 0;
        puVar37 = &local_d0;
      }
      else {
        bVar8 = bVar8 >> 1;
        uVar32 = bVar8 & 0x3f;
        if ((bVar8 & 0x3f) == 0) {
          local_d0 = 0;
          bVar8 = pbVar21[4];
        }
        else {
          uVar3 = bVar8 & 3;
          if (uVar32 - 1 < 3) {
            pbVar28 = (byte *)&local_d0;
          }
          else {
            pbVar28 = (byte *)&local_d0;
            iVar23 = uVar3 - uVar32;
            do {
              *pbVar28 = *pbVar33;
              pbVar28[1] = pbVar33[1];
              pbVar28[2] = pbVar33[2];
              pbVar28[3] = pbVar33[3];
              pbVar28[4] = pbVar33[4];
              pbVar28[5] = pbVar33[5];
              pbVar28[6] = pbVar33[6];
              pbVar28[7] = pbVar33[7];
              pbVar33 = pbVar33 + 8;
              pbVar28 = pbVar28 + 8;
              iVar23 = iVar23 + 4;
            } while (iVar23 != 0);
          }
          if ((bVar8 & 3) != 0) {
            iVar23 = -uVar3;
            do {
              *pbVar28 = *pbVar33;
              pbVar28[1] = pbVar33[1];
              pbVar28 = pbVar28 + 2;
              bVar16 = iVar23 != -1;
              iVar23 = iVar23 + 1;
              pbVar33 = pbVar33 + 2;
            } while (bVar16);
          }
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          bVar8 = pbVar21[4];
        }
        uVar32 = (uint)(int)(char)bVar8 >> 1;
        uVar3 = uVar32 & 0x3f;
        if (uVar3 == 0) {
          if ((char)bVar8 < 0) {
            puVar37 = &local_140;
            FUN_00114550(&local_d0,&local_140);
          }
          else {
            puVar37 = &local_d0;
          }
        }
        else {
          uVar32 = uVar32 & 3;
          puVar26 = (undefined1 *)
                    (lVar2 + ((ulong)pbVar21[5] << 0x10 | (ulong)pbVar21[6] << 8 | (ulong)pbVar21[7]
                             ));
          if (uVar3 - 1 < 3) {
            puVar29 = &local_140;
          }
          else {
            puVar29 = &local_140;
            iVar23 = uVar32 - uVar3;
            do {
              *(undefined1 *)puVar29 = *puVar26;
              *(undefined1 *)((long)puVar29 + 1) = puVar26[1];
              *(undefined1 *)(puVar29 + 1) = puVar26[2];
              *(undefined1 *)((long)puVar29 + 3) = puVar26[3];
              *(undefined1 *)(puVar29 + 2) = puVar26[4];
              *(undefined1 *)((long)puVar29 + 5) = puVar26[5];
              *(undefined1 *)(puVar29 + 3) = puVar26[6];
              *(undefined1 *)((long)puVar29 + 7) = puVar26[7];
              puVar26 = puVar26 + 8;
              puVar29 = puVar29 + 4;
              iVar23 = iVar23 + 4;
            } while (iVar23 != 0);
          }
          if (uVar32 != 0) {
            iVar23 = -uVar32;
            do {
              *(undefined1 *)puVar29 = *puVar26;
              *(undefined1 *)((long)puVar29 + 1) = puVar26[1];
              puVar29 = puVar29 + 1;
              bVar16 = iVar23 != -1;
              iVar23 = iVar23 + 1;
              puVar26 = puVar26 + 2;
            } while (bVar16);
          }
          puVar37 = &local_140;
          *puVar29 = 0;
        }
      }
      sVar17 = FUN_00100410(lVar20,&local_d0);
      if ((sVar17 == 0) && (sVar17 = FUN_00100410(lVar27,puVar37), sVar17 == 0)) {
        uVar34 = uVar38;
        local_184 = uVar36;
        if (uVar38 < uVar30) break;
        goto LAB_00138720;
      }
      if (-1 < sVar17) {
        uVar30 = uVar36 + 1;
        uVar38 = uVar34;
      }
      uVar34 = uVar38;
    } while (uVar30 <= uVar38);
    if (local_184 != 0) {
      lVar1 = lVar1 + (ulong)(local_184 * 6 - 6);
      lVar24 = *(long *)(param_3 + 4);
      uVar30 = (uint)CONCAT12(*(undefined1 *)(lVar1 + 3),
                              CONCAT11(*(undefined1 *)(lVar1 + 4),*(undefined1 *)(lVar1 + 5)));
      pbVar33 = (byte *)(lVar24 + ((ulong)*(byte *)(lVar24 + 0x2c) << 0x18 |
                                   (ulong)*(byte *)(lVar24 + 0x2d) << 0x10 |
                                   (ulong)*(byte *)(lVar24 + 0x2e) << 8 |
                                  (ulong)*(byte *)(lVar24 + 0x2f)) + (ulong)(uVar30 * 4 - 4));
      uVar34 = (uint)pbVar33[1] << 0x10 | (uint)pbVar33[2] << 8 | (uint)pbVar33[3];
      if (uVar34 != 0) {
        uVar31 = 0xffffd8f0;
        uVar36 = uVar30;
        uVar38 = uVar30;
        do {
          uVar32 = uVar38;
          if ((*pbVar33 >> 6 & 1) != 0) {
            uVar38 = *pbVar33 & 0x3f;
            lVar24 = *(long *)(param_3 + 4);
            if (*(long *)(param_3 + 8) == 0) {
              iVar18 = FUN_0013be30(lVar24,uVar34);
            }
            else {
              uVar38 = (*(byte *)(*(long *)(param_3 + 8) +
                                  ((ulong)*(byte *)(lVar24 + 0x10) << 0x18 |
                                   (ulong)*(byte *)(lVar24 + 0x11) << 0x10 |
                                   (ulong)*(byte *)(lVar24 + 0x12) << 8 |
                                  (ulong)*(byte *)(lVar24 + 0x13)) + (ulong)(uVar34 - 1) + 0x3c) &
                       0x3f) + uVar38;
              if (99 < uVar38) {
                uVar38 = 100;
              }
              iVar18 = FUN_0013be30(lVar24,uVar34);
            }
            if (iVar18 != 0) {
              iVar18 = FUN_00113a80(param_1,iVar18);
              iVar23 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
              if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar23 != 0) {
                iVar14 = iVar18 * 100;
                iVar18 = 0;
                if (iVar23 != 0) {
                  iVar18 = iVar14 / iVar23;
                }
              }
              uVar38 = iVar18 + uVar38;
            }
            uVar3 = uVar32;
            if ((int)uVar38 <= (int)uVar31) {
              uVar3 = uVar36;
              uVar38 = uVar31;
              uVar34 = local_184;
            }
            local_184 = uVar34;
            uVar31 = uVar38;
            uVar36 = uVar3;
          }
          uVar34 = (uint)pbVar33[5] << 0x10 | (uint)pbVar33[6] << 8 | (uint)pbVar33[7];
          pbVar33 = pbVar33 + 4;
          uVar38 = uVar32 + 1;
        } while (uVar34 != 0);
        if (uVar31 != 0xffffd8f0) {
          *(uint *)(param_3 + 0x1c) = uVar36;
          uVar19 = FUN_0013be30(*(undefined8 *)(param_3 + 4),local_184);
          iVar18 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar31;
          sVar15 = param_3[2] +
                   ((short)((ulong)((long)iVar18 * 0x51eb851f) >> 0x25) - (short)(iVar18 >> 0x1f));
          *(undefined4 *)(param_3 + 0x2c) = uVar19;
          *(uint *)(param_3 + 0x1e) = uVar30;
          *(uint *)(param_3 + 0x20) = uVar32;
          *param_3 = sVar15;
          sVar17 = param_3[0x35];
          if ((sVar17 <= sVar15) && (sVar17 = param_3[0x34], sVar15 <= param_3[0x34])) {
            sVar17 = sVar15;
          }
          *param_3 = sVar17;
          return 1;
        }
      }
    }
  }
  uVar22 = 3;
LAB_00138bd0:
  *(undefined1 *)((long)param_3 + 0x5f) = uVar22;
  return 0;
}

