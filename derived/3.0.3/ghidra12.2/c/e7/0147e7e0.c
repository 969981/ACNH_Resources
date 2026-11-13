
undefined8 FUN_0147e7e0(long param_1,uint *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  bool bVar14;
  long lVar15;
  byte *pbVar16;
  uint *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_1d4;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined8 uStack_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined8 ****local_168;
  undefined8 ****ppppuStack_160;
  undefined4 local_158;
  undefined8 ***local_150 [3];
  undefined8 **local_138 [3];
  undefined8 *local_120 [3];
  undefined8 local_108 [3];
  float local_ec;
  float fStack_e8;
  float local_e4;
  uint local_e0;
  uint uStack_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  uint local_c8;
  uint local_c4;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  byte local_ab;
  undefined1 local_aa;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  byte local_80;
  undefined4 local_7c;
  
  fVar23 = *(float *)(param_3 + 8);
  fVar24 = *(float *)(param_3 + 0x10);
  uVar20 = *(int *)(param_3 + 0x14) + 0x20000000U >> 0x1e;
  local_e0 = uVar20;
  if (*(uint *)(param_3 + 0x18) - 2 < 4) {
    local_e0 = 0;
  }
  local_188._0_4_ = *(uint *)(param_3 + 0x18);
  FUN_01473944(&local_188,param_1);
  pbVar16 = PTR_DAT_04bb32e0;
  puVar4 = PTR_DAT_04bb2010;
  iVar10 = (int)local_180;
  iVar8 = local_180._4_4_;
  if ((local_e0 & 0x80000001) != 1) {
    iVar10 = local_180._4_4_;
    iVar8 = (int)local_180;
  }
  local_a8 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_a4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_90 = 0;
  uStack_88 = 0;
  local_7c = 0;
  local_b0 = 0;
  local_aa = 0;
  local_80 = *PTR_DAT_04bb32e0;
  fVar23 = fVar23 - ((float)iVar8 * 0.5 * 5.0 + -2.5);
  fVar24 = fVar24 - ((float)iVar10 * 0.5 * 5.0 + -2.5);
  if (7 < local_80) {
    local_80 = 0xff;
  }
  local_d8 = PTR_DAT_04bb2010 + 0x10;
  uStack_98 = 0;
  uStack_b8 = 0;
  iVar10 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  iVar8 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  local_c0 = local_d8;
  local_a0 = local_d8;
  FUN_01476a50(&local_188,param_1);
  puVar9 = PTR_DAT_04bb27c0;
  local_e0 = (uint)local_188;
  uStack_dc = local_188._4_4_;
  local_c4 = *(uint *)(param_3 + 0x18);
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  if (lVar15 == 0) {
LAB_0147e990:
    if (7 < *pbVar16) {
LAB_0147e99c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar7 = *(byte *)(lVar15 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar17 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar17 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar17 & 8) != 0) {
            pbVar16 = (byte *)(lVar15 + 0x471);
          }
        }
        local_ab = *pbVar16;
        if (local_ab < 8) goto LAB_0147ea0c;
      }
      pbVar16 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0147e990;
      }
      goto LAB_0147e99c;
    }
  }
  local_ab = *pbVar16;
  if (7 < local_ab) {
    local_ab = 0xff;
  }
