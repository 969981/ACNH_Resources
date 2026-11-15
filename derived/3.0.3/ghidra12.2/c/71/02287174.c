
undefined8 FUN_02287174(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined *local_150;
  int local_148;
  int iStack_144;
  undefined8 local_140;
  undefined *local_138;
  int local_130;
  int iStack_12c;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_118;
  int local_110;
  int iStack_10c;
  int local_104;
  int iStack_100;
  float local_fc [3];
  undefined4 local_f0;
  byte local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined1 local_da;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined *local_90;
  undefined *puStack_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  int local_70;
  int local_6c;
  
  local_a0 = 0;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar8 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  local_9c = *(undefined4 *)(puVar16 + 7);
  local_98 = FUN_017baf44();
  puVar2 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb2010;
  local_dc = 0x101;
  local_da = 1;
  local_d8 = 0x1000000000000;
  local_b0 = *(int *)(param_1 + 8) + 3;
  iStack_ac = *(int *)(param_1 + 0xc) + 3;
  local_c0 = *(int *)(param_1 + 8) + -2;
  iStack_bc = *(int *)(param_1 + 0xc) + -2;
  local_98 = local_98 & 1;
  local_a8 = PTR_DAT_04bb3140 + 0x10;
  local_fc[1] = 0.0;
  local_d0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_c8 = PTR_DAT_04bb2010 + 0x10;
  local_ec = *PTR_DAT_04bb32e0;
  local_e8 = *(undefined4 *)PTR_DAT_04bb3238;
  if (7 < local_ec) {
    local_ec = 0xff;
  }
  local_f0 = 0x40d00000;
  local_e4 = 0xbf80000000000003;
  local_fc[0] = ((float)local_c0 * 5.0 + (float)local_b0 * 5.0 + 5.0) * 0.5;
  local_fc[2] = ((float)iStack_bc * 5.0 + (float)iStack_ac * 5.0 + 5.0) * 0.5;
  local_b8 = puStack_c8;
  uVar11 = FUN_0251fad0(local_fc,0);
  puVar4 = PTR_DAT_04bb27c8;
  if (((uVar11 & 1) != 0) && ((param_2 & 1) != 0)) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb27c8 != 0) {
    lVar13 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
    if (lVar13 == 0) {
      return 0;
    }
    uVar11 = FUN_00971f80(lVar13,&local_d0,0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    local_150 = puVar3 + 0x10;
    iStack_144 = *(undefined4 *)(param_1 + 0xc);
    local_90 = puVar2 + 0x10;
    lVar13 = *(long *)puVar4;
    local_148 = *(int *)(param_1 + 8) + 2;
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0xa8), lVar13 != 0)) {
      puStack_88 = local_150;
      local_80 = local_148;
      iStack_7c = iStack_144;
      local_78 = local_150;
      local_70 = local_148;
      local_6c = iStack_144;
      uVar11 = FUN_00971f80(lVar13,&local_90,0);
      if (((uVar11 & 1) != 0) && (uVar11 = FUN_00975dc0(&local_150), (uVar11 & 1) != 0)) {
        puVar16 = (undefined8 *)FUN_01a5190c(&local_a8,0,&local_150,0);
        puVar5 = PTR_DAT_04bbbc68;
        local_118 = (undefined *)*puVar16;
        lVar13 = *(long *)PTR_DAT_04bbbc68;
        if (((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
             (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
            (((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)) &&
             (*(long *)(lVar13 + 0x2b0) != 0)))) && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0))
        {
          uVar9 = FUN_0277d6c4(&local_118);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            FUN_0124c030(&local_90,&local_118);
            if (CONCAT44(iStack_7c,local_80) != 0) {
              local_128 = (undefined *)CONCAT44(local_128._4_4_,4);
              lVar13 = FUN_01246470(CONCAT44(iStack_7c,local_80),0x16,0x623dc307,
                                    *(undefined8 *)PTR_DAT_04bbbc98);
              if (lVar13 != 0) {
                uVar9 = (uint)local_128 + 7;
                if (-1 < (int)(uint)local_128) {
                  uVar9 = (uint)local_128;
                }
                if ((*(byte *)(lVar13 + (ulong)(uint)((int)uVar9 >> 3)) >>
                     (ulong)((uint)local_128 & 7) & 1) != 0) {
                  return 0;
                }
              }
            }
            iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
            if ((iVar8 - 2U & 0xfffffff9) == 0) {
              return 0;
            }
            iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
            if (iVar8 == 0x2e) {
              return 0;
            }
            iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
            if (iVar8 - 0xbU < 7) {
              return 0;
            }
          }
        }
        local_150 = puVar3 + 0x10;
        iStack_144 = *(int *)(param_1 + 0xc);
        local_90 = puVar2 + 0x10;
        lVar13 = *(long *)puVar4;
        local_148 = *(int *)(param_1 + 8) + -2;
        if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0xa8), lVar13 != 0)) {
          puStack_88 = local_150;
          local_80 = local_148;
          iStack_7c = iStack_144;
          local_78 = local_150;
          local_70 = local_148;
          local_6c = iStack_144;
          uVar11 = FUN_00971f80(lVar13,&local_90,0);
          if (((uVar11 & 1) != 0) && (uVar11 = FUN_00975dc0(&local_150), (uVar11 & 1) != 0)) {
            puVar16 = (undefined8 *)FUN_01a5190c(&local_a8,0,&local_150,0);
            local_118 = (undefined *)*puVar16;
            lVar13 = *(long *)puVar5;
            if ((((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
                  (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
                 ((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)
                  ))) && (*(long *)(lVar13 + 0x2b0) != 0)) &&
               (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)) {
              uVar9 = FUN_0277d6c4(&local_118);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                FUN_0124c030(&local_90,&local_118);
                uVar11 = FUN_0124dc64(&local_90,1);
                if ((uVar11 & 1) != 0) {
                  return 0;
                }
                iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
                if ((iVar8 - 2U & 0xfffffff9) == 0) {
                  return 0;
                }
                iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
                if (iVar8 == 0x2e) {
                  return 0;
                }
                iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
                if (iVar8 - 0xbU < 7) {
                  return 0;
                }
              }
            }
            local_150 = puVar3 + 0x10;
            local_148 = *(int *)(param_1 + 8);
            iStack_144 = *(int *)(param_1 + 0xc) + 2;
            uVar11 = FUN_00975d20(&local_150);
            if ((uVar11 & 1) != 0) {
              puVar16 = (undefined8 *)FUN_01a5190c(&local_a8,0,&local_150,0);
              local_118 = (undefined *)*puVar16;
              uVar11 = FUN_0277db54(&local_118);
              if ((uVar11 & 1) != 0) {
                FUN_0124c030(&local_90,&local_118);
                uVar11 = FUN_0124dc64(&local_90,1);
                if ((uVar11 & 1) != 0) {
                  return 0;
                }
                iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
                if ((iVar8 - 2U & 0xfffffff9) == 0) {
                  return 0;
                }
                iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
                if (iVar8 == 0x2e) {
                  return 0;
                }
                iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
                if (iVar8 - 0xbU < 7) {
                  return 0;
                }
              }
              local_150 = puVar3 + 0x10;
              local_148 = *(int *)(param_1 + 8);
              iStack_144 = *(int *)(param_1 + 0xc) + -2;
              uVar11 = FUN_00975d20(&local_150);
              if ((uVar11 & 1) != 0) {
                puVar16 = (undefined8 *)FUN_01a5190c(&local_a8,0,&local_150,0);
                local_118 = (undefined *)*puVar16;
                uVar11 = FUN_0277db54(&local_118);
                if ((uVar11 & 1) == 0) {
LAB_022877e8:
                  FUN_01383220(&local_90,&local_d0);
                  local_104 = 0xfffe;
                  iStack_100 = 0;
                  FUN_0277d4ac(&local_104);
                  iVar7 = local_80;
                  iVar8 = local_6c + 1;
                  if (iVar8 != iStack_7c) {
                    uVar9 = 0;
                    puVar2 = PTR_DAT_04bb2018 + 0x10;
                    iVar17 = iStack_7c;
                    iVar14 = local_80;
                    iVar15 = local_80;
                    do {
                      if ((((uVar9 & 0x7ffffffd) != 0) && (uVar9 != 8)) && (uVar9 != 6)) {
                        local_120 = 0;
                        local_128 = puVar3 + 0x10;
                        local_118 = puVar2;
                        local_110 = iVar15;
                        iStack_10c = iVar17;
                        FUN_0137d60c(&local_118,&local_128);
                        iVar6 = (int)local_120;
                        iVar14 = (int)local_120 + 1;
                        iVar1 = local_120._4_4_ + 2;
                        iVar19 = local_120._4_4_;
                        iVar18 = (int)local_120;
                        do {
                          local_138 = puVar3 + 0x10;
                          local_130 = iVar18;
                          iStack_12c = iVar19;
                          uVar11 = FUN_00975d20(&local_138);
                          if ((uVar11 & 1) == 0) {
                            return 0;
                          }
                          piVar12 = (int *)FUN_01a5190c(&local_a8,0,&local_138,0);
                          local_104 = *piVar12;
                          iStack_100 = piVar12[1];
                          if ((short)*piVar12 != -2) {
                            uVar11 = FUN_0277d9a8(&local_104);
                            if ((uVar11 & 1) == 0) {
                              uVar11 = FUN_0277db54(&local_104);
                              if ((uVar11 & 1) == 0) {
                                local_150 = PTR_DAT_04bc35c0 + 0x10;
                                local_148 = local_104;
                                iStack_144 = iStack_100;
                                FUN_0277d6c4(&local_148);
                                return 0;
                              }
                              FUN_0124c030(&local_150,&local_104);
                              uVar11 = FUN_0277e158(&local_104);
                              if ((((uVar11 & 1) == 0) &&
                                  (iVar10 = FUN_0123db50(&local_148,local_140), 6 < iVar10 - 0x18U))
                                 && ((iVar10 = FUN_0123db50(&local_148,local_140), iVar10 != 0x1f &&
                                     ((iVar10 = FUN_0123db50(&local_148,local_140),
                                      8 < iVar10 - 0x23U &&
                                      (iVar10 = FUN_0123db50(&local_148,local_140),
                                      5 < iVar10 - 0x12U)))))) {
                                return 0;
                              }
                            }
                            else {
                              iVar10 = FUN_0277d6c4(&local_104);
                              if (((iVar10 == 0x3333) &&
                                  (iVar10 = FUN_0277d6c4(&local_104), iVar10 == 0x3333)) &&
                                 (uVar11 = FUN_011eaef0(&local_138), (uVar11 & 1) != 0)) {
                                return 0;
                              }
                              uVar11 = FUN_0277e158(&local_104);
                              if ((uVar11 & 1) == 0) {
                                return 0;
                              }
                            }
                          }
                          if (iVar18 < iVar14) {
                            iVar18 = iVar18 + 1;
                          }
                          else {
                            iVar19 = iVar19 + 1;
                            iVar18 = iVar6;
                          }
                        } while ((iVar6 != iVar18) || (iVar1 != iVar19));
                        iVar14 = local_80;
                      }
                      uVar9 = uVar9 + 1;
                      if (iVar15 < local_70) {
                        iVar15 = iVar15 + 1;
                      }
                      else {
                        iVar17 = iVar17 + 1;
                        iVar15 = iVar14;
                      }
                    } while (iVar7 != iVar15 || iVar8 != iVar17);
                  }
                  return 1;
                }
                FUN_0124c030(&local_90,&local_118);
                uVar11 = FUN_0124dc64(&local_90,1);
                if ((uVar11 & 1) == 0) {
                  iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80));
                  if ((((iVar8 - 2U & 0xfffffff9) != 0) &&
                      (iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80)), iVar8 != 0x2e
                      )) && (iVar8 = FUN_0123db50(&puStack_88,CONCAT44(iStack_7c,local_80)),
                            6 < iVar8 - 0xbU)) goto LAB_022877e8;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

