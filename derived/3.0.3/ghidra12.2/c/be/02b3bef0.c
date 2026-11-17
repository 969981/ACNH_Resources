
/* WARNING: Removing unreachable block (ram,0x02b3c134) */
/* WARNING: Removing unreachable block (ram,0x02b3c31c) */
/* WARNING: Removing unreachable block (ram,0x02b3c12c) */

undefined8 FUN_02b3bef0(long param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  uint *puVar8;
  short sVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **__src;
  bool bVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined **local_220;
  undefined **local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined1 local_1cd;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined local_184 [127];
  undefined1 local_105;
  undefined4 local_100;
  undefined1 local_fc;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined *local_a0;
  byte local_98;
  int local_94;
  undefined *local_90;
  undefined8 local_88;
  int local_80;
  undefined2 local_7c;
  undefined1 local_68 [4];
  undefined4 local_64;
  
  puVar10 = PTR_DAT_04bb2010;
  uVar21 = 0;
  do {
    uVar20 = (uint)uVar21;
    piVar5 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar21 * 4);
    if (0x38 < uVar20) {
      piVar5 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar5 == param_2) goto LAB_02b3bf5c;
    uVar16 = 0x39;
    if ((int)uVar20 < 0x39) {
      uVar16 = uVar20 + 1;
    }
    uVar21 = (ulong)uVar16;
  } while (uVar16 != 0x39);
  uVar20 = 0;
LAB_02b3bf5c:
  if (uVar20 == 0) {
    plVar14 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar14 = plVar1 + uVar20;
    if (0x38 < uVar20) {
      plVar14 = plVar1;
    }
  }
  puVar6 = &DAT_05636dd8;
  if (*plVar14 != 0) {
    puVar6 = (undefined8 *)(*plVar14 + 0x148);
  }
  if (puVar6[1] == 0) {
    return 0;
  }
  local_94 = 0;
  local_218 = &local_a0;
  local_a0 = PTR_DAT_04bc4608 + 0x10;
  local_80 = 0;
  local_7c = 0;
  local_98 = 0;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  local_220 = &PTR_FUN_04aa2ad8;
  if (puVar6[1] != 0) {
    local_1a0._0_4_ = uVar20;
    plVar14 = (long *)(*(code *)**(undefined8 **)(puVar6[1] + 0x10))();
    iVar13 = (**(code **)(*plVar14 + 0x18))();
    if (0 < iVar13) {
      iVar18 = 0;
      do {
        FUN_01360490(&local_1a0,puVar6[1],iVar18);
        uVar21 = (*(code *)*local_220)(&local_220,&local_1a0);
        if ((uVar21 & 1) != 0) break;
        bVar12 = iVar13 + -1 != iVar18;
        iVar18 = iVar18 + 1;
      } while (bVar12);
    }
  }
  if (local_94 == 0) {
    return 0;
  }
  if (puVar6[1] == 0) {
    uVar16 = 0xffffffff;
    if (uVar20 != 0x32) goto LAB_02b3c0a4;
LAB_02b3c0ac:
    param_1 = param_1 + 0x10;
  }
  else {
    uVar16 = 0xffffffff;
    if ((uint)local_88 < 0x120) {
      if (local_88._4_4_ < 0x100) {
        uVar16 = *(uint *)(puVar6[1] + (local_88 & 0xffffffff) * 0x400 + (ulong)local_88._4_4_ * 4 +
                          0x30);
      }
    }
    if (uVar20 == 0x32) goto LAB_02b3c0ac;
LAB_02b3c0a4:
    if (uVar20 == 1) goto LAB_02b3c0ac;
    param_1 = param_1 + 0x6dc8;
  }
  lVar7 = param_1 + 8 + (ulong)uVar16 * 0x208;
  if (0x35 < uVar16) {
    lVar7 = param_1 + 8;
  }
  if ((uVar16 == 0xffffffff) || (*(long *)(lVar7 + 8) != 0)) {
    return 0;
  }
  local_1a0 = (undefined *)((ulong)local_1a0._4_4_ << 0x20);
  puVar2 = (undefined8 *)(lVar7 + 0x10);
  *(undefined8 **)(lVar7 + 8) = puVar2;
  if (((*PTR_DAT_04bc4560 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bc4560), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bc4558 = PTR_DAT_04bbba98 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4560);
  }
  uVar21 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc4558);
  puVar11 = PTR_DAT_04bbc1a0;
  if ((uVar21 & 1) == 0) {
    return 0;
  }
  puVar3 = puVar10 + 0x10;
  local_b0 = local_94;
  local_188 = 0x80;
  local_105 = 0;
  local_184[0] = 0;
  local_100 = 0;
  local_fc = 0;
  local_190 = local_184;
  local_a8 = local_98 & 1;
  uStack_f0 = 0;
  local_198 = PTR_DAT_04bb2d88 + 0x10;
  puVar19 = PTR_DAT_04bbc1a0 + 0x10;
  uStack_d0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_b4 = 0;
  local_e8 = 0;
  local_ac = (undefined4)(long)((float)local_80 * 90.0 * 11930465.0);
  local_1a0 = PTR_DAT_04bc49b8 + 0x10;
  local_f8 = puVar3;
  puStack_e0 = puVar19;
  local_d8 = puVar3;
  local_c8 = puVar3;
  FUN_02b34590(&local_1a0,&local_b0);
  local_1b8 = 0;
  local_1a8 = 0;
  local_1c8 = puVar19;
  puStack_1c0 = puVar3;
  local_1b0 = puVar3;
  FUN_02a8f7b0(&local_a0,&local_1c8);
  local_218 = (undefined **)
              CONCAT44(local_218._4_4_,
                       ((float)local_1b8._4_4_ * 5.0 + (float)local_1a8._4_4_ * 5.0 + 5.0) * 0.5);
  local_220 = (undefined **)
              CONCAT44(local_220._4_4_,
                       ((float)(int)local_1b8 * 5.0 + (float)(int)local_1a8 * 5.0 + 5.0) * 0.5);
  if ((uVar20 == 0x32) || (uVar20 == 1)) {
    if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
       (lVar15 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar15 != 0)) {
      sVar9 = *(short *)PTR_DAT_04bb6298;
      if (sVar9 == -1) {
        local_64 = 7;
      }
      else {
        puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
        if (0xff < (uint)(int)sVar9) {
          puVar8 = (uint *)PTR_DAT_04bc39f8;
        }
        local_64 = 7;
        if ((*puVar8 & 2) != 0) {
          local_64 = 5;
        }
      }
      local_68[0] = 0;
      uVar22 = FUN_00962700(lVar15,&local_220,&local_64,1,local_68);
      goto LAB_02b3c374;
    }
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) && (*(char *)(lVar15 + 0x11c8) == '\0'))
    {
      uVar22 = FUN_0093b024(lVar15 + 0x28,&local_220,0);
      goto LAB_02b3c374;
    }
  }
  uVar22 = 0xc3fa0000;
