
uint FUN_013f4170(long param_1,uint param_2,int *param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  void *__s;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  long *plVar21;
  int iVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_838;
  int local_834;
  undefined *local_830;
  undefined1 auStack_828 [1876];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  long local_a0 [2];
  
  local_a4 = 2;
  if ((param_4 & 1) == 0) {
    local_a4 = (uint)(*param_3 == 1) << 2;
  }
  uVar12 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
  if (uVar12 < *(uint *)(param_1 + 0x328)) {
    puVar19 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar12 * 8);
    local_a8 = 0;
    if (puVar19 != (uint *)0x0) {
      uVar12 = *puVar19;
      if (uVar12 != 0 && puVar19 != (uint *)(ulong)uVar12) {
        puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
        if (((*puVar20 != 0) && (uVar12 = puVar20[1], uVar12 != 0)) &&
           ((ulong)(ushort)puVar20[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
          if (lVar16 != 0) {
            uVar13 = 0;
            if ((ulong)uVar12 != 0) {
              uVar13 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar12);
            }
            if (*puVar20 <= uVar13) {
              uVar13 = 0xffffffff;
            }
            if ((uVar13 < *(uint *)PTR_DAT_04bbcad8) &&
               (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bbcad8 + 8) + (long)(int)uVar13 * 2),
               local_a8 = (uint)uVar11, uVar11 < 9)) goto LAB_013f4270;
          }
        }
      }
      goto LAB_013f426c;
    }
  }
  else {
LAB_013f426c:
    local_a8 = 0;
  }
LAB_013f4270:
  local_bc = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  local_b0 = CONCAT17((char)(local_b0 >> 0x38),0x1010000);
  local_b8 = CONCAT17((char)(local_b8 >> 0x38),0x1010000);
  if (1 < local_bc) {
    local_bc = 0;
  }
  local_830 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_828,0,0x754);
  uVar12 = nn::os::GetSystemTick();
  local_d4 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  local_d0 = (local_d4 ^ local_d4 >> 0x1e) * 0x6c078965 + 2;
  local_cc = (local_d0 ^ local_d0 >> 0x1e) * 0x6c078965 + 3;
  local_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_830);
  memset(__s,0,0x754);
  plVar21 = (long *)PTR_DAT_04bb32e8;
  local_b8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_b0 = local_b8;
  if ((local_b8 & 0xffff) != 0) {
    local_a0[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
    local_a0[0] = local_a0[0] + 0x3c;
    local_b8 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_a0);
  }
  FUN_013f4bc0(param_1,&local_830,&local_b0,&local_b8,&local_bc,0,0);
  local_838 = 0;
  local_834 = local_b0._2_1_ - 1;
  if (4 < local_b0._4_1_ - 4) {
    if (local_b0._4_1_ - 9 < 7) {
      local_838 = 1;
    }
    else {
      local_838 = (uint)(4 < local_b0._4_1_ - 0x10) << 1;
    }
  }
  lVar16 = (**(code **)(local_830 + 0x20))(&local_830);
  uVar23 = 0;
  do {
    if ((*(uint *)(lVar16 + (uVar23 >> 5) * 4) >> (ulong)((uint)uVar23 & 0x1f) & 1) != 0)
    goto LAB_013f4420;
    uVar12 = (uint)uVar23 + 1;
    uVar23 = (ulong)uVar12;
  } while (uVar12 != 15000);
  uVar23 = 0;
