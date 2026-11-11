
/* WARNING: Removing unreachable block (ram,0x0050f220) */
/* WARNING: Removing unreachable block (ram,0x0050f0e8) */

int FUN_0050ec10(ulong param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  char *local_d0;
  char *local_c8;
  long local_90;
  undefined8 uStack_88;
  char *local_80;
  char *pcStack_78;
  char *local_70;
  char *local_68;
  
  lVar14 = DAT_04c73d08;
  iVar13 = -0xfff4;
  if (DAT_04c73d08 == 0) {
    return -0xff01;
  }
  iVar21 = (int)param_3 - (uint)param_2;
  iVar22 = iVar21 + -1;
  if (iVar21 < 1) {
    uVar20 = 0;
    if (0 < iVar22) goto LAB_0050ec9c;
  }
  else {
    uVar20 = 0;
    do {
      if ((*(byte *)(param_2 + uVar20) | 2) != 0x22) break;
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)iVar21);
    if ((int)uVar20 < iVar22) {
LAB_0050ec9c:
      lVar26 = (long)(int)(~(uint)param_2 + (int)param_3);
      do {
        if ((*(byte *)(param_2 + lVar26) | 2) != 0x22) {
          iVar22 = (int)lVar26;
          break;
        }
        lVar26 = lVar26 + -1;
        iVar22 = iVar22 + -1;
      } while ((int)uVar20 < lVar26);
    }
  }
  pcVar2 = (char *)(param_2 + (uVar20 & 0xffffffff));
  iVar22 = iVar22 - (int)uVar20;
  iVar21 = iVar22 + 1;
  local_68 = pcVar2 + iVar21;
  uVar23 = (uint)param_1;
  local_90 = param_2;
  uStack_88 = param_3;
  local_70 = pcVar2;
  if (9 < (uVar23 & 0xff)) {
    iVar13 = -0xfff6;
    goto LAB_0050ecfc;
  }
  if (iVar21 == 0) {
    if (((uVar23 & 0xff) < 9) && ((1 << (ulong)(uVar23 & 0x1f) & 0x181U) != 0)) {
      iVar13 = -0xfff5;
      goto LAB_0050ecfc;
    }
LAB_0050f3c4:
    iVar13 = 0;
LAB_0050f3c8:
    lVar14 = lVar14 + (param_1 & 0xff | (param_1 & 0xff) << 8) + 0x18;
    FUN_0043a4d0(lVar14,0,0x101);
    FUN_0043a3b0(lVar14,pcVar2,iVar21);
  }
  else if (((iVar22 - 0x23U < 0xdd) && (*pcVar2 == '0')) && (pcVar2[1] == 'x')) {
    uVar19 = (byte)pcVar2[2] - 0x30;
    if ((uVar19 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar19 & 0x3f) & 1) != 0)) {
      uVar24 = (byte)pcVar2[3] - 0x30;
      if ((uVar24 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar24 & 0x3f) & 1) != 0)) {
        uVar25 = (byte)pcVar2[4] - 0x30;
        if ((uVar25 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar25 & 0x3f) & 1) != 0)) {
          uVar5 = (byte)pcVar2[5] - 0x30;
          if ((uVar5 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
            uVar17 = (byte)pcVar2[6] - 0x30;
            if (uVar17 < 0x37) {
              if ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) != 0) {
                uVar6 = (byte)pcVar2[7] - 0x30;
                if ((uVar6 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar6 & 0x3f) & 1) != 0)) {
                  uVar7 = (byte)pcVar2[8] - 0x30;
                  if ((uVar7 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar7 & 0x3f) & 1) != 0)) {
                    uVar8 = (byte)pcVar2[9] - 0x30;
                    if ((uVar8 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar8 & 0x3f) & 1) != 0)) {
                      uVar19 = *(int *)(&DAT_04143ee0 + (long)(char)uVar8 * 4) +
                               (uint)(byte)pcVar2[9] +
                               (*(int *)(&DAT_04143ee0 + (long)(char)uVar7 * 4) +
                                (uint)(byte)pcVar2[8] +
                               (*(int *)(&DAT_04143ee0 + (long)(char)uVar6 * 4) +
                                (uint)(byte)pcVar2[7] +
                               (*(int *)(&DAT_04143ee0 + (long)(char)uVar17 * 4) +
                                (uint)(byte)pcVar2[6] +
                               (*(int *)(&DAT_04143ee0 + (long)(char)uVar5 * 4) +
                                (uint)(byte)pcVar2[5] +
                               (*(int *)(&DAT_04143ee0 + (long)(char)uVar25 * 4) +
                                (uint)(byte)pcVar2[4] +
                               (*(int *)(&DAT_04143ee0 + (long)(char)uVar24 * 4) +
                                (uint)(byte)pcVar2[3] +
                               (*(int *)(&DAT_04143ee0 + (long)(char)uVar19 * 4) +
                               (uint)(byte)pcVar2[2]) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10
                               ) * 0x10;
                      pcVar16 = pcVar2 + 10;
                      if ((int)uVar19 < 0) {
                        uVar24 = 0xffffffff;
                        cVar4 = *pcVar16;
joined_r0x0050f0f8:
                        local_70 = pcVar16;
                        if (cVar4 == ':') {
                          local_70 = pcVar16 + 1;
                          if ((byte)pcVar16[1] - 0x30 < 10) {
                            local_70 = pcVar16 + 2;
                            if ((byte)pcVar16[2] - 0x30 < 10) {
                              local_70 = pcVar16 + 3;
                              if ((byte)pcVar16[3] - 0x30 < 10) {
                                local_70 = pcVar16 + 4;
                                if (((byte)pcVar16[4] - 0x30 < 10) &&
                                   (local_70 = pcVar16 + 5, pcVar16[5] == '-')) {
                                  local_70 = pcVar16 + 6;
                                  if ((uint)((ulong)(byte)pcVar16[6] - 0x30) < 10) {
                                    local_70 = pcVar16 + 7;
                                    if (((uint)((ulong)(byte)pcVar16[7] - 0x30) < 10) &&
                                       (local_70 = pcVar16 + 8, pcVar16[8] == '-')) {
                                      local_70 = pcVar16 + 9;
                                      if ((uint)((ulong)(byte)pcVar16[9] - 0x30) < 10) {
                                        local_70 = pcVar16 + 10;
                                        if (((uint)((ulong)(byte)pcVar16[10] - 0x30) < 10) &&
                                           (local_70 = pcVar16 + 0xb, pcVar16[0xb] == '.')) {
                                          iVar22 = ((byte)pcVar16[4] - 0x30) +
                                                   (((byte)pcVar16[3] - 0x30) +
                                                   (((byte)pcVar16[2] - 0x30) +
                                                   ((byte)pcVar16[1] - 0x30) * 10) * 10) * 10;
                                          local_70 = pcVar16 + 0xc;
                                          if (0x7cd < iVar22) {
                                            lVar26 = ((ulong)(byte)pcVar16[7] - 0x30) +
                                                     ((ulong)(byte)pcVar16[6] - 0x30) * 10;
                                            uVar25 = (uint)lVar26;
                                            if (uVar25 < 0xd) {
                                              lVar18 = ((ulong)(byte)pcVar16[10] - 0x30) +
                                                       ((ulong)(byte)pcVar16[9] - 0x30) * 10;
                                              uVar5 = 1 << (ulong)(uVar25 & 0x1f);
                                              iVar13 = (int)lVar18;
                                              if ((uVar5 & 0x15aa) == 0) {
                                                if ((uVar5 & 0xa50) == 0) {
                                                  if (((uVar25 == 2) && (iVar13 != 0)) &&
                                                     (iVar13 < 0x1e)) goto LAB_0050f2ac;
                                                }
                                                else if ((iVar13 != 0) && (iVar13 < 0x1f)) {
LAB_0050f2ac:
                                                  if ((param_1 & 0xff) != 0) {
                                                    if ((uVar23 & 0xff) == 7) {
                                                      pcVar16 = "Physics_2012";
                                                      goto LAB_0050f2e4;
                                                    }
                                                    if ((uVar23 & 0xff) == 8) {
                                                      pcVar16 = "Destruction_2012";
                                                      goto LAB_0050f2e4;
                                                    }
                                                    iVar13 = FUN_004299f0(&local_70,0x2e,0);
                                                    if (iVar13 == -1) goto LAB_0050f218;
                                                    local_70 = local_70 + (iVar13 + 1);
joined_r0x0050f368:
                                                    if ((int)uVar19 < 0) {
                                                      local_d0 = "Evaluation.";
                                                      local_c8 = "";
                                                      uVar20 = FUN_00429c10(&local_70,&local_d0);
                                                      if ((uVar20 & 1) == 0) goto LAB_0050f218;
                                                      local_70 = local_70 +
                                                                 ((int)local_c8 - (int)local_d0);
                                                    }
                                                    pcVar11 = local_68;
                                                    pcVar16 = local_70;
                                                    if ((9 < (uVar23 & 0xff)) ||
                                                       ((0x3bfU >> (ulong)(uVar23 & 0x1f) & 1) == 0)
                                                       ) goto LAB_0050f3c4;
                                                    uVar5 = *(uint *)(&DAT_04143eb8 +
                                                                     (long)(char)param_1 * 4);
                                                    uVar25 = uVar5 ^ uVar19 & 0x7fffffff;
                                                    if ((int)uVar19 < 0) {
                                                      uVar20 = thunk_FUN_00445f70();
                                                      lVar15 = FUN_0050f7b0();
                                                      iVar13 = -0xfff1;
                                                      if ((uVar20 < lVar15 - 0x1e13380U) ||
                                                         (uVar25 < (uint)(uVar20 >> 8)))
                                                      goto LAB_0050f3f8;
                                                    }
                                                    iVar10 = iVar22 + -0x7b2;
                                                    iVar13 = iVar22 + -0x7af;
                                                    if (-1 < iVar10) {
                                                      iVar13 = iVar10;
                                                    }
                                                    iVar22 = (int)((ulong)((long)iVar10 *
                                                                          -0x51eb851f) >> 0x20);
                                                    uVar17 = (uint)((ulong)((lVar18 + (iVar10 * 
                                                  0x16d + (iVar13 >> 2) +
                                                  ((iVar22 >> 5) - (iVar22 >> 0x1f)) + iVar10 / 400)
                                                  + *(long *)(&DAT_04143e50 + lVar26 * 8)) * 0x15180
                                                  + -0x15180) >> 8);
                                                  bVar12 = uVar17 <= uVar25 + 0x3f4;
                                                  bVar1 = uVar25 <= uVar17 + 0x3f4;
                                                  iVar13 = -0xfff1;
                                                  if (bVar12 && bVar1) {
                                                    iVar13 = 0;
                                                  }
                                                  if ((-1 < (int)uVar19) && (bVar12 && bVar1)) {
                                                    uVar20 = (long)pcVar11 - (long)pcVar16;
                                                    if ((int)uVar20 < 1) {
                                                      uVar19 = 0;
                                                    }
                                                    else {
                                                      if ((uVar20 & 0xffffffff) == 1) {
                                                        lVar26 = 0;
                                                        uVar19 = 0;
                                                      }
                                                      else {
                                                        lVar26 = 0;
                                                        uVar19 = 0;
                                                        do {
                                                          pbVar3 = (byte *)(pcVar16 + lVar26);
                                                          lVar26 = lVar26 + 2;
                                                          uVar19 = ((uint)pbVar3[1] +
                                                                   (uVar19 + *pbVar3) * 0x17) * 0x17
                                                          ;
                                                        } while ((uVar20 & 0xffffffff) -
                                                                 (uVar20 & 1) != lVar26);
                                                      }
                                                      if ((uVar20 & 1) != 0) {
                                                        uVar19 = (uVar19 + (byte)pcVar16[lVar26]) *
                                                                 0x17;
                                                      }
                                                      uVar19 = uVar19 & 0x7fffffff;
                                                    }
                                                    iVar13 = 0;
                                                    if (uVar24 != (uVar19 ^ uVar5)) {
                                                      iVar13 = -0xfff4;
                                                    }
                                                  }
                                                  if (-1 < iVar13) goto LAB_0050f3c8;
                                                  goto LAB_0050f3f8;
                                                  }
                                                  pcVar16 = "Physics";
LAB_0050f2e4:
                                                  FUN_004297c0(&local_80,pcVar16);
                                                  local_d0 = local_80;
                                                  local_c8 = pcStack_78;
                                                  uVar20 = FUN_00429c10(&local_70,&local_d0);
                                                  if ((uVar20 & 1) != 0) {
                                                    local_70 = local_70 +
                                                               ((int)local_c8 - (int)local_d0);
                                                    if (*local_70 == '.') {
                                                      local_70 = local_70 + 1;
                                                      goto joined_r0x0050f368;
                                                    }
                                                  }
                                                }
                                              }
                                              else if ((iVar13 != 0) && (iVar13 < 0x20))
                                              goto LAB_0050f2ac;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        local_70 = pcVar16;
                        if (*pcVar16 == '-') {
                          local_70 = pcVar2 + 0xb;
                          if ((pcVar2[0xb] == '0') && (pcVar2[0xc] == 'x')) {
                            uVar24 = (byte)pcVar2[0xd] - 0x30;
                            if ((uVar24 < 0x37) &&
                               ((0x7e0000007e03ffU >> ((ulong)uVar24 & 0x3f) & 1) != 0)) {
                              uVar25 = (byte)pcVar2[0xe] - 0x30;
                              if ((uVar25 < 0x37) &&
                                 ((0x7e0000007e03ffU >> ((ulong)uVar25 & 0x3f) & 1) != 0)) {
                                uVar5 = (byte)pcVar2[0xf] - 0x30;
                                if ((uVar5 < 0x37) &&
                                   ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
                                  uVar17 = (byte)pcVar2[0x10] - 0x30;
                                  if ((uVar17 < 0x37) &&
                                     ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) != 0)) {
                                    uVar6 = (byte)pcVar2[0x11] - 0x30;
                                    if ((uVar6 < 0x37) &&
                                       ((0x7e0000007e03ffU >> ((ulong)uVar6 & 0x3f) & 1) != 0)) {
                                      uVar7 = (byte)pcVar2[0x12] - 0x30;
                                      if ((uVar7 < 0x37) &&
                                         ((0x7e0000007e03ffU >> ((ulong)uVar7 & 0x3f) & 1) != 0)) {
                                        uVar8 = (byte)pcVar2[0x13] - 0x30;
                                        if ((uVar8 < 0x37) &&
                                           ((0x7e0000007e03ffU >> ((ulong)uVar8 & 0x3f) & 1) != 0))
                                        {
                                          uVar9 = (byte)pcVar2[0x14] - 0x30;
                                          if ((uVar9 < 0x37) &&
                                             ((0x7e0000007e03ffU >> ((ulong)uVar9 & 0x3f) & 1) != 0)
                                             ) {
                                            pcVar16 = pcVar2 + 0x15;
                                            uVar24 = *(int *)(&DAT_04143ee0 + (long)(char)uVar9 * 4)
                                                     + (uint)(byte)pcVar2[0x14] +
                                                     (*(int *)(&DAT_04143ee0 + (long)(char)uVar8 * 4
                                                              ) + (uint)(byte)pcVar2[0x13] +
                                                     (*(int *)(&DAT_04143ee0 + (long)(char)uVar7 * 4
                                                              ) + (uint)(byte)pcVar2[0x12] +
                                                     (*(int *)(&DAT_04143ee0 + (long)(char)uVar6 * 4
                                                              ) + (uint)(byte)pcVar2[0x11] +
                                                     (*(int *)(&DAT_04143ee0 +
                                                              (long)(char)uVar17 * 4) +
                                                      (uint)(byte)pcVar2[0x10] +
                                                     (*(int *)(&DAT_04143ee0 + (long)(char)uVar5 * 4
                                                              ) + (uint)(byte)pcVar2[0xf] +
                                                     (*(int *)(&DAT_04143ee0 +
                                                              (long)(char)uVar25 * 4) +
                                                      (uint)(byte)pcVar2[0xe] +
                                                     (*(int *)(&DAT_04143ee0 +
                                                              (long)(char)uVar24 * 4) +
                                                     (uint)(byte)pcVar2[0xd]) * 0x10) * 0x10) * 0x10
                                                     ) * 0x10) * 0x10) * 0x10) * 0x10;
                                            cVar4 = *pcVar16;
                                            goto joined_r0x0050f0f8;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0050f218:
              iVar13 = -0xfff4;
              goto LAB_0050ecfc;
            }
          }
        }
      }
    }
  }
LAB_0050f3f8:
  if (-1 < iVar13) {
    return iVar13;
  }
LAB_0050ecfc:
  if (1 < DAT_04c73ce8) {
    FUN_00444bc0(&local_d0,&DAT_04c73c98,2);
    if ((uVar23 & 0xff) < 10) {
      local_70 = (&PTR_s_Physics_048c6f80)[(char)param_1];
    }
    else {
      local_70 = "Invalid";
    }
    if (iVar13 + 0xfff6U < 6) {
      local_80 = (&PTR_s_Invalid_Product_048c6f50)[(int)(iVar13 + 0xfff6U)];
    }
    else {
      local_80 = "Unknown Error";
    }
    lVar14 = FUN_004446b0(&local_d0,"  [ERROR: INVALID KEY] {0,-16} : {} ({})",&DAT_048c6f30,
                          &local_70,&local_90,&local_80);
    *(char **)(lVar14 + 0x28) =
         "D:/work/Clients/Nintendo_104/2019_1_0_Release/Source/Common/Internal/Keycode/hkKeycodeManager.cpp"
    ;
    *(undefined8 *)(lVar14 + 0x30) = 0x7b;
    FUN_00444c00(&local_d0);
  }
  return iVar13;
}