LAB_0147ea0c:
  local_ac = 0;
  if (7 < local_ab) {
    local_ab = 0xff;
  }
  local_188 = (undefined *)CONCAT44(local_188._4_4_,local_c4);
  local_d0 = iVar10;
  iStack_cc = iVar8;
  local_c8 = uVar20;
  if (local_c4 < 2) {
    local_188 = (undefined *)((ulong)local_188._4_4_ << 0x20);
    local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,1);
    puVar1 = PTR_DAT_04bbcda0 + 0x10;
    puVar2 = PTR_DAT_04bb3290 + 0x10;
    puVar3 = PTR_DAT_04bbd460 + 0x10;
    puVar4 = puVar4 + 0x10;
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    uVar20 = 0;
    do {
      local_c4 = uVar20;
      if (*(int *)(param_1 + 0x300) == 0 && *(int *)(param_1 + 0x388) == 0) {
LAB_0147eaf0:
        iVar10 = FUN_0148e51c(&local_a8,&local_e0);
        if (iVar10 == 9) goto LAB_0147ee20;
      }
      else if (uVar20 != 1) {
        if (uVar20 == 0) {
          lVar15 = *(long *)(param_1 + 0x68);
          local_108[0] = 0;
          local_170 = 0;
          local_ec = *(float *)(param_3 + 8) - *(float *)(lVar15 + 0x278);
          fStack_e8 = *(float *)(param_3 + 0xc) - *(float *)(lVar15 + 0x27c);
          local_180 = &local_180;
          local_e4 = *(float *)(param_3 + 0x10) - *(float *)(lVar15 + 0x280);
          local_158 = 4;
          local_188 = puVar1;
          local_178 = &local_180;
          local_168 = local_150;
          ppppuStack_160 = local_150;
          local_150[0] = local_138;
          local_138[0] = local_120;
          local_120[0] = local_108;
          FUN_0147a740(&local_180,param_1 + 0x2f0);
          puVar17 = (uint *)(local_178 + -1);
          puVar18 = local_178;
          if (puVar17 == (uint *)&local_188) {
            bVar14 = true;
          }
          else {
            do {
              lVar15 = *(long *)puVar9;
              if (lVar15 != 0) {
                uVar19 = *puVar17;
                if ((((uVar19 == 0) ||
                     (plVar21 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                          ((ulong)(uVar19 >> 0x11) & 0x7ff8)),
                     plVar21 == (long *)0x0)) || ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) ||
                   (*(uint *)(plVar21 + 0x46) != uVar19)) {
                  plVar21 = (long *)0x0;
                }
                if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
                  plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar15 = *(long *)puVar9;
                  iVar10 = (**(code **)(*plVar12 + 0x60))();
                  if (iVar10 < 0x11) {
                    uVar19 = 1;
                  }
                  else {
                    uVar19 = *(uint *)(lVar15 + 0x5e8);
                    if (4 < uVar19) goto LAB_0147ec80;
                    uVar19 = 0x1aU >> (ulong)(uVar19 & 0x1f) & 1;
                  }
                }
                else {
LAB_0147ec80:
                  uVar19 = 0;
                }
                if (plVar21 != (long *)0x0) {
                  lVar15 = plVar21[0x2a];
                  uVar6 = *(uint *)(plVar21 + 0x49);
                  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar10 != 0)) {
                    *(undefined **)PTR_DAT_04bb5920 = puVar2;
                    __cxa_guard_release(PTR_DAT_04bb5928);
                  }
                  uVar11 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb5920);
                  if ((((int)lVar15 == 1) && ((uVar11 & uVar19) != 0)) && ((uVar6 >> 4 & 1) != 0)) {
                    local_1d0 = (undefined *)0xfffe;
                    FUN_0277d4ac(&local_1d0);
                    local_1a0 = (undefined *)0xfffe;
                    local_1a8 = puVar3;
                    FUN_0277d4ac(&local_1a0);
                    local_1a0 = local_1d0;
                    uStack_190 = 0;
                    local_198 = puVar4;
                    (**(code **)(*(long *)plVar21[0x152] + 0x110))
                              ((long *)plVar21[0x152],&local_1a8,&local_ec,PTR_DAT_04bb2ce8,1);
                    uStack_1b0 = 0;
                    local_1c0 = 0;
                    local_1d0 = puVar5;
                    puStack_1c8 = puVar4;
                    local_1b8 = puVar4;
                    FUN_0154f6c8(&local_1a8,&local_1d0,0);
                    fVar23 = (float)FUN_01472900(param_1);
                    fVar24 = (float)FUN_01472cc0(param_1);
                    fVar22 = (float)FUN_01472900(plVar21);
                    local_1d4 = 1;
                    if (fVar23 <= fVar24 + fVar22) {
                      fVar23 = fVar24 + fVar22;
                    }
                    uVar13 = FUN_01490160(fVar23,&local_1d0,&local_1d4);
                    if ((uVar13 & 1) != 0) {
                      bVar14 = false;
                      goto LAB_0147ede8;
                    }
                  }
                }
              }
              puVar17 = (uint *)((undefined8 *)puVar18[1] + -1);
              puVar18 = (undefined8 *)puVar18[1];
            } while (puVar17 != (uint *)&local_188);
            bVar14 = true;
          }
LAB_0147ede8:
          puVar18 = &local_180;
          do {
            puVar18 = (undefined8 *)puVar18[1];
          } while (puVar18 != &local_180);
          if (!bVar14) goto LAB_0147eb04;
        }
        goto LAB_0147eaf0;
      }
LAB_0147eb04:
      uVar19 = 8;
      if ((int)uVar20 < 8) {
        uVar19 = uVar20 + 1;
      }
      uVar20 = uVar19;
    } while (uVar19 != 2);
  }
  else {
    iVar10 = FUN_0148e51c(&local_a8,&local_e0);
    if (iVar10 == 9) {
LAB_0147ee20:
      *param_2 = local_c4;
      return 1;
    }
  }
  return 0;
}