LAB_013f4420:
  lVar17 = (**(code **)(local_830 + 0x20))(&local_830);
  puVar8 = PTR_DAT_04bbfe58;
  puVar7 = PTR_DAT_04bbcad8;
  puVar6 = PTR_DAT_04bb37e0;
  iVar22 = 15000;
  do {
    if ((*(uint *)(lVar17 + (ulong)(iVar22 - 1U >> 5) * 4) >> (ulong)(iVar22 - 1U & 0x1f) & 1) != 0)
    break;
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  if (iVar22 != (int)uVar23) {
    fVar24 = 0.0;
    uVar12 = 0xfffe;
LAB_013f44a0:
    plVar21 = (long *)(puVar8 + uVar23 * 8);
    if (0x752 < (uint)(uVar23 >> 3)) {
      plVar21 = (long *)puVar8;
    }
    plVar1 = (long *)puVar6;
    if ((uint)uVar23 < 0x3a99) {
      plVar1 = plVar21;
    }
    local_a0[0] = *plVar1;
    uVar13 = FUN_0277d6c4(local_a0);
    uVar15 = (uVar13 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
    if ((uVar15 < *(uint *)(param_1 + 0x328)) &&
       (puVar19 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar15 * 8),
       puVar19 != (uint *)0x0)) {
      uVar15 = *puVar19;
      if (uVar15 == 0 || puVar19 == (uint *)(ulong)uVar15) {
LAB_013f4500:
        uVar15 = 0;
      }
      else {
        puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar15);
        uVar15 = 0;
        if (*puVar20 != 0) {
          uVar15 = puVar20[1];
          if ((uVar15 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar17 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar17 != 0) {
              uVar3 = 0;
              if ((ulong)uVar15 != 0) {
                uVar3 = (uint)((ulong)((long)puVar19 - lVar17) / (ulong)uVar15);
              }
              if (*puVar20 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_051b69d0) &&
                 (uVar15 = (uint)*(ushort *)(DAT_051b69d8 + (long)(int)uVar3 * 2), uVar15 < 7))
              goto LAB_013f4504;
            }
          }
          goto LAB_013f4500;
        }
      }
LAB_013f4504:
      if (uVar15 == local_a4) {
        uVar15 = 0;
        if (((puVar19 != (uint *)0x0) && (uVar3 = *puVar19, uVar3 != 0)) &&
           (puVar19 != (uint *)(ulong)uVar3)) {
          puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar3);
          uVar15 = 0;
          if (*puVar20 != 0) {
            uVar15 = puVar20[1];
            if ((uVar15 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
              lVar17 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
              if (lVar17 != 0) {
                uVar3 = 0;
                if ((ulong)uVar15 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar19 - lVar17) / (ulong)uVar15);
                }
                if (*puVar20 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)puVar7) &&
                   (uVar15 = (uint)*(ushort *)(*(long *)(puVar7 + 8) + (long)(int)uVar3 * 2),
                   uVar15 < 9)) goto LAB_013f45bc;
              }
            }
LAB_013f45b8:
            uVar15 = 0;
          }
        }
