
/* WARNING: Removing unreachable block (ram,0x00107b60) */
/* WARNING: Type propagation algorithm not settling */

int FUN_001077f0(long param_1,long *param_2,long param_3,long param_4,short param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort uVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  uint uVar28;
  long lVar29;
  byte *pbVar30;
  uint uVar31;
  byte *local_118;
  int local_104;
  undefined8 *local_e8;
  uint local_d4;
  undefined2 local_d0 [2];
  undefined4 local_cc;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  local_d4 = 0;
  local_68 = 1000;
  uVar31 = (uint)*(ushort *)(param_3 + 0x14);
  uVar13 = (ulong)*(ushort *)(param_3 + 0x18);
  uVar8 = (uint)*(ushort *)(param_3 + 0x18);
  if (param_5 < 1) {
    local_104 = 0;
    uVar20 = uVar8;
  }
  else {
    lVar21 = 0;
    uVar20 = 0;
    local_104 = 0;
    local_e8 = (undefined8 *)0x0;
    do {
      if ((*(char *)(param_1 + 3) == '\x03') &&
         ((*(byte *)(param_4 + lVar21 * 0x88 + 0x67) & 0xf0) != 0x50)) {
        lVar16 = param_4 + lVar21 * 0x88;
        puVar18 = (ushort *)(lVar16 + 0x70);
        puVar17 = (ushort *)(lVar16 + 0x7a);
      }
      else {
        lVar16 = param_4 + lVar21 * 0x88;
        puVar18 = (ushort *)(lVar16 + 0x72);
        puVar17 = (ushort *)(lVar16 + 0x7c);
      }
      iVar12 = (*puVar17 & 0x7f) + (*puVar18 & 0x7f);
      uVar31 = iVar12 + (uVar31 & 0xffff);
      if (*(byte *)((long)param_2 + 0x9266) < uVar31) {
        return 0;
      }
      puVar24 = (undefined8 *)(param_4 + lVar21 * 0x88);
      if (*(long *)(param_4 + lVar21 * 0x88 + 0x10) == 0) {
        if ((*(uint *)(param_3 + 0x10) >> 0xf & 1) != 0) {
          lVar16 = *(long *)(param_3 + 8);
          uVar13 = (ulong)((int)uVar13 - 1);
          uVar14 = uVar13 & 0xffff;
          local_e8 = (undefined8 *)(lVar16 + uVar14 * 0x88);
          puVar18 = (ushort *)((long)local_e8 + 0x7a);
          uVar19 = *puVar18;
          if ((uVar19 & 0x7f) == 0) {
            uVar19 = *(ushort *)(param_4 + lVar21 * 0x88 + 0x7a) & 0xff80;
            *puVar18 = uVar19;
          }
          lVar25 = param_4 + lVar21 * 0x88;
          lVar29 = lVar16 + uVar14 * 0x88;
          uVar6 = *(ushort *)(lVar25 + 0x7c);
          *(ushort *)(lVar29 + 0x7c) = uVar6 & 0xff80 | *(ushort *)(lVar29 + 0x7c) & 0x7f;
          uVar1 = *(short *)(lVar25 + 0x7a) + uVar19;
          *puVar18 = uVar19 & 0xff80 | uVar1 & 0x7f;
          *(ushort *)(lVar29 + 0x7c) = uVar6 & 0xff80 | uVar1 & 0x7f;
          local_104 = local_104 + 1;
          if (*(short *)(lVar29 + 0x78) < *(short *)(lVar25 + 0x78)) {
            *(short *)(lVar29 + 0x78) = *(short *)(lVar25 + 0x78);
          }
          if (*(long *)(lVar16 + uVar14 * 0x88 + 0x10) != 0) {
            lVar16 = lVar16 + uVar14 * 0x88;
            puVar24 = (undefined8 *)0x0;
            goto LAB_001078f4;
          }
          puVar24 = (undefined8 *)0x0;
        }
        uVar8 = 1;
        puVar23 = local_e8;
        if ((uint)*(ushort *)(param_3 + 0x16) < ((uint)uVar13 & 0xffff) + 1) {
          return 0;
        }
      }
      else {
        if ((*(uint *)(param_3 + 0x10) >> 0xf & 1) != 0) {
          *(undefined4 *)(param_3 + 0x10) = 0;
          return 0;
        }
        lVar16 = param_4 + lVar21 * 0x88;
LAB_001078f4:
        bVar5 = *(byte *)(lVar16 + 0x66) >> 4;
        uVar8 = (uint)bVar5;
        if (bVar5 == 0) {
          uVar8 = 1;
        }
        puVar23 = local_e8;
        if ((uint)*(ushort *)(param_3 + 0x16) < uVar8 + ((uint)uVar13 & 0xffff)) {
          return 0;
        }
      }
      iVar22 = (int)uVar13;
      if (uVar20 < *(byte *)(param_4 + 0x138)) {
        if ((*(ushort *)(param_4 + lVar21 * 0x10 + 0x11c) & 0x8000) != 0) {
          uVar8 = 0;
        }
        if (puVar24 == (undefined8 *)0x0) goto LAB_00107b68;
LAB_00107938:
        memcpy((void *)(*(long *)(param_3 + 8) + (uVar13 & 0xffff) * 0x88),puVar24,0x88);
        local_e8 = puVar23;
        if (*(byte *)(param_4 + 0x138) <= uVar20) goto LAB_00107b78;
LAB_00107960:
        *(uint *)(param_3 + 0x10) = *(ushort *)(param_4 + lVar21 * 0x10 + 0x11c) & 0xc000;
        if (uVar8 == 0) goto LAB_00107b88;
LAB_00107978:
        if (uVar8 == 1) {
          if ((*(char *)(param_1 + 3) == '\x03') && (puVar24[2] == 0)) {
            lVar16 = 0x72;
            if (1 < (byte)((*(byte *)((long)puVar24 + 0x67) >> 4) - 5)) {
              lVar16 = 0x70;
            }
            if ((*(byte *)((long)puVar24 + lVar16) & 0x7f) == 0) goto LAB_00107998;
            local_118 = (byte *)*puVar24;
            iVar12 = iVar12 - (*(ushort *)((long)puVar24 + 0x7a) & 0x7f);
            uVar8 = FUN_00114030(local_118);
            if ((*local_118 < 0xd8) || (0xdb < *local_118)) {
              uVar20 = iVar12 - 1;
              lVar16 = 1;
            }
            else {
              iVar11 = 1;
              if (*(short *)(local_118 + 2) != 0) {
                iVar11 = 2;
              }
              lVar16 = 1;
              if (*(short *)(local_118 + 2) != 0) {
                lVar16 = 2;
              }
              uVar20 = iVar12 - iVar11;
            }
            uVar13 = (ulong)(iVar22 + 1);
            if ((uVar20 & 0xffff) == 0) {
              uVar9 = uVar8;
            }
            else {
              pbVar30 = local_118 + lVar16 * 2;
              uVar28 = uVar8;
              do {
                uVar9 = FUN_00114030(pbVar30);
                if ((uVar9 & 0xff) == (uVar28 & 0xff)) {
                  bVar5 = *pbVar30;
                }
                else {
                  switch(uVar8 & 0xff) {
                  case 0:
                    if ((uVar9 & 0xff) < 2) {
                      uVar8 = 0;
                      bVar5 = *pbVar30;
                      goto joined_r0x00108110;
                    }
                    if ((uVar28 & 0xff) != 1) {
LAB_00108164:
                      lVar16 = *(long *)(param_3 + 8) + (uVar13 & 0xffff) * 0x88;
                      *(ushort *)(lVar16 + -0x16) =
                           *(ushort *)(lVar16 + -0x16) & 0x7f |
                           *(short *)((long)param_2 + 0x924a) << 7;
                    }
                    break;
                  case 1:
                    uVar8 = 0;
                    switch(uVar9 & 0xff) {
                    case 0:
                    case 1:
switchD_00108048_caseD_2:
                      bVar5 = *pbVar30;
                      goto joined_r0x00108110;
                    default:
                      break;
                    case 4:
                    case 5:
                    case 6:
                    case 10:
                      goto switchD_00108048_caseD_7;
                    }
                  case 2:
                    if ((uVar9 & 0xfe) == 2) {
                      uVar8 = 2;
                      bVar5 = *pbVar30;
                      goto joined_r0x00108110;
                    }
                    if ((uVar28 & 0xff) != 3) goto LAB_00108164;
                    break;
                  case 3:
                    uVar8 = 2;
                    switch(uVar9 & 0xff) {
                    case 2:
                    case 3:
                      goto switchD_00108048_caseD_2;
                    case 7:
                    case 8:
                    case 9:
                      goto switchD_00108048_caseD_7;
                    }
                    break;
                  case 4:
                    if (((uVar9 & 0xff) < 7) && ((1 << (ulong)(uVar9 & 0x1f) & 0x52U) != 0)) {
                      uVar8 = 4;
                      bVar5 = *pbVar30;
                      goto joined_r0x00108110;
                    }
                    break;
                  case 5:
                    if (((uVar9 & 0xff) < 7) && ((1 << (ulong)(uVar9 & 0x1f) & 0x62U) != 0)) {
                      uVar8 = 5;
LAB_00108130:
                      bVar5 = *pbVar30;
                      goto joined_r0x00108110;
                    }
                    break;
                  case 6:
                    if (((uVar9 & 0xff) < 0xb) && ((1 << (ulong)(uVar9 & 0x1f) & 0x430U) != 0))
                    goto switchD_00108048_caseD_7;
                    break;
                  case 7:
                    if (((uVar9 & 0xff) < 9) && ((1 << (ulong)(uVar9 & 0x1f) & 0x188U) != 0)) {
                      uVar8 = 7;
                      bVar5 = *pbVar30;
                      goto joined_r0x00108110;
                    }
                    break;
                  case 8:
                    if ((uVar9 & 0xff) == 7) goto switchD_00108048_caseD_7;
                    if ((uVar9 & 0xff) == 9) {
                      uVar8 = 9;
                      goto LAB_00108130;
                    }
                  }
                  lVar29 = (uVar13 & 0xffff) * 0x88 + -0x88;
                  lVar16 = *(long *)(param_3 + 8) + lVar29;
                  *(ushort *)(lVar16 + 0x70) =
                       *(ushort *)(lVar16 + 0x70) & 0xff80 |
                       (ushort)((uint)((int)pbVar30 - (int)local_118) >> 1) & 0x7f;
                  lVar29 = *(long *)(param_3 + 8) + lVar29;
                  *(ushort *)(lVar29 + 0x7a) = *(ushort *)(lVar29 + 0x7a) & 0xff80;
                  if (0x31 < ((uint)uVar13 & 0xffff)) {
                    return 0;
                  }
                  lVar16 = (uVar13 & 0xffff) * 0x88;
                  memcpy((void *)(*(long *)(param_3 + 8) + lVar16),puVar24,0x88);
                  *(byte **)(*(long *)(param_3 + 8) + lVar16) = pbVar30;
                  lVar16 = *(long *)(param_3 + 8) + lVar16;
                  uVar13 = (ulong)((uint)uVar13 + 1);
                  *(ushort *)(lVar16 + 0x70) =
                       *(ushort *)(lVar16 + 0x70) & 0xff80 | (ushort)uVar20 & 0x7f;
                  local_118 = pbVar30;
switchD_00108048_caseD_7:
                  bVar5 = *pbVar30;
                  uVar8 = uVar9;
                }
joined_r0x00108110:
                if ((bVar5 < 0xd8) || (0xdb < bVar5)) {
                  uVar20 = uVar20 - 1;
                  pbVar30 = pbVar30 + 2;
                }
                else {
                  iVar12 = 1;
                  if (*(short *)(pbVar30 + 2) != 0) {
                    iVar12 = 2;
                  }
                  lVar16 = 1;
                  if (*(short *)(pbVar30 + 2) != 0) {
                    lVar16 = 2;
                  }
                  uVar20 = uVar20 - iVar12;
                  pbVar30 = pbVar30 + lVar16 * 2;
                }
                uVar28 = uVar9;
              } while ((uVar20 & 0xffff) != 0);
            }
            if ((uVar8 & 0xff) != 2) {
              if (((uVar8 & 0xff) == 0) && ((uVar9 & 0xff) != 1)) goto LAB_00108258;
              goto LAB_001079b4;
            }
            if ((uVar9 & 0xff) == 3) goto LAB_001079b4;
LAB_00108258:
            lVar16 = *(long *)(param_3 + 8) + (uVar13 & 0xffff) * 0x88;
            *(ushort *)(lVar16 + -0x16) =
                 *(ushort *)(lVar16 + -0x16) & 0x7f | *(short *)((long)param_2 + 0x924a) << 7;
            cVar4 = *(char *)(param_1 + 3);
          }
          else {
LAB_00107998:
            lVar16 = *(long *)(param_3 + 8);
            uVar13 = uVar13 & 0xffff;
            if (*(long *)(lVar16 + uVar13 * 0x88 + 0x10) == 0) {
              lVar29 = lVar16 + uVar13 * 0x88;
              bVar5 = (*(byte *)(lVar29 + 0x67) >> 4) - 5;
              puVar18 = (ushort *)(lVar29 + 0x72);
              if (1 < bVar5) {
                puVar18 = (ushort *)(lVar29 + 0x70);
              }
              if ((*puVar18 & 0x7f) != 0) {
                puVar18 = (ushort *)(lVar29 + 0x72);
                if (1 < bVar5) {
                  puVar18 = (ushort *)(lVar29 + 0x70);
                }
                sVar7 = FUN_00113d80(*(undefined8 *)(lVar16 + uVar13 * 0x88),*puVar18 & 0x7f);
                if ((ushort)(sVar7 - 0xbU) < 2) {
                  lVar16 = *(long *)(param_3 + 8) + uVar13 * 0x88;
                  *(ushort *)(lVar16 + 0x72) =
                       *(ushort *)(lVar16 + 0x72) & 0x7f | *(short *)((long)param_2 + 0x924a) << 7;
                }
              }
            }
            uVar13 = (ulong)(iVar22 + 1);
LAB_001079b4:
            cVar4 = *(char *)(param_1 + 3);
          }
          if ((cVar4 == '\x03') && (1 < ((uint)uVar13 & 0xffff))) {
            lVar16 = *(long *)(param_3 + 8);
            uVar14 = uVar13 & 0xffff;
            lVar29 = lVar16 + uVar14 * 0x88;
            pbVar30 = (byte *)(lVar29 + -0x9e);
            if (1 < (byte)((*(byte *)(lVar29 + -0xa9) >> 4) - 5)) {
              pbVar30 = (byte *)(lVar29 + -0xa0);
            }
            pbVar3 = (byte *)(lVar29 + -0x16);
            if (1 < (byte)((*(byte *)(lVar29 + -0x21) >> 4) - 5)) {
              pbVar3 = (byte *)(lVar29 + -0x18);
            }
            uVar8 = *pbVar3 & 0x7f;
            if (uVar8 < 3) {
              bVar5 = *pbVar30;
              pbVar30 = (byte *)(lVar16 + (uVar14 - 2) * 0x88 + 0x7a);
              if ((*pbVar30 & 0x7f) == 0) {
                sVar7 = FUN_00113d80(*(undefined8 *)(lVar16 + (uVar14 - 1) * 0x88),uVar8);
                if (sVar7 == 3) {
                  puVar24 = (undefined8 *)(lVar29 + -0x110);
                  sVar7 = FUN_00113d80(*puVar24,bVar5 & 0x7f);
                  if (sVar7 == 3) {
                    uVar15 = *puVar24;
                    iVar12 = uVar8 + (bVar5 & 0x7f);
                    sVar7 = *(short *)((long)param_2 + 0x9246);
                    lVar29 = param_2[0x1249];
                    lVar25 = lVar16 + (uVar14 - 2) * 0x88;
                    *(undefined2 *)(lVar25 + 0x80) = 1;
                    FUN_0010d880();
                    *(undefined2 *)(lVar25 + 0x80) = 0x801;
                    *(ushort *)(lVar25 + 0x70) = (ushort)iVar12 & 0x7f | sVar7 << 7;
                    *(ushort *)(lVar25 + 0x72) = (ushort)iVar12 & 0x7f | (short)lVar29 << 7;
                    uVar2 = 0x8ad0;
                    if (-0x8001 < iVar12 * -1000) {
                      uVar2 = (short)((uint)(iVar12 * -0x3e80000) >> 0x10);
                    }
                    *(undefined2 *)(lVar25 + 8) = uVar2;
                    *(undefined1 *)(lVar25 + 0x74) = 2;
                    *puVar24 = uVar15;
                    lVar16 = lVar16 + (uVar14 - 1) * 0x88;
                    *(undefined2 *)(lVar25 + 0x78) = *(undefined2 *)(lVar16 + 0x78);
                    *(undefined2 *)pbVar30 = *(undefined2 *)(lVar16 + 0x7a);
                    *(undefined2 *)(lVar25 + 0x7c) = *(undefined2 *)(lVar16 + 0x7c);
                    local_104 = local_104 + 1;
                    uVar13 = (ulong)((uint)uVar13 - 1);
                  }
                }
              }
            }
          }
        }
        else {
          local_d0[0] = *(undefined2 *)(puVar24 + 1);
          lVar29 = puVar24[0xf];
          plVar26 = puVar24 + 2;
          local_c8 = *plVar26;
          uStack_c0 = puVar24[3];
          local_b8 = puVar24[4];
          uStack_b0 = puVar24[5];
          local_a8 = puVar24[6];
          uStack_a0 = puVar24[7];
          local_98 = puVar24[8];
          uStack_90 = puVar24[9];
          local_88 = puVar24[10];
          uStack_80 = puVar24[0xb];
          local_78 = puVar24[0xc];
          uStack_70 = puVar24[0xd];
          plVar10 = (long *)*param_2;
          lVar16 = *plVar26;
          if (*plVar10 == lVar16) {
            lVar25 = 0;
LAB_001082cc:
            local_cc = (undefined4)plVar10[lVar25 * 10 + 6];
            local_d4 = *(uint *)(plVar10 + lVar25 * 10 + 6);
          }
          else {
            if (plVar10[10] == lVar16) {
              lVar25 = 1;
              goto LAB_001082cc;
            }
            if (plVar10[0x14] == lVar16) {
              lVar25 = 2;
              goto LAB_001082cc;
            }
            if (plVar10[0x1e] == lVar16) {
              lVar25 = 3;
              goto LAB_001082cc;
            }
            if (plVar10[0x28] == lVar16) {
              lVar25 = 4;
              goto LAB_001082cc;
            }
            if (plVar10[0x32] == lVar16) {
              lVar25 = 5;
              goto LAB_001082cc;
            }
            if (plVar10[0x3c] == lVar16) {
              lVar25 = 6;
              goto LAB_001082cc;
            }
            if (plVar10[0x46] == lVar16) {
              lVar25 = 7;
              goto LAB_001082cc;
            }
            if (plVar10[0x50] == lVar16) {
              lVar25 = 8;
              goto LAB_001082cc;
            }
            if (plVar10[0x5a] == lVar16) {
              lVar25 = 9;
              goto LAB_001082cc;
            }
            if (plVar10[100] == lVar16) {
              lVar25 = 10;
              goto LAB_001082cc;
            }
            if (plVar10[0x6e] == lVar16) {
              lVar25 = 0xb;
              goto LAB_001082cc;
            }
            if (plVar10[0x78] == lVar16) {
              lVar25 = 0xc;
              goto LAB_001082cc;
            }
            if (plVar10[0x82] == lVar16) {
              lVar25 = 0xd;
              goto LAB_001082cc;
            }
            if (plVar10[0x8c] == lVar16) {
              lVar25 = 0xe;
              goto LAB_001082cc;
            }
            if (plVar10[0x96] == lVar16) {
              lVar25 = 0xf;
              goto LAB_001082cc;
            }
            if (plVar10[0xa0] == lVar16) {
              lVar25 = 0x10;
              goto LAB_001082cc;
            }
            if (plVar10[0xaa] == lVar16) {
              lVar25 = 0x11;
              goto LAB_001082cc;
            }
            if (plVar10[0xb4] == lVar16) {
              lVar25 = 0x12;
              goto LAB_001082cc;
            }
            lVar25 = 0x14;
            if (plVar10[0xbe] == lVar16) {
              lVar25 = 0x13;
              goto LAB_001082cc;
            }
          }
          sVar7 = FUN_00109d40(param_1,plVar10,local_d0,lVar25,puVar24);
          if (sVar7 < 0) {
            return 0;
          }
          puVar24[4] = local_b8;
          puVar24[5] = uStack_b0;
          *plVar26 = local_c8;
          puVar24[3] = uStack_c0;
          puVar24[8] = local_98;
          puVar24[9] = uStack_90;
          puVar24[6] = local_a8;
          puVar24[7] = uStack_a0;
          puVar24[0xc] = local_78;
          puVar24[0xd] = uStack_70;
          puVar24[10] = local_88;
          puVar24[0xb] = uStack_80;
          if (((*(char *)(param_1 + 3) != '\x03') && (lVar16 = *plVar26, lVar16 != 0)) &&
             (1 < *(byte *)(puVar24 + 0xd) - 1)) {
            if (*(byte *)(puVar24 + 0xd) == 3) {
              uVar20 = *(int *)(lVar16 + 0x70);
            }
            else {
              uVar20 = (*(uint *)(lVar16 + 8) & 0xff00ff00) >> 8 |
                       (*(uint *)(lVar16 + 8) & 0xff00ff) << 8;
              uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
            }
            if ((uVar20 == 0x80020000) &&
               ((int)((int)(((local_d4 >> 0x10) - (local_d4 & 0xffff)) * 8) / 10 +
                     (local_d4 & 0xffff)) < (int)(uint)*(ushort *)(puVar24 + 1))) {
              uVar13 = (ulong)(iVar22 + 1);
              goto LAB_001084f0;
            }
          }
          *(undefined2 *)((long)puVar24 + 0x7c) = 0;
          *(undefined4 *)(puVar24 + 0xf) = 0;
          lVar25 = ((uVar13 & 0xffff) + (uVar13 & 0xffff) * 0x10) * 8;
          memcpy((void *)(*(long *)(param_3 + 8) + lVar25),puVar24,0x88);
          lVar16 = *(long *)(param_3 + 8);
          plVar10 = (long *)(lVar16 + lVar25);
          uVar8 = uVar8 - 1;
          uVar13 = (ulong)(iVar22 + 1);
          if (uVar8 != 0) {
            uVar14 = uVar13 & 0xffff;
            plVar27 = (long *)(lVar16 + uVar14 * 0x88);
            sVar7 = FUN_0010be60(param_1,plVar10,plVar27,&local_d4);
            plVar26 = plVar10;
            plVar10 = plVar27;
            while( true ) {
              if (sVar7 < 0) {
                return 0;
              }
              lVar25 = 0x72;
              if (1 < (byte)((*(byte *)((long)plVar26 + 0x67) >> 4) - 5)) {
                lVar25 = 0x70;
              }
              lVar16 = lVar16 + uVar14 * 0x88;
              uVar8 = uVar8 - 1;
              uVar13 = (ulong)((int)uVar13 + 1);
              *plVar10 = *plVar26 + ((ulong)*(ushort *)((long)plVar26 + lVar25) & 0x7f) * 2;
              *(byte *)((long)plVar26 + 0x66) = *(byte *)((long)plVar26 + 0x66) & 0xf;
              *(undefined2 *)(lVar16 + 0x7c) = 0;
              *(undefined4 *)(lVar16 + 0x78) = 0;
              if ((uVar8 & 0xff) == 0) break;
              lVar16 = *(long *)(param_3 + 8);
              uVar14 = uVar13 & 0xffff;
              plVar27 = (long *)(lVar16 + uVar14 * 0x88);
              sVar7 = FUN_0010be60(param_1,plVar10,plVar27,&local_d4);
              plVar26 = plVar10;
              plVar10 = plVar27;
            }
          }
          plVar10[0xf] = lVar29;
          *(byte *)((long)plVar10 + 0x66) = *(byte *)((long)plVar10 + 0x66) & 0xf;
        }
      }
      else {
        if (puVar24 != (undefined8 *)0x0) goto LAB_00107938;
LAB_00107b68:
        local_e8 = (undefined8 *)0x0;
        puVar24 = puVar23;
        if (uVar20 < *(byte *)(param_4 + 0x138)) goto LAB_00107960;
LAB_00107b78:
        *(undefined4 *)(param_3 + 0x10) = 0;
        if (uVar8 != 0) goto LAB_00107978;
LAB_00107b88:
        uVar13 = (ulong)(iVar22 + 1);
      }
LAB_001084f0:
      uVar8 = (uint)uVar13;
      lVar21 = lVar21 + 1;
      uVar20 = (uint)lVar21;
    } while (lVar21 < param_5);
    uVar20 = (uint)*(ushort *)(param_3 + 0x18);
  }
  *(short *)(param_3 + 0x14) = (short)uVar31;
  *(short *)(param_3 + 0x18) = (short)uVar8;
  return (local_104 + uVar8) - uVar20;
}

