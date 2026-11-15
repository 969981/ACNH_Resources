
undefined8 FUN_021f19e0(float *param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ushort uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  char cVar21;
  undefined8 *puVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  int local_14c;
  undefined *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  uint *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined *local_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  byte local_f8;
  int local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  int local_c4;
  undefined **local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  undefined8 local_98;
  byte local_90;
  undefined4 local_78;
  undefined4 local_74;
  
  puVar8 = PTR_DAT_04bbfe68;
  puVar2 = PTR_DAT_04bb2720;
  local_100 = 0;
  local_108 = PTR_DAT_04bbfe68 + 0x10;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if (lVar15 == 0) {
    puVar22 = &DAT_055c04a0;
  }
  else {
    puVar22 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar9 = FUN_006bd550(*puVar22,0);
      puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar22 = &DAT_055c04a0;
      }
    }
  }
  local_fc = *(undefined4 *)(puVar22 + 7);
  local_f8 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb2010;
  local_f8 = local_f8 & 1;
  local_110 = *(undefined4 *)(param_2 + 0x10);
  uStack_10c = *(undefined4 *)(param_2 + 0x14);
  local_128 = PTR_DAT_04bb2010 + 0x10;
  local_120 = 0;
  puStack_118 = local_128;
  puVar11 = (undefined4 *)FUN_01a5190c(&local_108,0,&puStack_118,&local_128);
  puVar7 = PTR_DAT_04bb43c0;
  local_130 = *puVar11;
  local_12c = puVar11[1];
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_130);
  if (*(long *)puVar7 == 0) {
    return 0;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar10) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
    return 0;
  }
  uVar12 = FUN_0277e158(&local_130);
  if ((uVar12 & 1) != 0) {
    return 0;
  }
  lVar15 = *(long *)puVar7;
  local_b0 = (undefined *)0x0;
  local_c0 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_b8 = (undefined8 *)CONCAT44(local_12c,local_130);
  uVar10 = FUN_0277d6c4(&local_b8);
  if (*(long *)puVar7 == 0) {
LAB_021f1c74:
    uVar14 = 0;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_021f1c74;
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(&local_130);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar10) ||
       (puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8),
       puVar16 == (uint *)0x0)) goto LAB_021f1c74;
    uVar10 = *puVar16;
    uVar14 = 0;
    if ((uVar10 != 0) && (puVar16 != (uint *)(ulong)uVar10)) {
      puVar20 = (uint *)((long)puVar16 - (long)(ulong)uVar10);
      uVar14 = 0;
      if (*puVar20 != 0) {
        uVar10 = puVar20[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar20 + lVar15 + (ulong)(ushort)puVar20[2] * 8;
          if (lVar15 != 0) {
            uVar14 = 0;
            if ((ulong)uVar10 != 0) {
              uVar14 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar10);
            }
            if (*puVar20 <= uVar14) {
              uVar14 = 0xffffffff;
            }
            if ((uVar14 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar14 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar14 * 2),
               uVar14 < 0x52)) goto LAB_021f1c78;
          }
        }
        goto LAB_021f1c74;
      }
    }
  }