LAB_013f45bc:
        if (uVar15 == local_a8) {
          uVar14 = FUN_0277d6c4(local_a0);
          uVar18 = FUN_013f4ed0(param_1,uVar14);
          if ((uVar18 & 1) != 0) {
            uVar11 = FUN_013ef41c(param_1,&local_834,&local_838,uVar13,&local_bc);
            fVar4 = (float)uVar11;
            if ((float)uVar11 <= fVar24) {
              uVar13 = uVar12;
              fVar4 = fVar24;
            }
            fVar24 = fVar4;
            uVar12 = uVar13;
          }
        }
      }
    }
    else if (local_a4 == 0) goto LAB_013f45b8;
    do {
      uVar13 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar13;
      if (0x752 < uVar13 >> 3) {
        uVar13 = 0x3a95;
        goto LAB_013f4644;
      }
    } while ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) == 0);
    goto LAB_013f4498;
  }
  goto LAB_013f471c;
  while( true ) {
    if ((*(uint *)(lVar16 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)
    goto LAB_013f4494;
    uVar13 = uVar13 - 3;
    if (uVar13 == 0xfffffffd) break;
LAB_013f4644:
    uVar15 = uVar13 + 2;
    if (((*(uint *)(lVar16 + (ulong)(uVar15 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0) ||
       (uVar15 = uVar13 + 1,
       (*(uint *)(lVar16 + (ulong)(uVar15 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0)) {
      uVar13 = uVar15;
LAB_013f4494:
      uVar23 = (ulong)(uVar13 + 1);
      goto LAB_013f4498;
    }
  }
  uVar23 = 0;
LAB_013f4498:
  if (iVar22 == (int)uVar23) goto code_r0x013f4710;
  goto LAB_013f44a0;
  while( true ) {
    if ((*(uint *)(lVar16 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
    goto LAB_013f4814;
    uVar12 = uVar12 - 3;
    if (uVar12 == 0xfffffffd) break;
LAB_013f4ac0:
    uVar15 = uVar12 + 2;
    if (((*(uint *)(lVar16 + (ulong)(uVar15 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0) ||
       (uVar15 = uVar12 + 1,
       (*(uint *)(lVar16 + (ulong)(uVar15 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0)) {
      uVar12 = uVar15;
LAB_013f4814:
      uVar23 = (ulong)(uVar12 + 1);
      goto LAB_013f4818;
    }
  }
  uVar23 = 0;
LAB_013f4818:
  uVar12 = uVar13;
  if (iVar22 == (int)uVar23) goto code_r0x013f4b10;
  goto LAB_013f4820;
code_r0x013f4b10:
  if (0.0 < fVar24) {
    return uVar13;
  }
  goto LAB_013f4b14;
code_r0x013f4710:
  plVar21 = (long *)PTR_DAT_04bb32e8;
  if (0.0 < fVar24) {
    return uVar12;
  }
LAB_013f471c:
  local_b0._0_4_ = (uint)*(undefined8 *)(*plVar21 + 0x4060);
  uVar12 = (uint)local_b0;
  local_b0._7_1_ = (undefined1)((ulong)*(undefined8 *)(*plVar21 + 0x4060) >> 0x38);
  local_b0._0_7_ = (uint7)(uint)local_b0;
  local_b8 = CONCAT17(local_b0._7_1_,CONCAT16(0x3b,CONCAT24(0x3b17,uVar12)));
  FUN_013f4bc0(param_1,&local_830,&local_b0,&local_b8,&local_bc,0,0);
  lVar16 = (**(code **)(local_830 + 0x20))(&local_830);
  uVar23 = 0;
  do {
    if ((*(uint *)(lVar16 + (uVar23 >> 5) * 4) >> (ulong)((uint)uVar23 & 0x1f) & 1) != 0)
    goto LAB_013f47a0;
    uVar12 = (uint)uVar23 + 1;
    uVar23 = (ulong)uVar12;
  } while (uVar12 != 15000);
  uVar23 = 0;
LAB_013f47a0:
  lVar17 = (**(code **)(local_830 + 0x20))(&local_830);
  puVar8 = PTR_DAT_04bbfe58;
  puVar7 = PTR_DAT_04bbcad8;
  puVar6 = PTR_DAT_04bb37e0;
  iVar22 = 15000;
  do {
    if ((*(uint *)(lVar17 + (ulong)(iVar22 - 1U >> 5) * 4) >> (ulong)(iVar22 - 1U & 0x1f) & 1) != 0)
    break;
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  local_834 = 0;
  if (iVar22 != (int)uVar23) {
    fVar24 = 0.0;
    uVar12 = 0xfffe;
LAB_013f4820:
    plVar21 = (long *)(puVar8 + uVar23 * 8);
    if (0x752 < (uint)(uVar23 >> 3)) {
      plVar21 = (long *)puVar8;
    }
    plVar1 = (long *)puVar6;
    if ((uint)uVar23 < 0x3a99) {
      plVar1 = plVar21;
    }
    local_a0[0] = *plVar1;
    uVar15 = FUN_0277d6c4(local_a0);
    uVar13 = FUN_0277d6c4(local_a0);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
    if (uVar13 < *(uint *)(param_1 + 0x328)) {
      puVar19 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar13 * 8);
      local_838 = 0;
      if (puVar19 != (uint *)0x0) {
        uVar13 = *puVar19;
        if (uVar13 != 0 && puVar19 != (uint *)(ulong)uVar13) {
          puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar13);
          if (((*puVar20 != 0) && (uVar13 = puVar20[1], uVar13 != 0)) &&
             ((ulong)(ushort)puVar20[2] != 0)) {
            lVar17 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar17 != 0) {
              uVar3 = 0;
              if ((ulong)uVar13 != 0) {
                uVar3 = (uint)((ulong)((long)puVar19 - lVar17) / (ulong)uVar13);
              }
              if (*puVar20 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_051b69d0) &&
                 (uVar11 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar3 * 2),
                 local_838 = (uint)uVar11, uVar11 < 7)) goto LAB_013f4904;
            }
          }
        }
        goto LAB_013f4900;
      }
    }
    else {
LAB_013f4900:
      local_838 = 0;
    }
LAB_013f4904:
    uVar13 = uVar12;
    if (local_838 == local_a4) {
      uVar3 = (uVar15 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
      if ((uVar3 < *(uint *)(param_1 + 0x328)) &&
         (puVar19 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar3 * 8),
         puVar19 != (uint *)0x0)) {
        uVar3 = *puVar19;
        local_838 = 0;
        if ((uVar3 != 0) && (puVar19 != (uint *)(ulong)uVar3)) {
          puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar3);
          local_838 = 0;
          if (*puVar20 != 0) {
            uVar3 = puVar20[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
              lVar17 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
              if (lVar17 != 0) {
                uVar2 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar19 - lVar17) / (ulong)uVar3);
                }
                if (*puVar20 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)puVar7) &&
                   (local_838 = (uint)*(ushort *)(*(long *)(puVar7 + 8) + (long)(int)uVar2 * 2),
                   local_838 < 9)) goto LAB_013f49c4;
              }
            }
            goto LAB_013f49c0;
          }
        }
      }
      else {
LAB_013f49c0:
        local_838 = 0;
      }
LAB_013f49c4:
      if (local_838 == local_a8) {
        uVar14 = FUN_0277d6c4(local_a0);
        uVar18 = FUN_013f4ed0(param_1,uVar14);
        if ((uVar18 & 1) != 0) {
          local_838 = 0;
          uVar11 = FUN_013ef41c(param_1,&local_834,&local_838,uVar15,&local_bc);
          fVar25 = (float)uVar11;
          local_838 = 1;
          fVar4 = fVar25;
          if (fVar25 <= fVar24) {
            fVar4 = fVar24;
          }
          uVar11 = FUN_013ef41c(param_1,&local_834,&local_838,uVar15,&local_bc);
          fVar26 = (float)uVar11;
          local_838 = 2;
          fVar5 = fVar26;
          if (fVar26 <= fVar4) {
            fVar5 = fVar4;
          }
          uVar11 = FUN_013ef41c(param_1,&local_834,&local_838,uVar15,&local_bc);
          bVar9 = true;
          if ((fVar26 <= fVar4) && (bVar9 = false, !NAN(fVar24) && !NAN(fVar25))) {
            bVar9 = fVar24 < fVar25;
          }
          fVar24 = (float)uVar11;
          bVar10 = true;
          if ((!bVar9) && (bVar10 = false, !NAN(fVar5) && !NAN(fVar24))) {
            bVar10 = fVar5 < fVar24;
          }
          uVar13 = uVar15;
          if (!bVar10) {
            uVar13 = uVar12;
          }
          if (fVar24 <= fVar5) {
            fVar24 = fVar5;
          }
        }
      }
    }
    do {
      uVar12 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar12;
      if (0x752 < uVar12 >> 3) {
        uVar12 = 0x3a95;
        goto LAB_013f4ac0;
      }
    } while ((*(uint *)(lVar16 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0);
    goto LAB_013f4818;
  }
LAB_013f4b14:
  switch(local_a8) {
  case 0:
    uVar12 = 0x8a7;
    uVar13 = 0x8d0;
    break;
  default:
    uVar12 = 0x148;
    uVar13 = 0x8d8;
    break;
  case 2:
    uVar12 = 0x8a9;
    uVar13 = 0x8de;
    goto LAB_013f4b7c;
  case 3:
    uVar12 = 0x8ba;
    uVar13 = 0x8db;
LAB_013f4b7c:
    uVar15 = 0x8ab;
    goto LAB_013f4b84;
  }
  uVar15 = 0x149;
LAB_013f4b84:
  if (local_a4 != 2) {
    uVar15 = uVar13;
  }
  if (local_a4 != 0) {
    uVar12 = uVar15;
  }
  return uVar12;
}

