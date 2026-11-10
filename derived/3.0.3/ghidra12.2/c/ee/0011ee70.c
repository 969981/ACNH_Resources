
int FUN_0011ee70(long param_1,long param_2,long param_3,char param_4,long param_5,long param_6,
                uint *param_7,uint param_8,uint param_9,int *param_10,byte *param_11)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  ushort uVar12;
  bool bVar13;
  ushort uVar14;
  bool bVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ushort uVar21;
  byte *pbVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  ushort uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  uint local_98;
  int local_90;
  int local_8c;
  int local_78;
  
  uVar30 = *param_7;
  if (uVar30 != 0xffffffff) {
    uVar8 = *(ushort *)(param_6 + (ulong)(uVar30 << 1));
    uVar21 = uVar8 >> 8 | uVar8 << 8;
    uVar8 = *param_11 & 0xf;
    if ((*param_11 & 0xf) != 0) {
      lVar27 = *(long *)(param_3 + 8);
      uVar12 = CONCAT11(*(undefined1 *)(lVar27 + 0x2a),*(undefined1 *)(lVar27 + 0x2b));
      if (uVar12 == 0) {
        sVar16 = 0;
        do {
          sVar16 = sVar16 + 1;
        } while (sVar16 < (short)uVar8);
        uVar21 = 0;
      }
      else {
        sVar16 = 0;
        do {
          uVar28 = 0;
          do {
            uVar14 = 0;
            if ((ushort)(uVar21 + 1) < uVar12) {
              uVar14 = uVar21 + 1;
            }
            uVar21 = uVar14;
            if ((*(byte *)(lVar27 + ((ulong)*(byte *)(lVar27 + 0x20) << 0x18 |
                                     (ulong)*(byte *)(lVar27 + 0x21) << 0x10 |
                                     (ulong)*(byte *)(lVar27 + 0x22) << 8 |
                                    (ulong)*(byte *)(lVar27 + 0x23)) +
                          (ulong)CONCAT11(*(undefined1 *)(lVar27 + 0x2e),
                                          *(undefined1 *)(lVar27 + 0x2f)) * (ulong)uVar21) & 3) != 0
               ) goto LAB_0011ef5c;
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar12);
          uVar21 = 0;
LAB_0011ef5c:
          sVar16 = sVar16 + 1;
        } while (sVar16 < (short)uVar8);
      }
    }
    uVar29 = (uint)CONCAT11(*(undefined1 *)(param_5 + 0x32),*(undefined1 *)(param_5 + 0x33));
    uVar23 = (uint)CONCAT11(*(undefined1 *)(param_5 + 0x2a),*(undefined1 *)(param_5 + 0x2b));
    uVar26 = uVar23;
    if (uVar29 <= uVar21) {
      uVar26 = 0;
    }
    iVar1 = uVar26 + (uVar21 - uVar29);
    local_78 = iVar1;
    if ((uVar23 != 0) &&
       (*(int *)(param_5 + ((ulong)*(byte *)(param_5 + 0x44) << 0x18 |
                            (ulong)*(byte *)(param_5 + 0x45) << 0x10 |
                            (ulong)*(byte *)(param_5 + 0x46) << 8 | (ulong)*(byte *)(param_5 + 0x47)
                           ) + (ulong)uVar21 * 6) != 0)) {
      iVar18 = FUN_00113a80(param_1);
      iVar19 = (uint)*(ushort *)(param_3 + 6) - (uint)*(ushort *)(param_3 + 4);
      if ((uint)*(ushort *)(param_3 + 4) <= (uint)*(ushort *)(param_3 + 6) && iVar19 != 0) {
        iVar20 = iVar18 * uVar23;
        iVar18 = 0;
        if (iVar19 != 0) {
          iVar18 = iVar20 / iVar19;
        }
      }
      local_78 = iVar18 + iVar1;
    }
    uVar29 = uVar30 + 1;
    if (param_9 <= uVar30) {
      uVar29 = param_8;
    }
    *param_11 = 0x10;
    if (uVar29 <= param_9) {
      bVar15 = param_9 <= uVar30;
      local_98 = 0x7fffffff;
      bVar13 = false;
      local_90 = -10000;
      local_8c = -10000;
      do {
        while( true ) {
          puVar2 = (undefined1 *)(param_6 + (ulong)(uVar29 << 1));
          uVar8 = CONCAT11(*puVar2,puVar2[1]);
          uVar31 = (ulong)uVar8;
          if (param_4 != '\x02') break;
          sVar16 = FUN_0011b9d0(param_1,param_5,uVar31,*(undefined8 *)(param_2 + 0x30),
                                *(undefined2 *)(param_2 + 0x4c),*(undefined8 *)(param_2 + 0x38),1);
          iVar18 = (int)sVar16;
          if (iVar18 < 0) {
            return iVar18;
          }
          if (iVar18 == 0) goto LAB_0011f3f4;
          uVar30 = (uint)CONCAT11(*(undefined1 *)(param_5 + 0x2a),*(undefined1 *)(param_5 + 0x2b));
          if (uVar30 != 0) {
            uVar4 = *(undefined1 *)(param_5 + 0x32);
            uVar5 = *(undefined1 *)(param_5 + 0x33);
            iVar19 = 0;
            uVar23 = 0;
            uVar24 = uVar31;
            do {
              uVar26 = 0;
              if (((int)uVar24 + 1U & 0xffff) < uVar30) {
                uVar26 = (int)uVar24 + 1;
              }
              uVar24 = (ulong)uVar26;
              uVar26 = uVar26 & 0xffff;
              if (CONCAT11(uVar4,uVar5) == uVar26) {
LAB_0011f43c:
                if ((short)iVar19 < 0) {
                  return iVar19;
                }
LAB_0011f444:
                if (iVar18 <= (short)iVar19) goto LAB_0011f1cc;
                goto LAB_0011f3f4;
              }
              if (CONCAT11(*(undefined1 *)(param_5 + 0x2a),*(undefined1 *)(param_5 + 0x2b)) <=
                  uVar26) {
                return 0xa258;
              }
              lVar27 = param_5 + ((ulong)*(byte *)(param_5 + 0x20) << 0x18 |
                                  (ulong)*(byte *)(param_5 + 0x21) << 0x10 |
                                  (ulong)*(byte *)(param_5 + 0x22) << 8 |
                                 (ulong)*(byte *)(param_5 + 0x23));
              lVar25 = (ulong)CONCAT11(*(undefined1 *)(param_5 + 0x2e),
                                       *(undefined1 *)(param_5 + 0x2f)) * (ulong)uVar26;
              bVar7 = *(byte *)(lVar27 + lVar25);
              bVar6 = bVar7 & 3;
              *(byte *)(param_1 + 0x6079e) = bVar6;
              bVar11 = *(byte *)(lVar27 + lVar25) >> 6 & 1;
              *(byte *)(param_1 + 0x607a3) = bVar11;
              if ((bVar7 & 3) != 0) {
                if (bVar6 == 3) {
                  return 0xa258;
                }
                if (bVar11 == 0) goto LAB_0011f43c;
                iVar19 = (int)(short)((short)iVar19 + 1);
                if (iVar19 < 5) goto LAB_0011f1b4;
                goto LAB_0011f444;
              }
LAB_0011f1b4:
              uVar23 = uVar23 + 1;
            } while ((uVar23 & 0xffff) < uVar30);
          }
          iVar19 = 0;
          if (0 < iVar18) goto LAB_0011f3f4;
LAB_0011f1cc:
          if (iVar18 < 1) {
            uVar30 = (uint)*(byte *)(param_5 + 0x2b);
          }
          else {
            uVar30 = (uint)*(byte *)(param_5 + 0x2b);
            uVar23 = (uint)CONCAT11(*(byte *)(param_5 + 0x2a),*(byte *)(param_5 + 0x2b));
            if (uVar23 == 0) {
              uVar31 = 0;
            }
            else {
              iVar20 = 0;
              do {
                uVar26 = 0;
                do {
                  uVar3 = 0;
                  if (((int)uVar31 + 1U & 0xffff) < uVar23) {
                    uVar3 = (int)uVar31 + 1;
                  }
                  uVar31 = (ulong)uVar3;
                  if ((*(byte *)(param_5 + ((ulong)*(byte *)(param_5 + 0x20) << 0x18 |
                                            (ulong)*(byte *)(param_5 + 0x21) << 0x10 |
                                            (ulong)*(byte *)(param_5 + 0x22) << 8 |
                                           (ulong)*(byte *)(param_5 + 0x23)) +
                                (ulong)CONCAT11(*(undefined1 *)(param_5 + 0x2e),
                                                *(undefined1 *)(param_5 + 0x2f)) * (uVar31 & 0xffff)
                                ) & 3) != 0) goto LAB_0011f250;
                  uVar26 = uVar26 + 1;
                } while ((uVar26 & 0xffff) < uVar23);
                uVar31 = 0;
LAB_0011f250:
                iVar20 = (int)(short)((short)iVar20 + 1);
              } while (iVar20 < iVar18);
            }
          }
          uVar26 = (uint)CONCAT11(*(undefined1 *)(param_5 + 0x32),*(undefined1 *)(param_5 + 0x33));
          uVar30 = uVar30 | (uint)*(byte *)(param_5 + 0x2a) << 8;
          uVar23 = (uint)uVar31 & 0xffff;
          uVar3 = uVar30;
          if (uVar26 <= uVar23) {
            uVar3 = 0;
          }
          iVar18 = uVar3 + (uVar23 - uVar26);
          iVar20 = iVar18;
          if ((uVar30 != 0) &&
             (*(int *)(param_5 + ((ulong)*(byte *)(param_5 + 0x44) << 0x18 |
                                  (ulong)*(byte *)(param_5 + 0x45) << 0x10 |
                                  (ulong)*(byte *)(param_5 + 0x46) << 8 |
                                 (ulong)*(byte *)(param_5 + 0x47)) + (uVar31 & 0xffff) * 6) != 0)) {
            iVar20 = FUN_00113a80(param_1);
            iVar10 = (uint)*(ushort *)(param_3 + 6) - (uint)*(ushort *)(param_3 + 4);
            if ((uint)*(ushort *)(param_3 + 4) <= (uint)*(ushort *)(param_3 + 6) && iVar10 != 0) {
              iVar9 = iVar20 * uVar30;
              iVar20 = 0;
              if (iVar10 != 0) {
                iVar20 = iVar9 / iVar10;
              }
            }
            iVar20 = iVar20 + iVar18;
          }
          if (local_78 <= iVar20) {
            if (iVar18 < iVar1) {
              if (iVar20 == local_78) goto LAB_0011f514;
            }
            goto LAB_0011f3f4;
          }
LAB_0011f514:
          if (iVar20 <= local_8c) {
            if (local_90 < iVar18) {
              if (iVar20 == local_8c) goto LAB_0011f538;
            }
            goto LAB_0011f3f4;
          }
LAB_0011f538:
          pbVar22 = (byte *)(param_5 + ((ulong)*(byte *)(param_5 + 0x20) << 0x18 |
                                        (ulong)*(byte *)(param_5 + 0x21) << 0x10 |
                                        (ulong)*(byte *)(param_5 + 0x22) << 8 |
                                       (ulong)*(byte *)(param_5 + 0x23)) +
                            (ulong)CONCAT11(*(undefined1 *)(param_5 + 0x2e),
                                            *(undefined1 *)(param_5 + 0x2f)) * (uVar31 & 0xffff));
          bVar6 = *pbVar22;
          *(char *)(param_1 + 0x6079e) = (char)(bVar6 & 3);
          *(undefined2 *)(param_1 + 0x6079a) =
               (short)(((uint)(*(ushort *)(pbVar22 + 1) >> 8) |
                       (*(ushort *)(pbVar22 + 1) & 0xff00ff) << 8) >> 7);
          *(short *)(param_1 + 0x6079c) =
               (short)(((uint)(*(ushort *)(pbVar22 + 3) >> 8) |
                       (*(ushort *)(pbVar22 + 3) & 0xff00ff) << 8) >> 7);
          lVar27 = param_1 + 0x60798;
          if (1 < (bVar6 & 3) - 1) {
            lVar27 = 0;
          }
          sVar17 = FUN_001139a0(param_2,*(undefined2 *)(lVar27 + 2),*(undefined2 *)(lVar27 + 4));
          if (sVar17 == 0) goto LAB_0011f3f4;
          bVar13 = true;
          *param_11 = (char)iVar19 * '\x10' + 0x10U | (byte)sVar16;
          local_98 = uVar29;
          local_90 = iVar18;
          local_8c = iVar20;
          if (bVar15) goto LAB_0011f5f0;
LAB_0011f400:
          uVar29 = uVar29 + 1;
          if (param_9 < uVar29) {
            if (*param_7 == param_8) goto LAB_0011f5fc;
            param_9 = *param_7 - 1;
            bVar15 = true;
            uVar29 = param_8;
          }
          if (param_9 < uVar29) goto LAB_0011f5fc;
        }
        uVar30 = (uint)CONCAT11(*(undefined1 *)(param_5 + 0x32),*(undefined1 *)(param_5 + 0x33));
        uVar23 = (uint)CONCAT11(*(undefined1 *)(param_5 + 0x2a),*(undefined1 *)(param_5 + 0x2b));
        uVar26 = uVar23;
        if (uVar30 <= uVar8) {
          uVar26 = 0;
        }
        iVar18 = uVar26 + (uVar8 - uVar30);
        iVar19 = iVar18;
        if ((uVar23 != 0) &&
           (*(int *)(param_5 + ((ulong)*(byte *)(param_5 + 0x44) << 0x18 |
                                (ulong)*(byte *)(param_5 + 0x45) << 0x10 |
                                (ulong)*(byte *)(param_5 + 0x46) << 8 |
                               (ulong)*(byte *)(param_5 + 0x47)) + uVar31 * 6) != 0)) {
          iVar19 = FUN_00113a80(param_1);
          iVar20 = (uint)*(ushort *)(param_3 + 6) - (uint)*(ushort *)(param_3 + 4);
          if ((uint)*(ushort *)(param_3 + 4) <= (uint)*(ushort *)(param_3 + 6) && iVar20 != 0) {
            iVar10 = iVar19 * uVar23;
            iVar19 = 0;
            if (iVar20 != 0) {
              iVar19 = iVar10 / iVar20;
            }
          }
          iVar19 = iVar19 + iVar18;
        }
        if (local_78 <= iVar19) {
          if ((iVar1 <= iVar18) || (iVar19 != local_78)) goto LAB_0011f3f4;
        }
        if (local_8c < iVar19) {
LAB_0011f344:
          pbVar22 = (byte *)(param_5 + ((ulong)*(byte *)(param_5 + 0x20) << 0x18 |
                                        (ulong)*(byte *)(param_5 + 0x21) << 0x10 |
                                        (ulong)*(byte *)(param_5 + 0x22) << 8 |
                                       (ulong)*(byte *)(param_5 + 0x23)) +
                            CONCAT11(*(undefined1 *)(param_5 + 0x2e),*(undefined1 *)(param_5 + 0x2f)
                                    ) * uVar31);
          bVar6 = *pbVar22;
          *(char *)(param_1 + 0x6079e) = (char)(bVar6 & 3);
          *(undefined2 *)(param_1 + 0x6079a) =
               (short)(((uint)(*(ushort *)(pbVar22 + 1) >> 8) |
                       (*(ushort *)(pbVar22 + 1) & 0xff00ff) << 8) >> 7);
          *(short *)(param_1 + 0x6079c) =
               (short)(((uint)(*(ushort *)(pbVar22 + 3) >> 8) |
                       (*(ushort *)(pbVar22 + 3) & 0xff00ff) << 8) >> 7);
          lVar27 = param_1 + 0x60798;
          if (1 < (bVar6 & 3) - 1) {
            lVar27 = 0;
          }
          sVar16 = FUN_001139a0(param_2,*(undefined2 *)(lVar27 + 2),*(undefined2 *)(lVar27 + 4));
          if (sVar16 != 0) {
            bVar13 = true;
            local_98 = uVar29;
            local_90 = iVar18;
            local_8c = iVar19;
          }
        }
        else if (local_90 < iVar18) {
          if (iVar19 == local_8c) goto LAB_0011f344;
        }
LAB_0011f3f4:
        if (!bVar15) goto LAB_0011f400;
LAB_0011f5f0:
        uVar29 = uVar29 + 1;
      } while (uVar29 <= param_9);
LAB_0011f5fc:
      if (bVar13) {
        *param_7 = local_98;
        *param_10 = local_8c;
        return 1;
      }
    }
    *param_7 = 0xffffffff;
  }
  return 0;
}

