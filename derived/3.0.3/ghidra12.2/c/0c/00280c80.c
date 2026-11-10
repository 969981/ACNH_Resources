
undefined8 FUN_00280c80(long *param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  byte *pbVar20;
  byte bVar21;
  byte bVar22;
  ulong uVar23;
  uint uVar24;
  undefined1 uVar25;
  byte local_e0 [64];
  byte local_a0 [64];
  
  uVar1 = *(ushort *)((long)param_1 + 0x3c);
  uVar9 = (ulong)uVar1;
  uVar8 = (uint)uVar1;
  if (uVar9 == 0) {
    uVar18 = 0xff;
  }
  else {
    lVar14 = param_1[1];
    uVar18 = 0;
    bVar11 = 0;
    lVar16 = param_1[8];
    do {
      uVar23 = 0;
      bVar19 = 0;
      uVar24 = 0;
      do {
        uVar24 = uVar24 + 1;
        lVar5 = uVar9 * uVar23;
        if (*(char *)(lVar14 + uVar9 * uVar18 + uVar23) == (char)lVar16) {
          bVar19 = bVar19 + 1;
        }
        uVar23 = (ulong)(uVar24 & 0xff);
        if (*(char *)(lVar14 + uVar18 + lVar5) == (char)lVar16) {
          bVar19 = bVar19 + 1;
        }
      } while ((uVar24 & 0xff) < (uint)uVar1);
      uVar18 = (ulong)bVar11;
      local_a0[uVar18 * 2] = bVar11;
      bVar11 = bVar11 + 1;
      local_a0[uVar18 * 2 + 1] = bVar19;
      uVar18 = (ulong)bVar11;
    } while ((uint)bVar11 <= (uint)uVar1 && uVar8 != bVar11);
    uVar18 = (ulong)(uVar8 - 1);
    if ((uVar8 - 1 & 0xff) == 0) goto LAB_00280d30;
  }
  uVar18 = uVar18 & 0xff;
  do {
    uVar17 = uVar18 - 1;
    uVar23 = uVar18;
    if (uVar18 == 0 || uVar17 == 0) {
      uVar23 = 1;
    }
    bVar11 = local_a0[1];
    if (uVar18 < 2) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      pbVar20 = local_a0 + 2;
      do {
        while (lVar14 = lVar16, bVar19 = pbVar20[1], bVar19 < bVar11) {
          bVar22 = *pbVar20;
          pbVar20[1] = bVar11;
          pbVar20[-1] = bVar19;
          *pbVar20 = pbVar20[-2];
          pbVar20[-2] = bVar22;
          bVar22 = pbVar20[3];
          if (bVar22 < bVar11) goto LAB_002810b4;
LAB_00281120:
          lVar16 = lVar14 + -2;
          pbVar20 = pbVar20 + 4;
          bVar11 = bVar22;
          if (-(lVar14 + -2) == (uVar23 & 0xfffffffffffffffe)) goto LAB_00281134;
        }
        bVar22 = pbVar20[3];
        bVar11 = bVar19;
        if (bVar19 <= bVar22) goto LAB_00281120;
LAB_002810b4:
        bVar19 = pbVar20[2];
        pbVar20[3] = bVar11;
        pbVar20[1] = bVar22;
        pbVar20[2] = *pbVar20;
        *pbVar20 = bVar19;
        lVar16 = lVar14 + -2;
        pbVar20 = pbVar20 + 4;
      } while (-(lVar14 + -2) != (uVar23 & 0xfffffffffffffffe));
LAB_00281134:
      lVar16 = -(lVar14 + -2);
    }
    if ((uVar23 & 1) != 0) {
      bVar19 = local_a0[(lVar16 + 1) * 2 + 1];
      if (bVar19 < bVar11) {
        lVar14 = (lVar16 + 1) * 2;
        local_a0[(lVar16 + 1) * 2 + 1] = bVar11;
        bVar22 = local_a0[lVar14];
        bVar11 = local_a0[lVar16 * 2];
        local_a0[lVar16 * 2 + 1] = bVar19;
        local_a0[lVar16 * 2] = bVar22;
        local_a0[lVar14] = bVar11;
      }
    }
    uVar18 = uVar17;
  } while ((uVar17 & 0xff) != 0);
