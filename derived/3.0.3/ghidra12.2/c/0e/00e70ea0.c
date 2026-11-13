
/* WARNING: Removing unreachable block (ram,0x00e713e4) */
/* WARNING: Removing unreachable block (ram,0x00e713f4) */

void FUN_00e70ea0(char *param_1,undefined8 *param_2,float *param_3,uint *param_4,ulong param_5)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  ulong uVar14;
  ushort uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  int iVar22;
  long *plVar23;
  undefined8 *puVar24;
  char *pcVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  long *plVar35;
  int iVar36;
  undefined2 *puVar37;
  char *pcVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int local_18c;
  int local_188;
  int local_180;
  int iStack_17c;
  undefined4 local_164;
  undefined *local_160;
  undefined2 local_158;
  undefined1 local_156;
  undefined1 local_155;
  undefined4 local_154;
  long local_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_11c;
  float local_114;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  int local_f0;
  int local_ec;
  undefined4 uStack_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  
  puVar6 = PTR_DAT_04bb27c0;
  lVar19 = *(long *)PTR_DAT_04bb27c0;
  if (lVar19 == 0) {
    return;
  }
  uVar9 = *param_4;
  if ((((uVar9 == 0) ||
       (plVar35 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                            ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar35 == (long *)0x0)) ||
      ((*(uint *)(plVar35 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar35 + 0x46) != uVar9)) {
    plVar35 = (long *)0x0;
  }
  if (*(int *)(lVar19 + 0x288) == 1 || *(int *)(lVar19 + 0x288) == -1) {
    plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)puVar6;
    iVar8 = (**(code **)(*plVar13 + 0x60))();
    if (iVar8 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_00e70f84;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00e70f84:
    uVar9 = 0;
  }
  if (plVar35 == (long *)0x0) {
    return;
  }
  lVar19 = plVar35[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar14 = (**(code **)(*plVar35 + 0x20))(plVar35,PTR_DAT_04bb37d0);
  plVar13 = (long *)PTR_DAT_04bb5ce0;
  uVar10 = 0;
  if ((int)lVar19 == 1) {
    uVar10 = uVar9;
  }
  if ((uVar14 & 1) == 0) {
    return;
  }
  if (uVar10 == 0) {
    return;
  }
  local_11c = 0;
  local_114 = 0.0;
  if (*(char *)(param_2 + 2) == '\0') {
LAB_00e71000:
    plVar20 = param_2 + 5;
    plVar23 = param_2 + 7;
  }
  else {
    plVar20 = param_2 + 1;
    plVar23 = param_2 + 3;
    if (*plVar20 == *plVar23) goto LAB_00e71000;
  }
  if ((char)plVar23[1] == '\0') {
    puVar24 = (undefined8 *)0x0;
    if ((param_5 & 1) == 0) goto LAB_00e71024;
LAB_00e71060:
    lVar19 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar19 == 0) {
      iVar8 = 0;
      iVar16 = 0;
      iVar26 = 0x10;
      iVar30 = 0x10;
    }
    else {
      iVar8 = *(int *)(lVar19 + 0xd88);
      iVar16 = *(int *)(lVar19 + 0xd8c);
      iVar30 = *(int *)(lVar19 + 0xd98);
      iVar26 = *(int *)(lVar19 + 0xd9c);
    }
    iVar34 = iVar8;
    if (iVar30 <= iVar8) {
      iVar34 = iVar30;
    }
    if (iVar8 <= iVar30) {
      iVar8 = iVar30;
    }
    iVar30 = iVar16;
    if (iVar26 <= iVar16) {
      iVar30 = iVar26;
    }
    if (iVar16 <= iVar26) {
      iVar16 = iVar26;
    }
    (**(code **)(plVar35[0x7c] + 0x18))(plVar35 + 0x7c);
    (**(code **)(plVar35[0x7c] + 0x18))(plVar35 + 0x7c);
    pcVar25 = (char *)plVar35[0x7d];
    if (pcVar25 == "man") {
      uVar9 = 1;
      lVar19 = *plVar13;
joined_r0x00e71138:
      if (lVar19 != 0) goto LAB_00e7113c;
LAB_00e713c0:
      fVar44 = 40.0;
      fVar46 = 40.0;
    }
    else {
      if (*pcVar25 != 'm') {
        uVar9 = 0;
        lVar19 = *plVar13;
        goto joined_r0x00e71138;
      }
      uVar14 = 0;
      do {
        uVar33 = uVar14;
        uVar14 = uVar33;
        if (uVar33 == 0x80000) goto LAB_00e713ac;
        if (pcVar25[uVar33 + 1] != (&DAT_040ee9d8)[uVar33]) {
          uVar14 = 0;
          goto LAB_00e713ac;
        }
        uVar14 = uVar33 + 1;
      } while (pcVar25[uVar33 + 1] != '\0');
      uVar14 = 1;
LAB_00e713ac:
      uVar9 = (uint)(uVar33 < 0x80000) & (uint)uVar14;
      lVar19 = *plVar13;
      if (lVar19 == 0) goto LAB_00e713c0;
LAB_00e7113c:
      fVar44 = *(float *)(lVar19 + 0xd74);
      fVar46 = *(float *)(lVar19 + 0xd7c);
    }
    local_110 = (undefined **)((ulong)local_110._4_4_ << 0x20);
    local_148 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    puStack_140 = (undefined *)(*(long *)PTR_DAT_04bb27c8 + 0x28);
    if (iVar16 + 1 == iVar30) {
LAB_00e71424:
      local_100 = (int *)0x0;
      local_110 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      local_108 = PTR_DAT_04bb2010 + 0x10;
      local_f0 = 0;
      local_ec = 0;
      local_f8 = local_108;
      FUN_01811430(&local_110);
      fVar46 = ((float)(int)local_100 * 5.0 + (float)local_f0 * 5.0 + 5.0) * 0.5;
      fVar44 = ((float)local_100._4_4_ * 5.0 + (float)local_ec * 5.0 + 5.0) * 0.5;
LAB_00e71498:
      local_11c = CONCAT44(local_11c._4_4_,fVar46);
    }
    else {
      fVar47 = 0.0;
      fVar45 = 0.0;
      local_18c = -1;
      local_188 = -1;
      local_180 = -1;
      iStack_17c = -1;
      iVar26 = iVar30;
      iVar36 = iVar34;
      do {
        uVar14 = FUN_035aa210(iVar36 + -1,iVar26 + -1,&local_148);
        if ((uVar14 & 1) != 0) {
          uVar14 = FUN_035aa210(iVar36 + -1,iVar26,&local_148);
          if ((uVar14 & 1) != 0) {
            uVar14 = FUN_035aa210(iVar36,iVar26 + -1,&local_148);
            if ((uVar14 & 1) != 0) {
              uVar14 = FUN_035aa210(iVar36,iVar26,&local_148);
              if ((uVar14 & 1) != 0) {
                lVar19 = *plVar13;
                if (lVar19 == 0) {
                  iVar27 = 0;
                  iVar17 = 0;
                  iVar21 = 0x10;
                  iVar31 = 0x10;
                }
                else {
                  iVar27 = *(int *)(lVar19 + 0xd88);
                  iVar17 = *(int *)(lVar19 + 0xd8c);
                  iVar31 = *(int *)(lVar19 + 0xd98);
                  iVar21 = *(int *)(lVar19 + 0xd9c);
                }
                iVar4 = iVar27;
                if (iVar31 <= iVar27) {
                  iVar4 = iVar31;
                }
                if (iVar27 <= iVar31) {
                  iVar27 = iVar31;
                }
                iVar31 = iVar17;
                if (iVar21 <= iVar17) {
                  iVar31 = iVar21;
                }
                if (iVar4 <= iVar36) {
                  if (iVar36 <= iVar27) {
                    if (iVar17 <= iVar21) {
                      iVar17 = iVar21;
                    }
                    if ((iVar31 <= iVar26) && (iVar26 <= iVar17)) {
                      local_f0 = 0x15;
                      local_108 = (char *)0x110000020d;
                      local_110 = &PTR_LAB_049639c8;
                      local_ec = 0;
                      uStack_e8 = 0;
                      local_e4 = 0;
                      local_ac = 0;
                      local_dc = 0;
                      local_d4 = 0;
                      local_cc = 0;
                      local_c4 = 0;
                      local_bc = 0;
                      local_b4 = 0;
                      local_f8 = (char *)0x1900000000;
                      local_100 = &local_ec;
                      FUN_02145060(&local_110,PTR_DAT_04bb3238);
                      uVar10 = (iVar36 - iVar4) + local_f8._4_4_ * (iVar26 - iVar31);
                      if (((uint)local_100[(int)uVar10 >> 5] >> (ulong)(uVar10 & 0x1f) & 1) == 0) {
                        iVar27 = iVar36 + -2;
                        if (iVar36 + -2 <= iVar34) {
                          iVar27 = iVar34;
                        }
                        iVar17 = iVar26 + -2;
                        if (iVar26 + -2 <= iVar30) {
                          iVar17 = iVar30;
                        }
                        iVar31 = iVar36 + 2;
                        if (iVar8 <= iVar36 + 2) {
                          iVar31 = iVar8;
                        }
                        iVar21 = iVar26 + 2;
                        if (iVar16 <= iVar26 + 2) {
                          iVar21 = iVar16;
                        }
                        iVar4 = iVar27;
                        if (iVar31 <= iVar27) {
                          iVar4 = iVar31;
                        }
                        if (iVar27 <= iVar31) {
                          iVar27 = iVar31;
                        }
                        iVar31 = iVar17;
                        if (iVar17 <= iVar21) {
                          iVar31 = iVar21;
                        }
                        if (iVar21 <= iVar17) {
                          iVar17 = iVar21;
                        }
                        if (iVar31 + 1 != iVar17) {
                          iVar21 = iVar4;
                          do {
                            lVar19 = *(long *)PTR_DAT_04bb5ce0;
                            if (lVar19 == 0) {
                              iVar28 = 0;
                              iVar18 = 0;
                              iVar22 = 0x10;
                              iVar32 = 0x10;
                            }
                            else {
                              iVar28 = *(int *)(lVar19 + 0xd88);
                              iVar18 = *(int *)(lVar19 + 0xd8c);
                              iVar32 = *(int *)(lVar19 + 0xd98);
                              iVar22 = *(int *)(lVar19 + 0xd9c);
                            }
                            bVar7 = true;
                            iVar5 = iVar28;
                            if (iVar32 <= iVar28) {
                              iVar5 = iVar32;
                            }
                            if (iVar28 <= iVar32) {
                              iVar28 = iVar32;
                            }
                            iVar32 = iVar18;
                            if (iVar22 <= iVar18) {
                              iVar32 = iVar22;
                            }
                            if ((iVar21 < iVar5) || (iVar28 < iVar21)) goto LAB_00e71678;
                            if (iVar18 <= iVar22) {
                              iVar18 = iVar22;
                            }
                            if ((iVar17 < iVar32) || (iVar18 < iVar17)) goto LAB_00e71678;
                            local_f0 = 0x15;
                            local_108 = (char *)0x110000020d;
                            local_110 = &PTR_LAB_049639c8;
                            local_ec = 0;
                            uStack_e8 = 0;
                            local_e4 = 0;
                            local_dc = 0;
                            local_d4 = 0;
                            local_ac = 0;
                            local_cc = 0;
                            local_c4 = 0;
                            local_bc = 0;
                            local_b4 = 0;
                            local_f8 = (char *)0x1900000000;
                            local_100 = &local_ec;
                            FUN_02145060(&local_110,PTR_DAT_04bb3238);
                            uVar10 = (iVar21 - iVar5) + local_f8._4_4_ * (iVar17 - iVar32);
                            if (((uint)local_100[(int)uVar10 >> 5] >> (ulong)(uVar10 & 0x1f) & 1) !=
                                0) {
                              bVar7 = true;
                              goto LAB_00e71678;
                            }
                            if (iVar21 < iVar27) {
                              iVar21 = iVar21 + 1;
                            }
                            else {
                              iVar17 = iVar17 + 1;
                              iVar21 = iVar4;
                            }
                          } while ((iVar4 != iVar21) || (iVar31 + 1 != iVar17));
                        }
                        bVar7 = false;
LAB_00e71678:
                        fVar48 = (float)iVar36 * 5.0;
                        fVar49 = (float)iVar26 * 5.0;
                        if (uVar9 != 0) {
                          uVar10 = FUN_006f0400(*param_3 - fVar44,param_3[2] - fVar46);
                          uVar11 = FUN_006f0400(fVar48 - fVar44,fVar49 - fVar46);
                          pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar10 >> 0x18) * 0x10);
                          fVar39 = (float)(uVar10 & 0xffffff) * 5.9604645e-08;
                          fVar42 = *pfVar1 + fVar39 * pfVar1[1];
                          pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar11 >> 0x18) * 0x10);
                          fVar41 = (float)(uVar11 & 0xffffff) * 5.9604645e-08;
                          fVar43 = *pfVar2 + fVar41 * pfVar2[1];
                          if (((0.0 <= fVar42) && (fVar43 < 0.0)) ||
                             ((fVar40 = 1.0, fVar42 < 0.0 && (fVar40 = 1.0, 0.0 <= fVar43)))) {
                            fVar42 = pfVar1[2] + fVar39 * pfVar1[3];
                            fVar39 = pfVar2[2] + fVar41 * pfVar2[3];
                            if (((0.0 <= fVar42) && (fVar39 < 0.0)) ||
                               ((fVar40 = 1.0, fVar42 < 0.0 && (fVar40 = 1.0, 0.0 <= fVar39)))) {
                              fVar40 = 2.0;
                            }
                          }
                          fVar40 = fVar40 * ((fVar49 - param_3[2]) * (fVar49 - param_3[2]) +
                                            (fVar48 - *param_3) * (fVar48 - *param_3));
                          fVar48 = fVar40;
                          iVar27 = iVar36;
                          iVar17 = iVar26;
                          if (fVar40 <= fVar47) {
                            fVar48 = fVar47;
                            iVar27 = local_188;
                            iVar17 = local_18c;
                          }
                          fVar47 = fVar48;
                          if (fVar40 <= fVar45) {
                            bVar7 = true;
                          }
                          plVar13 = (long *)PTR_DAT_04bb5ce0;
                          local_18c = iVar17;
                          local_188 = iVar27;
                          if (!bVar7) {
                            fVar45 = fVar40;
                            local_180 = iVar36;
                            iStack_17c = iVar26;
                          }
                          goto LAB_00e71950;
                        }
                        fVar49 = (fVar49 - param_3[2]) * (fVar49 - param_3[2]) +
                                 (fVar48 - *param_3) * (fVar48 - *param_3);
                        iVar27 = iVar36;
                        fVar48 = fVar49;
                        iVar17 = iVar26;
                        if (fVar49 <= fVar47) {
                          iVar27 = local_188;
                          fVar48 = fVar47;
                          iVar17 = local_18c;
                        }
                        local_18c = iVar17;
                        fVar47 = fVar48;
                        if (fVar49 <= fVar45) {
                          bVar7 = true;
                        }
                        local_188 = iVar27;
                        if (!bVar7) {
                          fVar45 = fVar49;
                          local_180 = iVar36;
                          iStack_17c = iVar26;
                        }
                        goto LAB_00e71948;
                      }
                    }
                    plVar13 = (long *)PTR_DAT_04bb5ce0;
                    goto LAB_00e71950;
                  }
                }
LAB_00e71948:
                plVar13 = (long *)PTR_DAT_04bb5ce0;
              }
            }
          }
        }
LAB_00e71950:
        if (iVar36 < iVar8) {
          iVar36 = iVar36 + 1;
        }
        else {
          iVar26 = iVar26 + 1;
          iVar36 = iVar34;
        }
      } while ((iVar34 != iVar36) || (iVar16 + 1 != iVar26));
      if ((local_180 < 0) || (iStack_17c < 0)) {
        if ((local_188 < 0) || (local_18c < 0)) goto LAB_00e71424;
        fVar46 = (float)local_188 * 5.0;
        fVar44 = (float)local_18c * 5.0;
        goto LAB_00e71498;
      }
      fVar46 = (float)local_180 * 5.0;
      local_11c = CONCAT44(local_11c._4_4_,fVar46);
      fVar44 = (float)iStack_17c * 5.0;
    }
    local_114 = fVar44;
  }
  else {
    puVar24 = (undefined8 *)*plVar23;
    if ((param_5 & 1) != 0) goto LAB_00e71060;
LAB_00e71024:
    if (((char)plVar20[1] == '\0') || (puVar29 = (undefined8 *)*plVar20, puVar29 == puVar24))
    goto LAB_00e71060;
    uVar9 = *(uint *)*puVar29;
    *plVar20 = (long)(puVar29 + 1);
    puVar6 = PTR_DAT_04bb43c0;
    if (uVar9 < *(uint *)*param_2) {
      puVar37 = *(undefined2 **)(*(long *)((uint *)*param_2 + 2) + (long)(int)uVar9 * 8);
    }
    else {
      puVar37 = (undefined2 *)0x0;
    }
    local_138 = 0;
    local_148 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_140 = PTR_DAT_04bb2010 + 0x10;
    local_160 = PTR_DAT_04bc0510 + 0x10;
    local_128 = 0;
    local_158 = *puVar37;
    local_156 = *(undefined1 *)(puVar37 + 1);
    local_155 = *(undefined1 *)((long)puVar37 + 3);
    local_154 = *(undefined4 *)(puVar37 + 2);
    local_150 = 0;
    lVar19 = *(long *)PTR_DAT_04bb43c0;
    local_130 = puStack_140;
    uVar9 = FUN_0277d6c4(&local_158);
    if (*(long *)puVar6 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar19 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(puVar37);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if (uVar9 < *(uint *)(lVar19 + 0x1d8)) {
          lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8);
          if (lVar19 != 0) {
            local_150 = lVar19;
          }
        }
      }
    }
    FUN_01afb480(&local_160,&local_148);
    local_138._0_4_ = (int)local_138 + *(int *)(puVar37 + 8);
    local_138._4_4_ = local_138._4_4_ + *(int *)(puVar37 + 10);
    local_128._0_4_ = (int)local_128 + *(int *)(puVar37 + 8);
    local_128._4_4_ = local_128._4_4_ + *(int *)(puVar37 + 10);
    iVar8 = ((int)local_128 - (int)local_138) + 1;
    fVar46 = ((float)(int)local_138 * 5.0 + (float)(int)local_128 * 5.0 + 5.0) * 0.5;
    fVar44 = ((float)local_138._4_4_ * 5.0 + (float)local_128._4_4_ * 5.0 + 5.0) * 0.5;
    if (iVar8 + iVar8 * (local_128._4_4_ - local_138._4_4_) < 8) {
LAB_00e71dec:
      local_11c = CONCAT44(local_11c._4_4_,fVar46);
      local_114 = fVar44;
    }
    else {
      uVar9 = FUN_01ae98d0(&local_160);
      bVar7 = (uVar9 | 2) != 2;
      fVar47 = fVar44 + 0.0;
      fVar45 = fVar46 + 5.0;
      if (bVar7) {
        fVar47 = fVar44 + 5.0;
        fVar45 = fVar46 + 0.0;
      }
      fVar48 = fVar46 + -5.0;
      if (bVar7) {
        fVar44 = fVar44 + -5.0;
        fVar48 = fVar46;
      }
      iVar8 = (int)((float)(int)(fVar45 + -2.5) / 5.0) - (uint)(fVar45 + -2.5 < 0.0);
      lVar19 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar19 == 0) {
        iVar16 = 0;
        iVar30 = 0;
        iVar34 = 0x10;
        iVar26 = 0x10;
      }
      else {
        iVar16 = *(int *)(lVar19 + 0xd88);
        iVar30 = *(int *)(lVar19 + 0xd8c);
        iVar26 = *(int *)(lVar19 + 0xd98);
        iVar34 = *(int *)(lVar19 + 0xd9c);
      }
      iVar27 = (int)((float)(int)(fVar47 + -2.5) / 5.0) - (uint)(fVar47 + -2.5 < 0.0);
      iVar36 = iVar16;
      if (iVar26 <= iVar16) {
        iVar36 = iVar26;
      }
      if (iVar16 <= iVar26) {
        iVar16 = iVar26;
      }
      iVar26 = iVar30;
      if (iVar34 <= iVar30) {
        iVar26 = iVar34;
      }
      if (iVar8 < iVar36 || iVar16 < iVar8) {
LAB_00e71c14:
        uVar9 = 1;
      }
      else {
        if (iVar30 <= iVar34) {
          iVar30 = iVar34;
        }
        if (iVar27 < iVar26 || iVar30 < iVar27) goto LAB_00e71c14;
        local_ec = 0;
        uStack_e8 = 0;
        local_f0 = 0x15;
        local_e4 = 0;
        local_110 = &PTR_LAB_049639c8;
        local_108 = (char *)0x110000020d;
        local_100 = &local_ec;
        local_dc = 0;
        local_d4 = 0;
        local_cc = 0;
        local_c4 = 0;
        local_bc = 0;
        local_b4 = 0;
        local_ac = 0;
        local_f8 = (char *)0x1900000000;
        FUN_02145060(&local_110,PTR_DAT_04bb3238);
        uVar9 = (iVar8 - iVar36) + local_f8._4_4_ * (iVar27 - iVar26);
        uVar9 = (uint)local_100[(int)uVar9 >> 5] >> (ulong)(uVar9 & 0x1f) & 1;
        lVar19 = *(long *)PTR_DAT_04bb5ce0;
      }
      iVar16 = (int)((float)(int)(fVar48 + -2.5) / 5.0) - (uint)(fVar48 + -2.5 < 0.0);
      if (lVar19 == 0) {
        iVar30 = 0;
        iVar26 = 0;
        iVar36 = 0x10;
        iVar34 = 0x10;
      }
      else {
        iVar30 = *(int *)(lVar19 + 0xd88);
        iVar26 = *(int *)(lVar19 + 0xd8c);
        iVar34 = *(int *)(lVar19 + 0xd98);
        iVar36 = *(int *)(lVar19 + 0xd9c);
      }
      iVar31 = (int)((float)(int)(fVar44 + -2.5) / 5.0) - (uint)(fVar44 + -2.5 < 0.0);
      iVar17 = iVar30;
      if (iVar34 <= iVar30) {
        iVar17 = iVar34;
      }
      if (iVar30 <= iVar34) {
        iVar30 = iVar34;
      }
      iVar34 = iVar26;
      if (iVar36 <= iVar26) {
        iVar34 = iVar36;
      }
      if (iVar16 < iVar17 || iVar30 < iVar16) {
LAB_00e71da0:
        if (uVar9 == 0) {
          iVar31 = iVar27;
          iVar16 = iVar8;
        }
        fVar46 = ((float)iVar16 * 5.0 + (float)(iVar16 + 1) * 5.0 + 5.0) * 0.5;
        fVar44 = ((float)iVar31 * 5.0 + (float)(iVar31 + 1) * 5.0 + 5.0) * 0.5;
        goto LAB_00e71dec;
      }
      if (iVar26 <= iVar36) {
        iVar26 = iVar36;
      }
      if (iVar31 < iVar34 || iVar26 < iVar31) goto LAB_00e71da0;
      local_ec = 0;
      uStack_e8 = 0;
      local_f0 = 0x15;
      local_e4 = 0;
      local_110 = &PTR_LAB_049639c8;
      local_108 = (char *)0x110000020d;
      local_100 = &local_ec;
      local_dc = 0;
      local_d4 = 0;
      local_cc = 0;
      local_c4 = 0;
      local_bc = 0;
      local_b4 = 0;
      local_ac = 0;
      local_f8 = (char *)0x1900000000;
      FUN_02145060(&local_110,PTR_DAT_04bb3238);
      fVar46 = 0.0;
      fVar44 = 0.0;
      uVar11 = (iVar16 - iVar17) + local_f8._4_4_ * (iVar31 - iVar34);
      uVar10 = 0;
      if (((uint)local_100[(int)uVar11 >> 5] >> (ulong)(uVar11 & 0x1f) & 1) == 0) {
        uVar10 = uVar9;
      }
      if (uVar10 == 0) goto LAB_00e71da0;
    }
    if (*param_1 == '\0') {
      local_110 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_108 = "slo";
      (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
      (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
      pcVar25 = DAT_0545c418;
      (*(code *)local_110[3])(&local_110);
      if (pcVar25 != local_108) {
        if (*DAT_0545c418 != *local_108) goto LAB_00e719ac;
        if (*DAT_0545c418 != '\0') {
          lVar19 = 0;
          do {
            if ((lVar19 == 0x80000) || (DAT_0545c418[lVar19 + 1] != local_108[lVar19 + 1]))
            goto LAB_00e719ac;
            if (DAT_0545c418[lVar19 + 1] == '\0') break;
            lVar3 = lVar19 + 2;
            if (DAT_0545c418[lVar3] != local_108[lVar19 + 2]) goto LAB_00e719ac;
            lVar19 = lVar19 + 2;
          } while (DAT_0545c418[lVar3] != '\0');
        }
      }
      puVar24 = (undefined8 *)plVar35[0x77];
      if (((*PTR_DAT_04bb7480 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7480);
      }
      if ((puVar24 != (undefined8 *)0x0) &&
         (uVar14 = (**(code **)*puVar24)(puVar24,PTR_DAT_04bb7478), (uVar14 & 1) != 0)) {
        FUN_01fe1854(puVar24);
      }
      *param_1 = '\x01';
      pcVar25 = (char *)((long)&local_100 + 4);
      local_100 = (int *)CONCAT44(local_100._4_4_,8);
      local_f8._0_4_ = (uint)(uint3)local_f8;
      local_110 = (undefined **)(PTR_DAT_04bb6a30 + 0x10);
      local_108 = pcVar25;
      (**(code **)(plVar35[0x7c] + 0x18))(plVar35 + 0x7c);
      pcVar38 = (char *)plVar35[0x7d];
      if (pcVar25 != pcVar38) {
        (**(code **)(plVar35[0x7c] + 0x18))(plVar35 + 0x7c);
        lVar19 = 0;
        do {
          if (*(char *)(plVar35[0x7d] + lVar19) == '\0') goto LAB_00e71fa8;
          lVar3 = plVar35[0x7d] + lVar19;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar19 = lVar19 + 1;
            goto LAB_00e71fa8;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar19 = lVar19 + 2;
            goto LAB_00e71fa8;
          }
          lVar19 = lVar19 + 3;
        } while (lVar19 != 0x80001);
        lVar19 = 0;
LAB_00e71fa8:
        iVar8 = (int)lVar19;
        if ((int)local_100 <= (int)lVar19) {
          iVar8 = (int)local_100 + -1;
        }
        memcpy(pcVar25,pcVar38,(long)iVar8);
        pcVar25[iVar8] = '\0';
      }
      pcVar38 = local_108;
      pcVar25 = DAT_0545c438;
      local_110 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      local_108[(long)(int)local_100 + -1] = '\0';
      if (DAT_0545c438 != local_108) {
        (**(code **)(PTR_DAT_04bb3768 + 0x28))(&local_110);
        lVar19 = 0;
        do {
          if (local_108[lVar19] == '\0') goto LAB_00e72058;
          if (local_108[lVar19 + 1] == '\0') {
            lVar19 = lVar19 + 1;
            goto LAB_00e72058;
          }
          if (local_108[lVar19 + 2] == '\0') {
            lVar19 = lVar19 + 2;
            goto LAB_00e72058;
          }
          lVar19 = lVar19 + 3;
        } while (lVar19 != 0x80001);
        lVar19 = 0;
LAB_00e72058:
        iVar8 = (int)lVar19;
        if (DAT_0545c440 <= (int)lVar19) {
          iVar8 = DAT_0545c440 + -1;
        }
        memcpy(pcVar25,pcVar38,(long)iVar8);
        pcVar25[iVar8] = '\0';
      }
      bVar7 = true;
      fVar46 = (float)local_11c;
      fVar44 = local_114;
      goto LAB_00e719b0;
    }
  }
LAB_00e719ac:
  bVar7 = false;
LAB_00e719b0:
  local_164 = FUN_006f0400(*param_3 - fVar46,param_3[2] - fVar44);
  FUN_01e39778(plVar35,&local_11c,&local_164,0);
  lVar19 = plVar35[0x77];
  if (lVar19 != 0) {
    *(ulong *)(lVar19 + 0xad58) = *(ulong *)(lVar19 + 0xad58) & 0xfffffffffffffffd;
    uVar12 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&DAT_0545c410,PTR_DAT_04bb3238,1);
    FUN_02085e20(plVar35[0x78],0,uVar12,PTR_DAT_04bb6928,0);
  }
  if (!bVar7) {
    (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
    (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
    if (DAT_0545c418 == "chm") {
LAB_00e71ae8:
      uVar15 = 0xc8d;
    }
    else {
      uVar14 = 0;
      bVar7 = true;
      do {
        if (DAT_0545c418[uVar14] != (&DAT_040bac98)[uVar14]) break;
        if (DAT_0545c418[uVar14] == '\0') {
          if (bVar7) goto LAB_00e71ae8;
          break;
        }
        bVar7 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
      (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
      if (DAT_0545c418 == "slo") {
LAB_00e71b60:
        uVar15 = 0x2355;
      }
      else {
        uVar14 = 0;
        bVar7 = true;
        uVar15 = 0x1c91;
        do {
          if (DAT_0545c418[uVar14] != (&DAT_040b026f)[uVar14]) break;
          if (DAT_0545c418[uVar14] == '\0') {
            if (bVar7) goto LAB_00e71b60;
            uVar15 = 0x1c91;
            break;
          }
          bVar7 = uVar14 < 0x80000;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 0x80001);
      }
    }
    lVar19 = plVar35[0x76];
    local_110 = (undefined **)(ulong)uVar15;
    FUN_0277d4ac(&local_110);
    FUN_01e57c78(lVar19,&local_110,0,1);
  }
  return;
}

