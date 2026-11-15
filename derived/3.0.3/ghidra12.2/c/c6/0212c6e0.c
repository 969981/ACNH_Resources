
void FUN_0212c6e0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined **local_198;
  undefined8 *puStack_190;
  undefined8 *local_188;
  float *pfStack_180;
  undefined8 local_178;
  float local_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float local_120;
  undefined8 local_11c;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_8c;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  puVar3 = PTR_DAT_04bb27c0;
  local_48 = 0;
  lVar12 = *(long *)(param_1 + 8);
  local_50 = 0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    uVar2 = *param_2;
    if ((((uVar2 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                              ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar2)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
        if (*(uint *)(lVar7 + 0x5e8) < 5) {
          uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar2 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar7 = plVar10[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar2;
      }
      if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
        if ((int)plVar10[0xa0] == 2) {
          return;
        }
        pcVar8 = (char *)plVar10[0x7d];
        if (((*pcVar8 == 'g') && (pcVar8[1] == 's')) && (pcVar8[2] == 't')) {
          return;
        }
        local_48 = *(undefined4 *)(plVar10[0xd] + 0x280);
        local_50 = *(undefined8 *)(plVar10[0xd] + 0x278);
      }
    }
  }
  if (*param_2 != *(uint *)(lVar12 + 0x398) && *param_2 != *(uint *)(lVar12 + 0x39c)) {
    pfStack_180 = &local_170;
    local_178 = 0;
    lVar7 = *(long *)PTR_DAT_04bb5c90;
    puStack_190 = &local_50;
    fStack_a4 = *(float *)(lVar7 + 0x40);
    local_11c = 0;
    local_114 = 0;
    local_e4 = 0;
    local_84 = 0;
    local_54 = 0;
    local_ec = 0;
    local_8c = 0;
    local_5c = 0;
    local_170 = fStack_a4 + 18.0;
    fStack_16c = *(float *)(lVar7 + 0x44) + 0.0;
    local_158 = fStack_a4 + 0.0;
    fStack_164 = fStack_a4 + 36.0;
    fStack_14c = fStack_a4 + -18.0;
    fStack_134 = fStack_a4 + -36.0;
    local_e0 = fStack_a4 + 9.0;
    local_d8 = *(float *)(lVar7 + 0x48) + 0.0;
    local_168 = *(float *)(lVar7 + 0x48) + 15.0;
    local_c8 = fStack_a4 + -9.0;
    fStack_d4 = fStack_a4 + 27.0;
    fStack_a4 = fStack_a4 + -27.0;
    local_198 = &PTR_FUN_04a75090;
    local_188 = &local_178;
    iVar4 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar4 != 0) {
      lVar7 = (long)iVar4 << 3;
      puVar11 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      local_160 = fStack_16c;
      fStack_15c = local_168;
      fStack_154 = fStack_16c;
      local_150 = local_168;
      local_148 = fStack_16c;
      fStack_144 = local_168;
      local_140 = local_158;
      fStack_13c = fStack_16c;
      local_138 = local_168;
      local_130 = fStack_16c;
      fStack_12c = local_168;
      local_128 = fStack_164;
      fStack_124 = fStack_16c;
      local_120 = local_168;
      local_110 = local_170;
      fStack_10c = fStack_16c;
      local_108 = local_168;
      fStack_104 = fStack_134;
      local_100 = fStack_16c;
      fStack_fc = local_168;
      local_f8 = fStack_14c;
      fStack_f4 = fStack_16c;
      local_f0 = local_168;
      fStack_dc = fStack_16c;
      local_d0 = fStack_16c;
      fStack_cc = local_d8;
      fStack_c4 = fStack_16c;
      local_c0 = local_d8;
      fStack_bc = local_c8;
      local_b8 = fStack_16c;
      fStack_b4 = local_d8;
      local_b0 = local_e0;
      fStack_ac = fStack_16c;
      local_a8 = local_d8;
      local_a0 = fStack_16c;
      local_9c = local_d8;
      local_98 = fStack_d4;
      local_94 = fStack_16c;
      local_90 = local_d8;
      local_80 = local_e0;
      local_7c = fStack_16c;
      local_78 = local_d8;
      local_74 = fStack_a4;
      local_70 = fStack_16c;
      local_6c = local_d8;
      local_68 = local_c8;
      local_64 = fStack_16c;
      local_60 = local_d8;
      do {
        (*(code *)*local_198)(&local_198,*puVar11);
        lVar7 = lVar7 + -8;
        puVar11 = puVar11 + 1;
      } while (lVar7 != 0);
    }
    if (*(int *)(lVar12 + 0x278) < *(int *)(lVar12 + 0x27c)) {
      puVar9 = *(uint **)(lVar12 + 0x288);
      if (puVar9 != (uint *)0x0) {
        *(undefined8 *)(lVar12 + 0x288) = *(undefined8 *)puVar9;
      }
      puVar3 = PTR_DAT_04bb3238;
      *puVar9 = *(uint *)PTR_DAT_04bb3238;
      uVar2 = *(uint *)puVar3;
      puVar9[1] = uVar2;
      puVar9[2] = uVar2;
      puVar9[3] = 0;
      if (*(int *)(lVar12 + 0x278) < *(int *)(lVar12 + 0x27c)) {
        *(uint **)(*(long *)(lVar12 + 0x280) + (long)*(int *)(lVar12 + 0x278) * 8) = puVar9;
        *(int *)(lVar12 + 0x278) = *(int *)(lVar12 + 0x278) + 1;
      }
      *puVar9 = *param_2;
      puVar9[1] = (uint)local_178;
      puVar9[2] = local_178._4_4_;
    }
  }
  return;
}