LAB_00280d30:
  if (uVar8 != 0) {
    uVar18 = 0;
    do {
      uVar23 = uVar18 & 0xff;
      uVar24 = (int)uVar18 + 1;
      uVar18 = (ulong)uVar24;
      lVar16 = uVar23 * 2;
      *(undefined2 *)(local_e0 + lVar16) = *(undefined2 *)(local_a0 + lVar16);
    } while ((uVar24 & 0xff) < uVar8);
    if (uVar8 < 2) {
      return 1;
    }
    uVar18 = 1;
    do {
      uVar23 = uVar18 & 0xff;
      if ((uVar18 & 0xff) != 0) {
        bVar11 = local_a0[uVar23 * 2];
        if ((param_2 >> (ulong)(bVar11 & 0x1f) & 1) != 0) {
          uVar9 = 0;
          do {
            bVar19 = local_a0[uVar9 * 2];
            uVar18 = (ulong)bVar19;
            if ((param_2 >> (ulong)(bVar19 & 0x1f) & 1) != 0) {
              uVar1 = *(ushort *)((long)param_1 + 0x3c);
              lVar16 = uVar18 + (ulong)(uint)bVar11 * (ulong)uVar1;
              if (*(char *)(param_1[1] + lVar16) == (char)param_1[8]) {
                uVar24 = (uint)bVar11;
                uVar8 = (uint)bVar19;
                if (uVar1 != 0) {
                  uVar17 = 0;
                  uVar25 = 1;
LAB_00280e4c:
                  bVar22 = local_e0[(uVar17 & 0xff) * 2];
                  uVar10 = (ulong)bVar22;
                  uVar12 = 1 << (ulong)(bVar22 & 0x1f);
                  if (((((bVar22 == uVar24 || (uint)bVar22 == (uint)bVar19) ||
                         (uVar12 & param_2) == 0) || ((*param_3 & uVar12) != 0)) ||
                      (sVar2 = *(short *)(*param_1 +
                                         (uVar10 + (ulong)uVar24 * (ulong)(uint)uVar1) * 2),
                      sVar2 == 0)) ||
                     (sVar3 = *(short *)(*param_1 +
                                        (uVar18 + (ulong)(uint)bVar22 * (ulong)(uint)uVar1) * 2),
                     sVar3 == 0)) goto LAB_00280e40;
                  if (*(ushort *)(param_1 + 6) < (ushort)(sVar3 + sVar2)) {
                    uVar25 = 2;
                    goto LAB_00280e40;
                  }
                  if (*(ushort *)((long)param_1 + 0x32) <
                      (ushort)(*(byte *)(param_1[2] + uVar10) + 2)) {
                    uVar25 = 3;
                    goto LAB_00280e40;
                  }
                  *(byte *)(param_1[1] + lVar16) = bVar22;
                  *(byte *)(param_1[1] + (ulong)bVar11 + *(ushort *)((long)param_1 + 0x3c) * uVar18)
                       = bVar22;
                  uVar1 = *(ushort *)((long)param_1 + 0x3c);
                  if (uVar1 == 0) {
                    uVar18 = 0xff;
                    goto LAB_00280f48;
                  }
                  uVar18 = 0;
                  do {
                    uVar18 = uVar18 & 0xff;
                    if ((uint)local_e0[uVar18 * 2] == (uint)bVar11 || local_e0[uVar18 * 2] == uVar8)
                    {
                      local_e0[uVar18 * 2 + 1] = local_e0[uVar18 * 2 + 1] - 2;
                    }
                    uVar24 = (int)uVar18 + 1;
                    uVar18 = (ulong)uVar24;
                    uVar24 = uVar24 & 0xff;
                  } while (uVar24 <= uVar1 && uVar1 != uVar24);
                  uVar8 = uVar1 - 1;
                  if ((uVar8 & 0xff) != 0) {
                    uVar18 = (ulong)uVar8 & 0xff;
LAB_00280f48:
                    do {
                      uVar4 = uVar18 - 1;
                      uVar17 = uVar18;
                      if (uVar18 == 0 || uVar4 == 0) {
                        uVar17 = 1;
                      }
                      bVar19 = local_e0[1];
                      if (uVar18 < 2) {
                        lVar16 = 0;
                      }
                      else {
                        lVar16 = 0;
                        pbVar20 = local_e0 + 2;
                        do {
                          while (lVar14 = lVar16, bVar22 = pbVar20[1], bVar22 < bVar19) {
                            bVar21 = *pbVar20;
                            pbVar20[1] = bVar19;
                            pbVar20[-1] = bVar22;
                            *pbVar20 = pbVar20[-2];
                            pbVar20[-2] = bVar21;
                            bVar21 = pbVar20[3];
                            if (bVar21 < bVar19) goto LAB_00280f84;
LAB_00280ff0:
                            lVar16 = lVar14 + -2;
                            pbVar20 = pbVar20 + 4;
                            bVar19 = bVar21;
                            if (-(lVar14 + -2) == (uVar17 & 0xfffffffffffffffe)) goto LAB_00281004;
                          }
                          bVar21 = pbVar20[3];
                          bVar19 = bVar22;
                          if (bVar22 <= bVar21) goto LAB_00280ff0;
LAB_00280f84:
                          bVar22 = pbVar20[2];
                          pbVar20[3] = bVar19;
                          pbVar20[1] = bVar21;
                          pbVar20[2] = *pbVar20;
                          *pbVar20 = bVar22;
                          lVar16 = lVar14 + -2;
                          pbVar20 = pbVar20 + 4;
                        } while (-(lVar14 + -2) != (uVar17 & 0xfffffffffffffffe));
LAB_00281004:
                        lVar16 = -(lVar14 + -2);
                      }
                      if ((uVar17 & 1) != 0) {
                        bVar22 = local_e0[(lVar16 + 1) * 2 + 1];
                        if (bVar22 < bVar19) {
                          lVar14 = (lVar16 + 1) * 2;
                          local_e0[(lVar16 + 1) * 2 + 1] = bVar19;
                          bVar21 = local_e0[lVar14];
                          bVar19 = local_e0[lVar16 * 2];
                          local_e0[lVar16 * 2 + 1] = bVar22;
                          local_e0[lVar16 * 2] = bVar21;
                          local_e0[lVar14] = bVar19;
                        }
                      }
                      uVar18 = uVar4;
                    } while ((uVar4 & 0xff) != 0);
                  }
                  *(char *)(param_1[2] + uVar10) = *(char *)(param_1[2] + uVar10) + '\x02';
                  goto LAB_00280dd8;
                }
                uVar25 = 1;
LAB_00280dbc:
                uVar17 = FUN_00281370(param_1,(ulong)bVar11,uVar18,param_2 & (*param_3 ^ 0xffffffff)
                                     );
                if ((uVar17 & 1) == 0) {
                  if (uVar24 == *(byte *)((long)param_1 + 0x3e)) goto LAB_002811cc;
                  if (uVar8 == *(byte *)((long)param_1 + 0x3e)) goto LAB_00281188;
                  uVar1 = *(ushort *)((long)param_1 + 0x3c);
                  if (uVar1 == 0) goto LAB_002811c8;
                  uVar9 = 0;
                  goto LAB_002811a0;
                }
              }
            }
LAB_00280dd8:
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar23);
          uVar9 = (ulong)*(ushort *)((long)param_1 + 0x3c);
        }
      }
      uVar8 = (int)uVar23 + 1;
      uVar18 = (ulong)uVar8;
    } while ((uVar8 & 0xff) < (uint)uVar9);
  }
  return 1;