LAB_021f1c78:
  if (8 < uVar14 - 1) {
    return 0;
  }
  local_168 = (undefined *)(param_2 + 0x18);
  puVar1 = puVar6 + 0x10;
  iVar9 = *(int *)(param_2 + 0x24) + 1;
  iVar19 = *(int *)(param_2 + 0x10);
  local_158._4_4_ = *(int *)(param_2 + 0x14);
  local_160 = puVar1;
  local_158._0_4_ = iVar19;
  if (iVar9 != local_158._4_4_) {
    do {
      local_98 = 0;
      local_a0 = puVar1;
      FUN_01a5190c(&local_108,0,&local_160,&local_a0);
      if ((int)local_98 != (int)local_120) {
        return 0;
      }
      if (local_98._4_4_ != local_120._4_4_) {
        return 0;
      }
      if ((int)local_158 < *(int *)(local_168 + 8)) {
        local_158._0_4_ = (int)local_158 + 1;
      }
      else {
        local_158._4_4_ = local_158._4_4_ + 1;
        local_158._0_4_ = *(int *)(param_2 + 0x10);
      }
    } while ((iVar19 != (int)local_158) || (iVar9 != local_158._4_4_));
  }
  lVar15 = *(long *)puVar7;
  local_138 = (uint *)0x0;
  local_140 = local_130;
  uStack_13c = local_12c;
  local_148 = PTR_DAT_04bc0510 + 0x10;
  uVar10 = FUN_0277d6c4(&local_140);
  if (*(long *)puVar7 == 0) {
    puVar16 = (uint *)0x0;
    uVar13 = 0;
    goto LAB_021f1eb0;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(&local_130);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar10) ||
       (puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8),
       puVar16 == (uint *)0x0)) goto LAB_021f1e9c;
    uVar10 = *puVar16;
    uVar13 = 0;
    local_138 = puVar16;
    if ((uVar10 != 0) && (puVar16 != (uint *)(ulong)uVar10)) {
      puVar20 = (uint *)((long)puVar16 - (long)(ulong)uVar10);
      uVar13 = 0;
      if (*puVar20 == 0) goto LAB_021f1eb0;
      uVar10 = puVar20[1];
      if ((uVar10 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar20 + lVar15 + (ulong)(ushort)puVar20[2] * 8;
        if (lVar15 != 0) {
          uVar14 = 0;
          if ((ulong)uVar10 != 0) {
            uVar14 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar10);
          }
          if (*puVar20 <= uVar14) {
            uVar14 = 0xffffffff;
          }
          if ((uVar14 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar14 * 2),
             uVar13 < 0x52)) goto LAB_021f1eb0;
        }
      }
      goto LAB_021f1ea0;
    }
  }
  else {
LAB_021f1e9c:
    puVar16 = (uint *)0x0;
LAB_021f1ea0:
    uVar13 = 0;
  }