LAB_02b3c374:
  puVar3 = (undefined *)((long)&local_210 + 4);
  local_210 = CONCAT44(local_210._4_4_,0x40);
  local_1cd = 0;
  local_220 = (undefined **)(PTR_DAT_04bb2f70 + 0x10);
  local_218 = (undefined **)puVar3;
  (**(code **)(local_198 + 0x18))(&local_198);
  puVar19 = local_190;
  if (puVar3 != local_190) {
    (**(code **)(local_198 + 0x18))(&local_198);
    lVar15 = 0;
    do {
      if (local_190[lVar15] == '\0') goto LAB_02b3c410;
      if (local_190[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_02b3c410;
      }
      if (local_190[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_02b3c410;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_02b3c410:
    iVar13 = (int)lVar15;
    if ((int)local_210 <= (int)lVar15) {
      iVar13 = (int)local_210 + -1;
    }
    memcpy(puVar3,puVar19,(long)iVar13);
    puVar3[iVar13] = 0;
  }
  __src = local_218;
  puVar3 = PTR_DAT_04bb2bc0;
  local_220 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  puVar19 = *(undefined **)(lVar7 + 0x60);
  *(undefined1 *)((long)local_218 + (long)(int)local_210 + -1) = 0;
  if ((undefined **)puVar19 != local_218) {
    (**(code **)(puVar3 + 0x28))(&local_220);
    lVar15 = 0;
    do {
      if (*(char *)((long)local_218 + lVar15) == '\0') goto LAB_02b3c4bc;
      if (*(char *)((long)local_218 + lVar15 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_02b3c4bc;
      }
      if (*(char *)((long)local_218 + lVar15 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_02b3c4bc;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_02b3c4bc:
    iVar13 = (int)lVar15;
    if (*(int *)(lVar7 + 0x68) <= (int)lVar15) {
      iVar13 = *(int *)(lVar7 + 0x68) + -1;
    }
    memcpy(puVar19,__src,(long)iVar13);
    puVar19[iVar13] = 0;
  }
  puVar3 = PTR_DAT_04bb27c8;
  if (*(char *)(lVar7 + 0xb0) == '\0') {
    local_218 = (undefined **)(puVar10 + 0x10);
    local_210 = 0;
    local_220 = (undefined **)(puVar11 + 0x10);
    local_200 = 0;
    uVar4 = 1;
    if (uVar20 != 0x32 && uVar20 != 1) {
      uVar4 = 2;
    }
    local_208 = (undefined *)local_218;
    FUN_00947a00(uVar22,*(long *)PTR_DAT_04bb27c8 + 0x28,lVar7 + 0x58,&puStack_1c0,&local_220,uVar4,
                 0);
    if (*(char *)(lVar7 + 0xb0) == '\0') {
      lVar15 = *(long *)puVar3;
      lVar17 = *(long *)(lVar15 + 0x1150);
      plVar14 = (long *)((long)*(int *)(lVar15 + 0x1164) + (long)puVar2);
      *(long **)(lVar15 + 0x1150) = plVar14;
      *plVar14 = lVar17;
      plVar14[1] = lVar15 + 0x1150;
      if (lVar17 != 0) {
        *(long **)(lVar17 + 8) = plVar14;
      }
      *(int *)(lVar15 + 0x1160) = *(int *)(lVar15 + 0x1160) + 1;
    }
    *(undefined1 *)(lVar7 + 0xb0) = 1;
    *(undefined4 *)(lVar7 + 0xb4) = uVar4;
    *(int *)(lVar7 + 0x40) = (int)local_210;
    *(undefined4 *)(lVar7 + 0x44) = local_210._4_4_;
    *(undefined4 *)(lVar7 + 0x50) = (undefined4)local_200;
    *(undefined4 *)(lVar7 + 0x54) = local_200._4_4_;
  }
  if (puVar6[1] != 0) {
    FUN_013620a0(puVar6[1],uVar16);
  }
  return 1;
}

