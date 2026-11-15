
/* WARNING: Removing unreachable block (ram,0x01fadcf0) */
/* WARNING: Removing unreachable block (ram,0x01fadcc4) */
/* WARNING: Removing unreachable block (ram,0x01fadc94) */
/* WARNING: Removing unreachable block (ram,0x01fadc48) */
/* WARNING: Removing unreachable block (ram,0x01fadc1c) */
/* WARNING: Removing unreachable block (ram,0x01fadbcc) */
/* WARNING: Removing unreachable block (ram,0x01fadb80) */
/* WARNING: Removing unreachable block (ram,0x01fadb54) */
/* WARNING: Removing unreachable block (ram,0x01fadb24) */
/* WARNING: Removing unreachable block (ram,0x01fadad8) */
/* WARNING: Removing unreachable block (ram,0x01fadaac) */
/* WARNING: Removing unreachable block (ram,0x01fad748) */
/* WARNING: Removing unreachable block (ram,0x01fad758) */
/* WARNING: Removing unreachable block (ram,0x01fadac8) */
/* WARNING: Removing unreachable block (ram,0x01fadaf0) */
/* WARNING: Removing unreachable block (ram,0x01fadb34) */
/* WARNING: Removing unreachable block (ram,0x01fadb70) */
/* WARNING: Removing unreachable block (ram,0x01fadb98) */
/* WARNING: Removing unreachable block (ram,0x01fadbdc) */
/* WARNING: Removing unreachable block (ram,0x01fadc38) */
/* WARNING: Removing unreachable block (ram,0x01fadc60) */
/* WARNING: Removing unreachable block (ram,0x01fadca4) */
/* WARNING: Removing unreachable block (ram,0x01fadce0) */
/* WARNING: Removing unreachable block (ram,0x01fadd08) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe50 : 0x01fadb64 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01fad3f8(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  int *local_258;
  int *local_250;
  undefined4 local_230;
  float local_22c;
  undefined4 local_228;
  float local_224;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 local_210;
  ulong local_208;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined *local_198;
  int local_190;
  int local_18c;
  uint local_188 [2];
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined *puStack_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  char *local_e0;
  undefined4 local_d8;
  char local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  
  puVar6 = PTR_DAT_04bb27c0;
  lVar21 = *(long *)PTR_DAT_04bb27c0;
  if (lVar21 == 0) {
    return 0;
  }
  uVar18 = *param_2;
  if ((((uVar18 == 0) ||
       (plVar22 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                            ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
      ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar22 + 0x46) != uVar18)) {
    plVar22 = (long *)0x0;
  }
  if (*(int *)(lVar21 + 0x288) == 1 || *(int *)(lVar21 + 0x288) == -1) {
    plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)puVar6;
    iVar17 = (**(code **)(*plVar19 + 0x60))();
    pbVar4 = PTR_DAT_04bb37d8;
    if (iVar17 < 0x11) {
      uVar18 = 1;
    }
    else {
      if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_01fad4cc;
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fad4cc:
    uVar18 = 0;
    pbVar4 = PTR_DAT_04bb37d8;
  }
  if (plVar22 == (long *)0x0) {
    PTR_DAT_04bb37d8 = pbVar4;
    return 0;
  }
  lVar21 = plVar22[0x2a];
  PTR_DAT_04bb37d8 = pbVar4;
  if (((*pbVar4 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar4), iVar17 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  puVar7 = PTR_DAT_04bb37d0;
  uVar20 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb37d0);
  uVar2 = 0;
  if ((int)lVar21 == 1) {
    uVar2 = uVar18;
  }
  if ((uVar20 & 1) == 0) {
    return 0;
  }
  if (uVar2 == 0) {
    return 0;
  }
  puVar23 = (undefined8 *)plVar22[0x77];
  if (((*PTR_DAT_04bb6710 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar17 != 0)) {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if (puVar23 == (undefined8 *)0x0) {
    return 0;
  }
  uVar20 = (**(code **)*puVar23)(puVar23,PTR_DAT_04bb6708);
  puVar9 = PTR_DAT_04bbc1a0;
  puVar5 = PTR_DAT_04bb2010;
  if ((uVar20 & 1) == 0) {
    return 0;
  }
  local_158 = 0;
  uStack_150 = 0;
  local_138 = local_12c;
  local_188[0] = 0;
  local_ed = 0;
  local_12c[0] = 0;
  local_178 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_170 = PTR_DAT_04bb2010 + 0x10;
  local_168 = 0;
  local_130 = 0x40;
  local_180 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_17c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_e0 = local_d4;
  local_d8 = 0x40;
  local_95 = 0;
  puStack_140 = PTR_DAT_04bb2bc0 + 0x10;
  local_d4[0] = '\0';
  local_90 = 0;
  local_148 = 0;
  puStack_160 = puStack_170;
  local_e8 = puStack_140;
  uVar20 = FUN_01fa2a90(puVar23,local_188);
  puVar8 = PTR_DAT_04bb43c0;
  if ((uVar20 & 1) == 0) {
    return 0;
  }
  if (*local_e0 == '\0') {
    return 0;
  }
  puVar1 = (uint *)(param_1 + 0xafb0);
  if ((int)local_90 == 2) {
    iVar15 = local_158._4_4_;
    local_1c8 = puVar5 + 0x10;
    iVar14 = (int)local_158;
    iVar12 = (int)local_168;
    iVar13 = local_168._4_4_;
    iVar17 = (int)local_158 + (int)local_168;
    if (iVar17 < 0 != SCARRY4((int)local_158,(int)local_168)) {
      iVar17 = iVar17 + 1;
    }
    local_1a0 = (iVar17 >> 1) + 1;
    local_1c0._4_4_ = (int)(float)(local_158._4_4_ + 2);
    iVar17 = local_158._4_4_ + local_168._4_4_;
    if (iVar17 < 0 != SCARRY4(local_158._4_4_,local_168._4_4_)) {
      iVar17 = iVar17 + 1;
    }
    local_18c = (iVar17 >> 1) + 1;
    iStack_19c = (int)(float)(local_168._4_4_ + -1);
    local_1b0 = (undefined *)CONCAT44(local_18c,(int)(float)((int)local_158 + 2));
    local_190 = (int)(float)((int)local_168 + -1);
    lVar21 = *(long *)PTR_DAT_04bb43c0;
    local_1b8 = local_1c8;
    local_1a8 = local_1c8;
    local_198 = local_1c8;
    local_1c0._0_4_ = local_1a0;
    uVar18 = FUN_0277d6c4(&local_180);
    if (*(long *)puVar8 == 0) {
      return 0;
    }
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if (*(uint *)(lVar21 + 0x1d8) <= uVar18) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) == 0) {
      return 0;
    }
    FUN_01ad5d04(&local_1f8,&local_180);
    iVar17 = FUN_01b0e240(&local_1f8);
    if (iVar17 - 1U < 2) {
      return 0;
    }
    local_22c = 0.0;
    local_220 = local_220 & 0xffffffff00000000;
    local_210 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    local_250 = (int *)&local_1c0;
    local_208 = *(long *)PTR_DAT_04bb27c8 + 0x28;
    local_258 = (int *)((long)&local_1c0 + 4);
    uVar20 = FUN_035aa5a0((int)local_1c0,local_1c0._4_4_,&local_210);
    if (((uVar20 & 1) == 0) || (uVar20 = FUN_01fabae0(param_1,&local_1c8), (uVar20 & 1) != 0)) {
      local_22c = 1.4013e-45;
      local_220 = local_220 & 0xffffffff00000000;
      local_210 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      local_250 = (int *)&local_1b0;
      local_258 = (int *)((long)&local_1b0 + 4);
      local_208 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      uVar20 = FUN_035aa5a0((int)local_1b0,local_1b0._4_4_,&local_210);
      if (((uVar20 & 1) == 0) || (uVar20 = FUN_01fabae0(param_1,&local_1b8), (uVar20 & 1) != 0)) {
        local_22c = 2.8026e-45;
        local_220 = local_220 & 0xffffffff00000000;
        local_210 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
        local_250 = &local_1a0;
        local_258 = &iStack_19c;
        local_208 = *(long *)PTR_DAT_04bb27c8 + 0x28;
        uVar20 = FUN_035aa5a0(local_1a0,iStack_19c,&local_210);
        if (((uVar20 & 1) == 0) || (uVar20 = FUN_01fabae0(param_1,&local_1a8), (uVar20 & 1) != 0)) {
          local_22c = 4.2039e-45;
          local_220 = local_220 & 0xffffffff00000000;
          local_210 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
          local_250 = &local_190;
          local_258 = &local_18c;
          local_208 = *(long *)PTR_DAT_04bb27c8 + 0x28;
          uVar20 = FUN_035aa5a0(local_190,local_18c,&local_210);
          if ((uVar20 & 1) == 0) {
            return 0;
          }
          uVar20 = FUN_01fabae0(param_1,&local_198);
          if ((uVar20 & 1) != 0) {
            return 0;
          }
        }
      }
    }
    local_210 = (undefined *)(ulong)(uint)((float)*local_250 * 5.0);
    local_208 = CONCAT44(local_208._4_4_,(float)*local_258 * 5.0);
    local_1cc = FUN_006f0400(((float)iVar12 * 5.0 + (float)iVar14 * 5.0 + 5.0) * 0.5 -
                             (float)*local_250 * 5.0,
                             ((float)iVar13 * 5.0 + (float)iVar15 * 5.0 + 5.0) * 0.5 -
                             (float)*local_258 * 5.0);
    FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_210,&local_1cc,0);
    *puVar1 = *puVar1 | 0x200;
    *(uint *)(param_1 + 0x12088) = *param_2;
    return 1;
  }
  lVar21 = *(long *)puVar6;
  if (lVar21 == 0) {
    return 0;
  }
  if ((((local_188[0] == 0) ||
       (plVar22 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                            ((ulong)(local_188[0] >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
      ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar22 + 0x46) != local_188[0])) {
    plVar22 = (long *)0x0;
  }
  if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
    plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)puVar6;
    iVar17 = (**(code **)(*plVar19 + 0x60))();
    if (iVar17 < 0x11) {
      uVar18 = 1;
    }
    else {
      if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_01fad800;
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fad800:
    uVar18 = 0;
  }
  if (plVar22 == (long *)0x0) {
    return 0;
  }
  lVar21 = plVar22[0x2a];
  if (((*pbVar4 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar17 != 0)) {
    *(undefined **)puVar7 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar20 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb37d0);
  uVar2 = 0;
  if ((int)lVar21 == 1) {
    uVar2 = uVar18;
  }
  if ((uVar20 & 1) == 0) {
    return 0;
  }
  if (uVar2 == 0) {
    return 0;
  }
  lVar21 = FUN_01fa2530(plVar22);
  if (lVar21 == 0) {
    return 0;
  }
  if ((int)local_90 == 0) {
    local_1f8 = puVar9 + 0x10;
    local_1f0 = puVar5 + 0x10;
    local_1b8 = (undefined *)0x0;
    local_1a8 = (undefined *)0x0;
    local_1e8 = 0;
    uStack_1d8 = 0;
    local_1e0 = local_1f0;
    local_1c8 = local_1f8;
    local_1c0 = local_1f0;
    local_1b0 = local_1f0;
    FUN_01fa307c(lVar21,&local_1c8,PTR_DAT_04bb2108,2);
    FUN_01fa307c(lVar21,&local_1f8,PTR_DAT_04bb2cf8,2);
    FUN_01a4f4bc(&local_210);
    local_210 = PTR_DAT_04bb3140 + 0x10;
    local_220 = param_1;
    local_218 = &local_210;
    uVar20 = FUN_01fadfe0(&local_220,&local_1c8);
    uVar26 = uVar20 & 0xffffffff;
    uVar24 = FUN_01fadfe0(&local_220,&local_1f8);
    uVar25 = uVar24 & 0xffffffff;
    uVar27 = 3;
    if (((uVar20 & 1) != 0) && ((uVar24 & 1) != 0)) {
      return 0;
    }
  }
  else {
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 2;
  }
  local_208 = local_208 & 0xffffffff00000000;
  local_210 = (undefined *)0x0;
  local_218 = (undefined8 *)((ulong)local_218 & 0xffffffff00000000);
  local_220 = 0;
  FUN_01fa31fc(lVar21,&local_220,PTR_DAT_04bb2108,uVar27);
  uVar27 = FUN_01fa31fc(lVar21,&local_210,PTR_DAT_04bb2cf8,uVar27);
  fVar10 = (float)local_220;
  local_1f8 = puVar5 + 0x10;
  fVar3 = local_218._0_4_;
  fVar11 = (float)local_210;
  fVar16 = (float)local_208;
  local_1c0 = (undefined *)
              CONCAT44((int)((float)(int)local_218._0_4_ / 5.0) - (uint)(local_218._0_4_ < 0.0),
                       (int)((float)(int)(float)local_220 / 5.0) - (uint)((float)local_220 < 0.0));
  local_1f0 = (undefined *)
              CONCAT44((int)((float)(int)(float)local_208 / 5.0) - (uint)((float)local_208 < 0.0),
                       (int)((float)(int)(float)local_210 / 5.0) - (uint)((float)local_210 < 0.0));
  local_1c8 = local_1f8;
  if ((uVar26 & 1) == 0) {
    uVar20 = FUN_01fadef8(uVar27,&local_1c8);
    uVar24 = uVar20 & 0xffffffff;
    if ((uVar25 & 1) == 0) goto LAB_01fad978;
    if ((uVar20 & 1) == 0) {
      return 0;
    }
LAB_01fadbe4:
    local_22c = fVar10;
    local_228 = local_220._4_4_;
  }
  else {
    uVar24 = 0;
    uVar20 = 0;
    if ((uVar25 & 1) != 0) {
      return 0;
    }
LAB_01fad978:
    uVar20 = FUN_01fadef8(uVar20,&local_1f8);
    if (((uVar24 & 1) == 0) && ((uVar20 & 1) == 0)) {
      return 0;
    }
    if ((uVar20 & 1) == 0) goto LAB_01fadbe4;
    if ((uVar24 & 1) == 0) {
      local_224 = fVar16;
      local_22c = fVar11;
      local_228 = local_210._4_4_;
      goto LAB_01fadbf0;
    }
    lVar21 = *(long *)(param_1 + 8);
    uVar18 = *(uint *)(lVar21 + 0x288);
    *(undefined4 *)(lVar21 + 0x288) = *(undefined4 *)(lVar21 + 0x28c);
    uVar18 = uVar18 ^ uVar18 << 0xb;
    *(undefined4 *)(lVar21 + 0x28c) = *(undefined4 *)(lVar21 + 0x290);
    uVar2 = *(uint *)(lVar21 + 0x294);
    *(uint *)(lVar21 + 0x290) = uVar2;
    uVar18 = uVar18 >> 8 ^ uVar2 >> 0x13 ^ uVar18 ^ uVar2;
    *(uint *)(lVar21 + 0x294) = uVar18;
    puVar23 = &local_210;
    local_22c = fVar11;
    if ((uVar18 & 2) != 0) {
      puVar23 = &local_220;
      fVar16 = fVar3;
      local_22c = fVar10;
    }
    fVar3 = fVar16;
    local_228 = *(undefined4 *)((ulong)puVar23 | 4);
  }
  local_224 = fVar3;
LAB_01fadbf0:
  lVar21 = plVar22[0xd];
  if ((int)local_90 == 0) {
    local_230 = FUN_006f0400(*(float *)(lVar21 + 0x278) - local_22c,
                             *(float *)(lVar21 + 0x280) - local_224);
  }
  else {
    local_230 = *(undefined4 *)(lVar21 + 0x2b4);
  }
  FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_22c,&local_230,0);
  *puVar1 = *puVar1 | 0x200;
  *(uint *)(param_1 + 0x12088) = *param_2;
  return 1;
}