LAB_021f1eb0:
  if ((uVar13 == 9) || (uVar13 == 2)) {
    iVar9 = FUN_01ae98d0(&local_148);
  }
  else {
    iVar9 = *param_3;
  }
  local_168 = puVar6 + 0x10;
  if (iVar9 == 2) {
    iVar19 = *(int *)(param_2 + 0x20);
    iVar9 = *(int *)(param_2 + 0x24) + -1;
LAB_021f1f28:
    local_150 = *(int *)(param_2 + 0x10);
    local_14c = iVar9;
  }
  else {
    if (iVar9 == 1) {
      iVar9 = *(int *)(param_2 + 0x24);
      iVar19 = *(int *)(param_2 + 0x20) + 1;
      local_14c = *(int *)(param_2 + 0x14);
    }
    else {
      if (iVar9 == 0) {
        iVar19 = *(int *)(param_2 + 0x20);
        iVar9 = *(int *)(param_2 + 0x24) + 1;
        goto LAB_021f1f28;
      }
      local_14c = *(int *)(param_2 + 0x14);
      iVar19 = *(int *)(param_2 + 0x10) + -1;
      iVar9 = *(int *)(param_2 + 0x24);
    }
    local_150 = iVar19;
  }
  local_98 = local_98 & 0xffffffff00000000;
  local_160._0_4_ = local_150;
  if (iVar19 <= local_150) {
    local_160._0_4_ = iVar19;
  }
  if (local_150 <= iVar19) {
    local_150 = iVar19;
  }
  local_160._4_4_ = local_14c;
  if (iVar9 <= local_14c) {
    local_160._4_4_ = iVar9;
  }
  if (local_14c <= iVar9) {
    local_14c = iVar9;
  }
  local_a0 = puVar8 + 0x10;
  lVar15 = *(long *)puVar2;
  local_158 = local_168;
  if (lVar15 == 0) {
    puVar22 = &DAT_055c04a0;
  }
  else {
    puVar22 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar9 = FUN_006bd550(*puVar22,0);
      puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar22 = &DAT_055c04a0;
      }
    }
  }
  local_98 = CONCAT44(*(undefined4 *)(puVar22 + 7),(int)local_98);
  local_90 = FUN_017baf44();
  iVar19 = (int)local_160;
  local_90 = local_90 & 1;
  fVar24 = 0.0;
  local_b0 = puVar6 + 0x10;
  iVar9 = local_14c + 1;
  local_a8 = (int)local_160;
  local_a4 = local_160._4_4_;
  local_c0 = &local_168;
  local_b8 = &local_158;
  if (iVar9 != local_160._4_4_) {
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar11 = (undefined4 *)FUN_01a5190c(&local_a0,0,&local_b0,0);
      local_78 = *puVar11;
      local_74 = puVar11[1];
      local_c4 = FUN_0277ebd0(&local_78);
      if (local_c4 == 0) {
        if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
           (lVar15 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar15 == 0)) {
          fVar25 = -500.0;
        }
        else {
          fVar25 = (float)FUN_00963acc(lVar15,&local_b0);
        }
        if (fVar25 <= fVar24) {
          fVar25 = fVar24;
        }
      }
      else {
        lVar23 = *(long *)puVar7;
        uVar10 = FUN_0277d6c4(&local_78);
        lVar15 = *(long *)puVar7;
        fVar25 = 0.0;
        if (lVar15 != 0) {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar23 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            local_d0 = 0;
            local_e0 = PTR_DAT_04bc0510 + 0x10;
            local_d8 = local_78;
            local_d4 = local_74;
            uVar10 = FUN_0277d6c4(&local_d8);
            if (*(long *)puVar7 != 0) {
              lVar15 = *(long *)(lVar15 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                lVar15 = *(long *)PTR_DAT_04bc0428;
                uVar10 = FUN_0277d6c4(&local_78);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                   ((puVar20 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8),
                    puVar20 != (uint *)0x0 && (uVar10 = *puVar20, uVar10 != 0)))) {
                  cVar21 = *PTR_DAT_04bbfe88;
                  do {
                    if (cVar21 == '\0') {
                      cVar21 = '\x01';
                      *PTR_DAT_04bbfe88 = 1;
                      memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                      uVar10 = *puVar20;
                    }
                    else {
                      uVar14 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                      if (-1 < (int)uVar14) {
                        if ((float *)((ulong)uVar14 + (long)puVar20) != (float *)0x0) {
                          fVar25 = *(float *)((ulong)uVar14 + (long)puVar20);
                        }
                        break;
                      }
                      if (uVar14 != 0xffffffff) break;
                    }
                    puVar17 = (uint *)(ulong)uVar10;
                    if ((puVar17 == (uint *)0x0) || (puVar20 == puVar17)) break;
                    lVar15 = 0xc;
                    if (*(char *)((long)puVar20 + (10 - (long)puVar17)) != '\0') {
                      lVar15 = 0x1c;
                    }
                    lVar15 = (long)puVar20 + (lVar15 - (long)puVar17);
                    if (lVar15 == 0) break;
                    uVar12 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar17));
                    *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                    if (uVar12 == 0) break;
                    piVar18 = (int *)(lVar15 + 4);
                    while (piVar18[-1] != -0x3e783aea) {
                      piVar18 = piVar18 + 2;
                      uVar12 = uVar12 - 1;
                      if (uVar12 == 0) goto LAB_021f22a0;
                    }
                    iVar3 = 0;
                    if (*piVar18 != -1) {
                      iVar3 = *piVar18;
                    }
                    *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar3;
                    uVar10 = *puVar20;
                    if (uVar10 == 0) break;
                  } while( true );
                }
              }
            }
          }
        }
