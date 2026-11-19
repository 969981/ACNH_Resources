
ulong FUN_03c33d30(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulong param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  uint *puVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  int iVar32;
  uint local_d8;
  uint local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if (param_5 < 0x5dc) {
    return 0xffffffffffffffd4;
  }
  uVar10 = *param_1;
  puVar30 = param_4 + 0x4e;
  *(undefined4 *)(param_4 + 0x5b) = 0;
  param_4[0x59] = 0;
  param_4[0x5a] = 0;
  param_4[0x57] = 0;
  param_4[0x58] = 0;
  uVar7 = uVar10 & 0xff;
  param_4[0x55] = 0;
  param_4[0x56] = 0;
  *puVar30 = 0;
  param_4[0x53] = 0;
  param_4[0x54] = 0;
  param_4[0x51] = 0;
  param_4[0x52] = 0;
  param_4[0x4f] = 0;
  param_4[0x50] = 0;
  if (uVar7 < 0xd) {
    uVar18 = FUN_03c35ec0((long)param_4 + 0x4dc,0x100,puVar30,&local_d8,&local_d4,param_2,param_3);
    if (0xffffffffffffff88 < uVar18) {
      return uVar18;
    }
    if (local_d4 <= uVar7) {
      iVar26 = 0;
      puVar21 = (uint *)(param_4 + 0x55);
      iVar2 = local_d4 + 1;
      do {
        uVar3 = local_d4 + iVar26;
        iVar26 = iVar26 + -1;
      } while (*(int *)((long)puVar30 + (ulong)uVar3 * 4) == 0);
      uVar3 = local_d4 + iVar26;
      uVar25 = 0;
      uVar28 = (ulong)(uVar3 + 2);
      if (uVar3 < 0xfffffffe) {
        uVar25 = 0;
        if (uVar3 == 0) {
          lVar29 = 1;
        }
        else {
          uVar19 = 0;
          piVar20 = (int *)(param_4 + 0x56);
          do {
            uVar31 = uVar19;
            uVar19 = uVar31 + 2;
            piVar20[-1] = uVar25;
            iVar32 = piVar20[-0xf] + uVar25;
            uVar25 = piVar20[-0xe] + iVar32;
            *piVar20 = iVar32;
            piVar20 = piVar20 + 2;
          } while ((uVar28 - 1 & 0xfffffffffffffffe) != uVar19);
          lVar29 = uVar31 + 3;
        }
        if ((uVar28 - 1 & 1) != 0) {
          iVar32 = *(int *)((long)puVar30 + lVar29 * 4);
          puVar21[lVar29] = uVar25;
          uVar25 = iVar32 + uVar25;
        }
      }
      *puVar21 = uVar25;
      if (local_d8 != 0) {
        uVar19 = 0;
        do {
          bVar15 = *(byte *)((long)param_4 + 0x4dc + uVar19);
          uVar27 = puVar21[bVar15];
          puVar21[bVar15] = uVar27 + 1;
          puVar4 = (undefined1 *)((long)param_4 + (ulong)uVar27 * 2 + 0x2dc);
          *puVar4 = (char)uVar19;
          uVar19 = uVar19 + 1;
          puVar4[1] = bVar15;
        } while (local_d8 != uVar19);
      }
      *puVar21 = 0;
      if (1 < uVar3 + 2) {
        iVar32 = 0;
        if (uVar28 == 2) {
          lVar29 = 1;
        }
        else {
          lVar29 = 0x274;
          uVar19 = 0;
          do {
            uVar31 = uVar19;
            piVar20 = (int *)((long)param_4 + lVar29);
            uVar27 = (uVar7 - local_d4) + (int)uVar31;
            iVar8 = *piVar20;
            *(int *)((long)param_4 + uVar31 * 4 + 4) = iVar32;
            lVar29 = lVar29 + 8;
            iVar9 = piVar20[1];
            iVar32 = (iVar8 << (ulong)(uVar27 & 0x1f)) + iVar32;
            *(int *)((long)param_4 + uVar31 * 4 + 8) = iVar32;
            iVar32 = (iVar9 << (ulong)(uVar27 + 1 & 0x1f)) + iVar32;
            uVar19 = uVar31 + 2;
          } while ((uVar28 - 1 & 0xfffffffffffffffe) != uVar31 + 2);
          lVar29 = uVar31 + 3;
        }
        if ((uVar28 - 1 & 1) != 0) {
          *(int *)((long)param_4 + lVar29 * 4) = iVar32;
        }
        if ((uint)-iVar26 < uVar7 + iVar26 + 1) {
          uVar27 = -iVar26;
          lVar29 = (ulong)uVar27 * 0x34;
          do {
            if (uVar28 - 2 < 3) {
              lVar23 = 1;
            }
            else {
              uVar19 = 0;
              puVar21 = (uint *)(param_4 + 1);
              do {
                uVar31 = uVar19;
                puVar5 = (uint *)((long)puVar21 + lVar29);
                uVar19 = uVar31 + 4;
                puVar5[-1] = puVar21[-1] >> (ulong)(uVar27 & 0x1f);
                *puVar5 = *puVar21 >> (ulong)(uVar27 & 0x1f);
                puVar5[1] = puVar21[1] >> (ulong)(uVar27 & 0x1f);
                puVar1 = puVar21 + 2;
                puVar21 = puVar21 + 4;
                puVar5[2] = *puVar1 >> (ulong)(uVar27 & 0x1f);
              } while ((uVar28 - 1 & 0xfffffffffffffffc) != uVar19);
              lVar23 = uVar31 + 5;
            }
            if ((uVar28 - 1 & 3) != 0) {
              puVar21 = (uint *)((long)param_4 + lVar23 * 4);
              uVar19 = (ulong)(uVar3 + 1) & 3;
              do {
                uVar19 = uVar19 - 1;
                *(uint *)((long)puVar21 + lVar29) = *puVar21 >> (ulong)(uVar27 & 0x1f);
                puVar21 = puVar21 + 1;
              } while (uVar19 != 0);
            }
            uVar27 = uVar27 + 1;
            lVar29 = lVar29 + 0x34;
          } while (uVar7 + iVar26 + 1 != uVar27);
        }
      }
      local_b0 = param_4[4];
      uStack_a8 = param_4[5];
      local_a0 = *(undefined4 *)(param_4 + 6);
      local_d0 = *param_4;
      uStack_c8 = param_4[1];
      local_c0 = param_4[2];
      uStack_b8 = param_4[3];
      if (uVar25 != 0) {
        uVar28 = 0;
        do {
          pbVar6 = (byte *)((long)param_4 + uVar28 * 2 + 0x2dc);
          bVar15 = pbVar6[1];
          bVar12 = *pbVar6;
          uVar3 = *(uint *)((long)&local_d0 + (ulong)bVar15 * 4);
          uVar19 = (ulong)uVar3;
          uVar27 = iVar2 - (uint)bVar15;
          uVar17 = uVar7 - uVar27;
          iVar32 = 1 << (ulong)(uVar17 & 0x1f);
          if (uVar17 < (uint)-iVar26) {
            uVar17 = iVar32 + uVar3;
            if (uVar3 < uVar17) {
              uVar24 = (ulong)(uVar17 - uVar3) & 7;
              uVar27 = (uint)bVar12 | uVar27 * 0x10000 & 0xff0000 | 0x1000000;
              uVar31 = uVar19;
              if ((uVar17 - uVar3 & 7) != 0) {
                do {
                  param_1[uVar31 + 1] = uVar27;
                  uVar31 = uVar31 + 1;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
              if (6 < ~uVar19 + (ulong)uVar17) {
                lVar29 = uVar17 - uVar31;
                puVar21 = param_1 + uVar31 + 4;
                do {
                  puVar21[-3] = uVar27;
                  puVar21[-2] = uVar27;
                  lVar29 = lVar29 + -8;
                  puVar21[-1] = uVar27;
                  *puVar21 = uVar27;
                  puVar21[1] = uVar27;
                  puVar21[2] = uVar27;
                  puVar21[3] = uVar27;
                  puVar21[4] = uVar27;
                  puVar21 = puVar21 + 8;
                } while (lVar29 != 0);
              }
            }
          }
          else {
            puVar30 = (undefined8 *)((long)param_4 + (ulong)uVar27 * 0x34);
            uVar22 = (iVar2 - uVar7) + uVar27;
            if ((int)uVar22 < 2) {
              uVar22 = 1;
            }
            local_78 = puVar30[4];
            uStack_70 = puVar30[5];
            local_68 = *(undefined4 *)(puVar30 + 6);
            local_98 = *puVar30;
            uStack_90 = puVar30[1];
            uVar11 = *(uint *)((long)param_4 + (ulong)uVar22 * 4 + 0x2a4);
            local_88 = puVar30[2];
            uStack_80 = puVar30[3];
            if (1 < uVar22) {
              uVar22 = *(uint *)((long)&local_98 + (ulong)uVar22 * 4);
              if (uVar22 != 0) {
                uVar16 = (uint)bVar12 | uVar27 * 0x10000 & 0xff0000 | 0x1000000;
                if (uVar22 < 8) {
                  lVar29 = 0;
                }
                else {
                  lVar29 = 0;
                  puVar21 = param_1 + uVar19 + 4;
                  do {
                    lVar29 = lVar29 + -8;
                    puVar21[-3] = uVar16;
                    puVar21[-2] = uVar16;
                    puVar21[-1] = uVar16;
                    *puVar21 = uVar16;
                    puVar21[1] = uVar16;
                    puVar21[2] = uVar16;
                    puVar21[3] = uVar16;
                    puVar21[4] = uVar16;
                    puVar21 = puVar21 + 8;
                  } while (-lVar29 != ((ulong)uVar22 & 0xfffffff8));
                  lVar29 = -lVar29;
                }
                if ((uVar22 & 7) != 0) {
                  uVar31 = (ulong)uVar22 & 7;
                  puVar21 = param_1 + uVar19 + lVar29 + 1;
                  do {
                    uVar31 = uVar31 - 1;
                    *puVar21 = uVar16;
                    puVar21 = puVar21 + 1;
                  } while (uVar31 != 0);
                }
              }
            }
            if (uVar25 != uVar11) {
              uVar31 = 0;
              do {
                pbVar6 = (byte *)((long)param_4 + uVar31 * 2 + (ulong)uVar11 * 2 + 0x2dc);
                bVar13 = pbVar6[1];
                bVar14 = *pbVar6;
                uVar22 = *(uint *)((long)&local_98 + (ulong)bVar13 * 4);
                uVar16 = (1 << (ulong)(uVar17 - (iVar2 - (uint)bVar13) & 0x1f)) + uVar22;
                do {
                  param_1[uVar19 + (ulong)uVar22 + 1] =
                       (uint)bVar14 << 8 | ((iVar2 - (uint)bVar13) + uVar27) * 0x10000 & 0xff0000 |
                       (uint)bVar12 | 0x2000000;
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar16);
                uVar31 = uVar31 + 1;
                *(uint *)((long)&local_98 + (ulong)bVar13 * 4) = uVar16;
              } while (uVar31 != uVar25 - uVar11);
            }
          }
          uVar28 = uVar28 + 1;
          *(uint *)((long)&local_d0 + (ulong)bVar15 * 4) = iVar32 + uVar3;
        } while (uVar28 != uVar25);
      }
      *(undefined1 *)((long)param_1 + 1) = 1;
      *(char *)param_1 = (char)uVar10;
      *(char *)((long)param_1 + 2) = (char)uVar10;
      *(char *)((long)param_1 + 3) = (char)(uVar10 >> 0x18);
      return uVar18;
    }
  }
  return 0xffffffffffffffd4;
}

