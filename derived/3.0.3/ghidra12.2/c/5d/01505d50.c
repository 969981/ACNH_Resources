
undefined8 FUN_01505d50(undefined4 *param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  byte *pbVar21;
  undefined *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_100;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined4 local_f8;
  uint local_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined *local_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  int local_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined4 local_68;
  undefined4 uStack_64;
  
  local_88 = 0;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar7 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  local_84 = *(undefined4 *)(puVar16 + 7);
  local_80 = FUN_017baf44();
  puVar22 = PTR_DAT_04bb2010;
  local_80 = local_80 & 1;
  uVar9 = (int)param_2[3] + 0xa0000000U >> 0x1e;
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar9);
  local_90 = PTR_DAT_04bb3140 + 0x10;
  local_94 = uVar9 + 2;
  if (2 < uVar9 - 1) {
    local_94 = 2;
  }
  local_a0 = 0;
  local_b8 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = 0;
  FUN_01508594(&local_c0,&local_94);
  fVar25 = (float)(int)local_a0 * 5.0 + 5.0;
  fVar23 = *param_2;
  bVar5 = false;
  if (((float)(int)local_b0 * 5.0 <= fVar23) && (bVar5 = false, !NAN(fVar23) && !NAN(fVar25))) {
    bVar5 = fVar23 < fVar25;
  }
  if (!bVar5) {
    return 0;
  }
  fVar25 = param_2[2];
  if (fVar25 < (float)local_b0._4_4_ * 5.0) {
    return 0;
  }
  if ((float)local_a0._4_4_ * 5.0 + 5.0 <= fVar25) {
    return 0;
  }
  local_e0 = puVar22 + 0x10;
  local_c8 = 0;
  local_d8 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  iStack_d4 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  local_d0 = local_e0;
  FUN_01500c60(&local_d0,&local_e0,local_94);
  fVar23 = 50.0;
  iVar7 = 0;
  puVar1 = PTR_DAT_04bb3290 + 0x10;
  local_100 = *(uint *)PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  plVar17 = (long *)PTR_DAT_04bb27c0;
  plVar20 = (long *)PTR_DAT_04bb5920;
  pbVar21 = PTR_DAT_04bb5928;
  do {
    uVar18 = 0;
    do {
      local_f0 = puVar22 + 0x10;
      local_e8 = (int)local_c8 + (&DAT_041758d4)[uVar18];
      iStack_e4 = local_c8._4_4_ - iVar7;
      puVar11 = (uint *)FUN_014fbd50(&local_90,local_94,&local_f0);
      uVar9 = *puVar11;
      local_f4 = uVar9;
      uVar12 = FUN_015039ac(&local_f4);
      if ((uVar12 & 1) != 0) {
        lVar14 = *plVar17;
        if (lVar14 != 0) {
          if ((((uVar9 == 0) ||
               (plVar19 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                    ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
              ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar9))
          {
            plVar19 = (long *)0x0;
          }
          if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
            plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar14 = *plVar17;
            iVar8 = (**(code **)(*plVar13 + 0x60))();
            if (iVar8 < 0x11) {
              uVar9 = 1;
            }
            else {
              if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_015060b0;
              uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_015060b0:
            uVar9 = 0;
          }
          if (plVar19 != (long *)0x0) {
            lVar14 = plVar19[0x2a];
            uVar3 = *(uint *)(plVar19 + 0x49);
            if (((*pbVar21 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar21), iVar8 != 0)) {
              *plVar20 = (long)puVar1;
              __cxa_guard_release(pbVar21);
            }
            uVar10 = (**(code **)(*plVar19 + 0x20))(plVar19,plVar20);
            puVar4 = PTR_DAT_04bb43c0;
            if ((int)lVar14 == 1) {
              plVar17 = (long *)PTR_DAT_04bb27c0;
              if ((uVar10 & uVar9) != 0) {
                if ((uVar3 >> 4 & 1) != 0) {
                  local_68 = 0;
                  if (plVar19[0xe] == 0) {
                    iVar8 = -1;
                  }
                  else {
                    iVar8 = *(int *)(plVar19[0xe] + 0x280);
                  }
                  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar8);
                  if (iVar8 == 0) {
                    local_fc = (undefined2)plVar19[0x51];
                    local_fa = *(undefined1 *)((long)plVar19 + 0x28a);
                    local_f9 = *(undefined1 *)((long)plVar19 + 0x28b);
                    local_f8 = *(undefined4 *)((long)plVar19 + 0x28c);
                    puVar22 = (undefined *)plVar19[0x51];
                    lVar15 = *(long *)PTR_DAT_04bb43c0;
                    uVar9 = FUN_0277d6c4(&local_fc);
                    lVar14 = *(long *)puVar4;
                    if (lVar14 != 0) {
                      lVar15 = *(long *)(lVar15 + 0x57e58);
                      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                      if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                        local_b0 = 0;
                        local_c0 = puVar2;
                        local_b8 = puVar22;
                        uVar9 = FUN_0277d6c4(&local_b8);
                        if (*(long *)PTR_DAT_04bb43c0 != 0) {
                          lVar14 = *(long *)(lVar14 + 0x57e58);
                          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                          if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                            lVar14 = *(long *)PTR_DAT_04bc0428;
                            uVar9 = FUN_0277d6c4(&local_fc);
                            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                            if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
                              lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8);
                              if (lVar14 != 0) {
                                local_b0 = lVar14;
                              }
                            }
                          }
                        }
                        uVar12 = FUN_01ae7140(&local_c0);
                        plVar17 = (long *)PTR_DAT_04bb27c0;
                        plVar20 = (long *)PTR_DAT_04bb5920;
                        pbVar21 = PTR_DAT_04bb5928;
                        puVar22 = PTR_DAT_04bb2010;
                        if ((uVar12 & 1) != 0) {
                          if (*(char *)((long)param_2 + 0x11) == '\0') {
                            if (param_1 == (undefined4 *)0x0) {
                              return 1;
                            }
                            lVar14 = plVar19[0x151];
                            if (lVar14 == 0) {
                              return 1;
                            }
                            FUN_01476a50(&local_68,plVar19);
                            *param_1 = local_68;
                            param_1[1] = uStack_64;
                            param_1[4] = (int)plVar19[0x59];
                            param_1[5] = *(undefined4 *)((long)plVar19 + 0x2cc);
                            param_1[6] = (int)plVar19[0x5a];
                            lVar15 = plVar19[0xd];
                            param_1[7] = *(undefined4 *)(lVar15 + 0x278);
                            param_1[8] = *(undefined4 *)(lVar15 + 0x27c);
                            param_1[9] = *(undefined4 *)(lVar15 + 0x280);
                            *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar14 + 0x30a);
                            *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)(lVar14 + 0x308);
                            bVar6 = (**(code **)(*(long *)plVar19[0x151] + 0x1c0))
                                              ((long *)plVar19[0x151],param_2 + 4);
                            *(byte *)((long)param_1 + 0x2a) = bVar6 & 1;
                            param_1[0xb] = (int)plVar19[0x46];
                            return 1;
                          }
                          fVar25 = *(float *)(plVar19[0xd] + 0x278) - *param_2;
                          fVar24 = *(float *)(plVar19[0xd] + 0x280) - param_2[2];
                          fVar25 = SQRT(fVar24 * fVar24 + fVar25 * fVar25);
                          uVar9 = local_f4;
                          if (fVar23 <= fVar25) {
                            uVar9 = local_100;
                            fVar25 = fVar23;
                          }
                          fVar23 = fVar25;
                          local_100 = uVar9;
                        }
                        goto LAB_01505fc4;
                      }
                    }
                    plVar20 = (long *)PTR_DAT_04bb5920;
                    pbVar21 = PTR_DAT_04bb5928;
                    puVar22 = PTR_DAT_04bb2010;
                    goto LAB_01505fc0;
                  }
                }
              }
            }
            else {
LAB_01505fc0:
              plVar17 = (long *)PTR_DAT_04bb27c0;
            }
          }
        }
      }