LAB_021f22a0:
        puVar11 = (undefined4 *)FUN_01a5190c(&local_a0,1,&local_b0,0);
        local_e8 = *(undefined2 *)puVar11;
        local_e6 = *(undefined1 *)((long)puVar11 + 2);
        local_e5 = *(undefined1 *)((long)puVar11 + 3);
        uVar5 = *puVar11;
        uVar4 = puVar11[1];
        local_e4 = uVar4;
        local_ec = FUN_0277ebd0(&local_78);
        if (local_ec != 0) {
          lVar23 = *(long *)puVar7;
          uVar10 = FUN_0277d6c4(&local_e8);
          lVar15 = *(long *)puVar7;
          if (lVar15 != 0) {
            lVar23 = *(long *)(lVar23 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar23 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              local_d0 = 0;
              local_e0 = puVar2;
              local_d8 = uVar5;
              local_d4 = uVar4;
              uVar10 = FUN_0277d6c4(&local_d8);
              fVar26 = 0.0;
              if (*(long *)puVar7 != 0) {
                lVar15 = *(long *)(lVar15 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar15 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(&local_e8);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                     ((puVar20 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8),
                      puVar20 != (uint *)0x0 && (uVar10 = *puVar20, uVar10 != 0)))) {
                    cVar21 = *PTR_DAT_04bbfe88;
                    do {
                      if (cVar21 == '\0') {
                        cVar21 = '\x01';
                        *PTR_DAT_04bbfe88 = 1;
                        memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                        uVar10 = *puVar20;
                      }
                      else {
                        uVar14 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                        if (-1 < (int)uVar14) {
                          if ((float *)((ulong)uVar14 + (long)puVar20) != (float *)0x0) {
                            fVar26 = *(float *)((ulong)uVar14 + (long)puVar20);
                          }
                          break;
                        }
                        if (uVar14 != 0xffffffff) break;
                      }
                      puVar17 = (uint *)(ulong)uVar10;
                      if ((puVar17 == (uint *)0x0) || (puVar20 == puVar17)) break;
                      lVar15 = 0xc;
                      if (*(char *)((long)puVar20 + (10 - (long)puVar17)) != '\0') {
                        lVar15 = 0x1c;
                      }
                      lVar15 = (long)puVar20 + (lVar15 - (long)puVar17);
                      if (lVar15 == 0) break;
                      uVar12 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar17));
                      *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                      if (uVar12 == 0) break;
                      piVar18 = (int *)(lVar15 + 4);
                      while (piVar18[-1] != -0x3e783aea) {
                        piVar18 = piVar18 + 2;
                        uVar12 = uVar12 - 1;
                        if (uVar12 == 0) goto LAB_021f24c8;
                      }
                      iVar3 = 0;
                      if (*piVar18 != -1) {
                        iVar3 = *piVar18;
                      }
                      *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar3;
                      uVar10 = *puVar20;
                      if (uVar10 == 0) break;
                    } while( true );
                  }
                }
              }
LAB_021f24c8:
              fVar25 = fVar25 + fVar26;
            }
          }
        }
        if (fVar25 <= fVar24) {
          fVar25 = fVar24;
        }
      }
      fVar24 = fVar25;
      if (local_a8 < *(int *)(local_b8 + 1)) {
        local_a8 = local_a8 + 1;
      }
      else {
        local_a8 = *(int *)(local_c0 + 1);
        local_a4 = local_a4 + 1;
      }
    } while ((iVar19 != local_a8) || (iVar9 != local_a4));
  }
  puVar8 = PTR_DAT_04bbfe90;
  puVar2 = PTR_DAT_04bbfe88;
  if (param_1 == (float *)0x0) {
    return 1;
  }
  fVar25 = 0.0;
  if ((puVar16 == (uint *)0x0) || (uVar10 = *puVar16, uVar10 == 0)) {
LAB_021f260c:
    *param_1 = fVar24 - fVar25;
    return 1;
  }
  cVar21 = *PTR_DAT_04bbfe88;
  do {
    if (cVar21 == '\0') {
      cVar21 = '\x01';
      *puVar2 = 1;
      memset(puVar8,0xff,0x1ac);
      uVar10 = *puVar16;
    }
    else {
      uVar14 = *(uint *)(puVar8 + 0xf0);
      if (-1 < (int)uVar14) {
        if ((float *)((ulong)uVar14 + (long)puVar16) != (float *)0x0) {
          fVar25 = *(float *)((ulong)uVar14 + (long)puVar16);
        }
        goto LAB_021f260c;
      }
      if (uVar14 != 0xffffffff) goto LAB_021f260c;
    }
    lVar15 = (long)puVar16 - (ulong)uVar10;
    if (((ulong)uVar10 == 0) || (lVar15 == 0)) goto LAB_021f260c;
    lVar23 = 0xc;
    if (*(char *)(lVar15 + 10) != '\0') {
      lVar23 = 0x1c;
    }
    if (lVar23 + lVar15 == 0) goto LAB_021f260c;
    uVar12 = (ulong)*(ushort *)(lVar15 + 8);
    *(undefined4 *)(puVar8 + 0xf0) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_021f260c;
    piVar18 = (int *)(lVar23 + lVar15 + 4);
    while (piVar18[-1] != -0x499d99d4) {
      piVar18 = piVar18 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_021f260c;
    }
    iVar9 = 0;
    if (*piVar18 != -1) {
      iVar9 = *piVar18;
    }
    *(int *)(puVar8 + 0xf0) = iVar9;
    uVar10 = *puVar16;
    if (uVar10 == 0) goto LAB_021f260c;
  } while( true );
}