LAB_00280e40:
  uVar12 = (int)uVar17 + 1;
  uVar17 = (ulong)uVar12;
  if ((uint)uVar1 <= (uVar12 & 0xff)) goto LAB_00280dbc;
  goto LAB_00280e4c;
LAB_00281188:
  uVar18 = (ulong)(uint)bVar11;
  goto LAB_002811cc;
  while( true ) {
    if (local_e0[(uVar9 & 0xff) * 2] == uVar8) goto LAB_00281188;
    uVar12 = (int)uVar9 + 1;
    uVar9 = (ulong)uVar12;
    uVar12 = uVar12 & 0xff;
    if (uVar1 < uVar12 || uVar1 == uVar12) break;
LAB_002811a0:
    if (local_e0[(uVar9 & 0xff) * 2] == uVar24) goto LAB_002811cc;
  }
LAB_002811c8:
  uVar18 = 0;
LAB_002811cc:
  uVar24 = (uint)uVar18;
  *param_3 = 1 << (ulong)(uVar24 & 0x1f) | *param_3;
  *(undefined1 *)(param_1[5] + uVar18) = uVar25;
  uVar8 = (uint)*(ushort *)((long)param_1 + 0x3c);
  if (*(ushort *)((long)param_1 + 0x3c) != 0) {
    bVar11 = 0;
    do {
      lVar14 = param_1[1];
      lVar16 = (ulong)(uVar8 * uVar24) + (ulong)bVar11;
      bVar19 = *(byte *)(lVar14 + lVar16);
      if (((bVar19 != uVar24) && ((uint)bVar19 != (uint)bVar11)) && (bVar19 < uVar8)) {
        *(char *)(param_1[2] + (ulong)bVar19) = *(char *)(param_1[2] + (ulong)bVar19) + -1;
        lVar14 = param_1[1];
        lVar16 = (ulong)bVar11 + *(ushort *)((long)param_1 + 0x3c) * uVar18;
      }
      *(char *)(lVar14 + lVar16) = (char)uVar18;
      uVar1 = *(ushort *)((long)param_1 + 0x3c);
      lVar14 = param_1[1];
      lVar16 = uVar18 + (ulong)bVar11 * (ulong)uVar1;
      bVar19 = *(byte *)(lVar14 + lVar16);
      bVar6 = false;
      bVar7 = false;
      if ((uint)bVar19 != (uint)bVar11 && bVar19 != uVar24) {
        bVar7 = bVar19 <= uVar1;
        bVar6 = uVar1 == bVar19;
      }
      if (bVar7 && !bVar6) {
        *(char *)(param_1[2] + (ulong)bVar19) = *(char *)(param_1[2] + (ulong)bVar19) + -1;
        lVar14 = param_1[1];
        lVar16 = (ulong)*(ushort *)((long)param_1 + 0x3c) * (ulong)bVar11 + uVar18;
      }
      *(byte *)(lVar14 + lVar16) = bVar11;
      bVar11 = bVar11 + 1;
      uVar8 = (uint)*(ushort *)((long)param_1 + 0x3c);
    } while ((ushort)bVar11 < *(ushort *)((long)param_1 + 0x3c));
    if (uVar8 != 0) {
      uVar13 = 0;
      uVar12 = 0;
      do {
        uVar15 = 0;
        bVar11 = 0;
        do {
          lVar16 = (ulong)(uVar8 * uVar13) + (ulong)uVar15;
          bVar19 = *(byte *)(param_1[1] + lVar16);
          if (((bVar19 == uVar24) && ((uint)bVar19 != (uVar12 & 0xff))) && (bVar19 != bVar11)) {
            *(char *)(param_1[1] + lVar16) = (char)param_1[8];
            uVar8 = (uint)*(ushort *)((long)param_1 + 0x3c);
          }
          bVar11 = bVar11 + 1;
          uVar15 = (uint)bVar11;
        } while (uVar15 < uVar8);
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xff;
      } while (uVar13 < uVar8);
    }
  }
  return 0;
}