LAB_01505fc4:
      uVar9 = (int)uVar18 + 1;
      uVar18 = (ulong)uVar9;
    } while (uVar9 != 3);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
  if (*(char *)((long)param_2 + 0x11) == '\0') {
    return 0;
  }
  if (local_100 == 0) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return 0;
  }
  plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) + (ulong)(local_100 >> 0x14) * 8);
  if (((plVar17 == (long *)0x0) || ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar17 + 0x46) != local_100)) {
    plVar17 = (long *)0x0;
  }
  if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
    plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)PTR_DAT_04bb27c0;
    iVar7 = (**(code **)(*plVar19 + 0x60))();
    if (iVar7 < 0x11) {
      uVar9 = 1;
      goto LAB_0150643c;
    }
    if (*(uint *)(lVar14 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      goto LAB_0150643c;
    }
  }
  uVar9 = 0;
LAB_0150643c:
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  lVar14 = plVar17[0x2a];
  uVar3 = *(uint *)(plVar17 + 0x49);
  if (((*pbVar21 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0)) {
    *plVar20 = (long)(PTR_DAT_04bb3290 + 0x10);
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar10 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb5920);
  if ((int)lVar14 != 1) {
    return 0;
  }
  if ((uVar10 & uVar9) == 0) {
    return 0;
  }
  if ((uVar3 >> 4 & 1) == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  lVar14 = plVar17[0x151];
  if (lVar14 == 0) {
    return 1;
  }
  FUN_01476a50(&local_c0,plVar17);
  *param_1 = (undefined4)local_c0;
  param_1[1] = local_c0._4_4_;
  param_1[4] = (int)plVar17[0x59];
  param_1[5] = *(undefined4 *)((long)plVar17 + 0x2cc);
  param_1[6] = (int)plVar17[0x5a];
  lVar15 = plVar17[0xd];
  param_1[7] = *(undefined4 *)(lVar15 + 0x278);
  param_1[8] = *(undefined4 *)(lVar15 + 0x27c);
  param_1[9] = *(undefined4 *)(lVar15 + 0x280);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar14 + 0x30a);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)(lVar14 + 0x308);
  bVar6 = (**(code **)(*(long *)plVar17[0x151] + 0x1c0))((long *)plVar17[0x151],param_2 + 4);
  *(byte *)((long)param_1 + 0x2a) = bVar6 & 1;
  param_1[0xb] = (int)plVar17[0x46];
  return 1;
}

