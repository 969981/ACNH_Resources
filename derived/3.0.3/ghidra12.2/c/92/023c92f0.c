
/* WARNING: Removing unreachable block (ram,0x023c98d4) */
/* WARNING: Removing unreachable block (ram,0x023c9404) */
/* WARNING: Removing unreachable block (ram,0x023c9704) */
/* WARNING: Removing unreachable block (ram,0x023c9eec) */

void FUN_023c92f0(long param_1,int *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined2 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  long *plVar20;
  void *__dest;
  undefined4 uVar21;
  void *__src;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  undefined4 local_f4;
  int iStack_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + 0x17d6) & 0xc) == 0) {
    return;
  }
  plVar20 = *(long **)(param_1 + 0x60);
  if (plVar20 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      plVar20 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar20 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar20 + 0x370))(auStack_68,plVar20);
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  puVar15 = (undefined4 *)FUN_02547c90(pbVar1);
  local_78 = *puVar15;
  local_74 = puVar15[1];
  FUN_0251a33c(pbVar1,0);
  local_80 = 5;
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,5);
  bVar5 = *(byte *)(param_1 + 0x18fa);
  uVar12 = FUN_02538bb0(pbVar1);
  bVar3 = (bVar5 >> 5 & 1) == 0;
  if (bVar3) {
    FUN_0252d8f0(&local_80,pbVar1);
    uVar17 = (undefined2)local_80;
    uVar18 = local_80._2_1_;
    uVar19 = local_80._3_1_;
  }
  else {
    local_80 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_7c = *(int *)(PTR_DAT_04bb37e0 + 4);
    uVar17 = *(undefined2 *)PTR_DAT_04bb37e0;
    uVar18 = PTR_DAT_04bb37e0[2];
    uVar19 = PTR_DAT_04bb37e0[3];
  }
  local_88 = CONCAT13(uVar19,CONCAT12(uVar18,uVar17));
  local_84 = local_7c;
  if (*(long *)(param_1 + 0x298) == 0) {
    local_90 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_8c = *(int *)(PTR_DAT_04bb37e0 + 4);
  }
  else {
    FUN_0233a884(&local_90,*(long *)(param_1 + 0x298),uVar12 & 1);
  }
  puVar7 = PTR_DAT_04bb43c0;
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar13 = FUN_0277d6c4(&local_90);
  lVar23 = *(long *)puVar7;
  if (lVar23 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      local_80 = local_90;
      local_7c = local_8c;
    }
  }
  local_88 = local_80;
  local_84 = local_7c;
  if (*param_2 != 0) {
    local_95 = 0;
    local_d8 = 0x40;
    local_e0 = local_d4;
    local_d4[0] = 0;
    local_e8 = PTR_DAT_04bb2bc0 + 0x10;
    uVar16 = FUN_02537880(&local_e8,param_2);
    if (((uVar16 & 1) != 0) && (local_ec = FUN_0170aef0(&local_e8,PTR_PTR_04bb2238), local_ec != 0))
    {
      FUN_0170afcc(&local_f4,&local_e8,PTR_PTR_04bb2238);
      local_80 = local_f4;
      local_7c = iStack_f0;
      if (local_ec == 0x1c) {
        FUN_0244b5a8(&local_f4,pbVar1);
        local_80 = local_f4;
        local_7c = iStack_f0;
      }
    }
    lVar23 = *(long *)puVar7;
  }
  uVar13 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar7 == 0) {
LAB_023c9620:
    bVar6 = false;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if (((*(uint *)(lVar23 + 0x1d8) <= uVar13) ||
        (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) ||
       (uVar16 = FUN_0277d7b4(&local_78,&local_80), (uVar16 & 1) == 0)) goto LAB_023c9620;
    if ((local_78._3_1_ != local_80._3_1_) || (local_74 != local_7c)) goto LAB_023c9620;
    if ((*(long *)PTR_DAT_04bb4718 != 0) && ((ulong)*pbVar1 < 8)) {
      lVar23 = *(long *)PTR_DAT_04bb4718 + (ulong)*pbVar1 * 0xc;
      *(char *)(lVar23 + 0x287) = local_78._3_1_;
      *(undefined2 *)(lVar23 + 0x284) = (undefined2)local_78;
      *(undefined1 *)(lVar23 + 0x286) = local_78._2_1_;
      *(int *)(lVar23 + 0x288) = local_74;
      *(undefined2 *)(lVar23 + 0x28c) = 0x100;
    }
    bVar6 = true;
  }
  lVar23 = *(long *)puVar7;
  uVar13 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar7 == 0) {
    puVar22 = *(undefined8 **)(param_1 + 0x60);
joined_r0x023c968c:
    bVar11 = false;
    uVar21 = 6;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if (*(uint *)(lVar23 + 0x1d8) <= uVar13) {
      puVar22 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x023c968c;
    }
    bVar11 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) != 0;
    uVar21 = 0;
    if (!bVar11) {
      uVar21 = 6;
    }
    puVar22 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar22 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar22 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar22 = &DAT_05240280;
    }
  }
  lVar23 = puVar22[0x227];
  if (lVar23 == 0) {
    local_e8._0_4_ = 0;
    plVar20 = &DAT_04c931a0;
    puVar22 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    local_e8._0_4_ = *(uint *)(puVar22 + 0x2d3) >> 1 & 1;
    uVar13 = 0;
    if (*(long *)(lVar23 + 0x78) != 0) {
      uVar13 = *(uint *)(*(long *)(lVar23 + 0x78) + 0x18);
    }
    uVar4 = (uint)local_e8;
    if (uVar13 <= (uint)local_e8) {
      uVar4 = 0;
    }
    if (*(uint *)(lVar23 + 0x80) <= uVar4) {
      uVar4 = 0;
    }
    plVar20 = (long *)(*(long *)(lVar23 + 0x88) + (long)(int)uVar4 * 0xe8 + 0x60);
    puVar22 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar22 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar22 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar22 = &DAT_05240280;
    }
  }
  local_e8._0_4_ = 2;
  uVar8 = (uint)local_e8;
  local_e8._0_4_ = 2;
  lVar23 = puVar22[0x227];
  if (lVar23 == 0) {
    plVar24 = &DAT_04c931a0;
  }
  else {
    uVar13 = 0;
    if (*(long *)(lVar23 + 0x78) != 0) {
      uVar13 = *(uint *)(*(long *)(lVar23 + 0x78) + 0x18);
    }
    if (uVar13 < 3) {
      local_e8._0_4_ = 0;
    }
    if (*(uint *)(lVar23 + 0x80) <= (uint)local_e8) {
      local_e8._0_4_ = 0;
    }
    plVar24 = (long *)(*(long *)(lVar23 + 0x88) + (long)(int)(uint)local_e8 * 0xe8 + 0x60);
  }
  local_e8._0_4_ = uVar8;
  (**(code **)(*plVar20 + 0x18))(plVar20);
  (**(code **)(*plVar20 + 0x18))(plVar20);
  lVar23 = plVar20[1];
  (**(code **)(*plVar24 + 0x18))(plVar24);
  if (lVar23 == plVar24[1]) {
LAB_023c9830:
    puVar22 = *(undefined8 **)(param_1 + 0x60);
    if (puVar22 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_052461c0);
        puVar22 = &DAT_05240280;
        if (iVar14 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar22 = &DAT_05240280;
      }
    }
    FUN_01702b70(puVar22,uVar21,2);
  }
  else {
    uVar16 = 0;
    bVar10 = true;
    do {
      if (*(char *)(plVar20[1] + uVar16) != *(char *)(plVar24[1] + uVar16)) break;
      if (*(char *)(plVar20[1] + uVar16) == '\0') {
        if (bVar10) goto LAB_023c9830;
        break;
      }
      bVar10 = uVar16 < 0x80000;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x80001);
  }
  puVar22 = *(undefined8 **)(param_1 + 0x60);
  if (puVar22 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar22 = &DAT_05240280;
      lVar23 = DAT_052413b8;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        lVar23 = DAT_052413b8;
      }
      goto joined_r0x023ca110;
    }
    puVar22 = &DAT_05240280;
    lVar23 = DAT_052413b8;
    if (DAT_052413b8 != 0) goto LAB_023c9874;
LAB_023c98b8:
    local_e8._0_4_ = 0;
    plVar20 = &DAT_04c931a0;
    puVar22 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    lVar23 = puVar22[0x227];
joined_r0x023ca110:
    if (lVar23 == 0) goto LAB_023c98b8;
LAB_023c9874:
    local_e8._0_4_ = *(uint *)(puVar22 + 0x2d3) >> 1 & 1;
    uVar13 = 0;
    if (*(long *)(lVar23 + 0x78) != 0) {
      uVar13 = *(uint *)(*(long *)(lVar23 + 0x78) + 0x18);
    }
    uVar4 = (uint)local_e8;
    if (uVar13 <= (uint)local_e8) {
      uVar4 = 0;
    }
    if (*(uint *)(lVar23 + 0x80) <= uVar4) {
      uVar4 = 0;
    }
    plVar20 = (long *)(*(long *)(lVar23 + 0x88) + (long)(int)uVar4 * 0xe8 + 0x60);
    puVar22 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar22 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      puVar22 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar22 = &DAT_05240280;
    }
  }
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,3);
  uVar9 = local_e8;
  local_e8._0_4_ = 3;
  lVar23 = puVar22[0x227];
  if (lVar23 == 0) {
    plVar24 = &DAT_04c931a0;
  }
  else {
    uVar13 = 0;
    if (*(long *)(lVar23 + 0x78) != 0) {
      uVar13 = *(uint *)(*(long *)(lVar23 + 0x78) + 0x18);
    }
    if (uVar13 < 4) {
      local_e8._0_4_ = 0;
    }
    if (*(uint *)(lVar23 + 0x80) <= (uint)local_e8) {
      local_e8._0_4_ = 0;
    }
    plVar24 = (long *)(*(long *)(lVar23 + 0x88) + (long)(int)(uint)local_e8 * 0xe8 + 0x60);
  }
  local_e8 = (undefined *)uVar9;
  (**(code **)(*plVar20 + 0x18))(plVar20);
  (**(code **)(*plVar20 + 0x18))(plVar20);
  lVar23 = plVar20[1];
  (**(code **)(*plVar24 + 0x18))(plVar24);
  if (lVar23 == plVar24[1]) {
LAB_023c99f4:
    puVar22 = *(undefined8 **)(param_1 + 0x60);
    if (puVar22 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_052461c0);
        puVar22 = &DAT_05240280;
        if (iVar14 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar22 = &DAT_05240280;
      }
    }
    FUN_01702b70(puVar22,uVar21,3);
  }
  else {
    uVar16 = 0;
    bVar10 = true;
    do {
      if (*(char *)(plVar20[1] + uVar16) != *(char *)(plVar24[1] + uVar16)) break;
      if (*(char *)(plVar20[1] + uVar16) == '\0') {
        if (bVar10) goto LAB_023c99f4;
        break;
      }
      bVar10 = uVar16 < 0x80000;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x80001);
  }
  if (bVar11) {
    puVar22 = *(undefined8 **)(param_1 + 0x60);
    if (puVar22 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_052461c0);
        puVar22 = &DAT_05240280;
        if (iVar14 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar22 = &DAT_05240280;
      }
    }
    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0xc);
    *(uint *)((long)puVar22 + 0x15f4) = *(uint *)((long)puVar22 + 0x15f4) | 0x1000;
  }
  uVar16 = FUN_0277d7b4(&local_88,&local_80);
  if ((uVar16 & 1) == 0) goto LAB_023c9bcc;
  if ((local_88._3_1_ != local_80._3_1_) || (local_84 != local_7c)) goto LAB_023c9bcc;
  lVar23 = *(long *)puVar7;
  uVar13 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar7 == 0) {
LAB_023c9af0:
    FUN_02472404(0,param_1);
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((*(uint *)(lVar23 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_023c9af0;
  }
  plVar20 = *(long **)(param_1 + 0x60);
  uVar16 = (ulong)local_e0 >> 0x30;
  local_e8 = (undefined *)CONCAT35((int3)((ulong)local_e8 >> 0x28),0x100000000);
  local_e0 = (undefined1 *)CONCAT26((ushort)uVar16 & 0xff00,0x100000006);
  if (plVar20 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      plVar20 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar20 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar20 + 600))(&local_90,plVar20,uVar12 & 1);
  plVar20 = *(long **)(param_1 + 0x60);
  if (plVar20 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      plVar20 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar20 = &DAT_05240280;
    }
  }
  lVar23 = (**(code **)(*plVar20 + 0x238))(plVar20);
  *(undefined4 *)(lVar23 + 0xcc) = local_90;
  *(int *)(lVar23 + 0xd0) = local_8c;
  FUN_02321e44(&local_90,param_1,&local_e8);
  local_80 = local_90;
  local_7c = local_8c;
  local_88 = local_90;
  local_84 = local_8c;
LAB_023c9bcc:
  plVar20 = *(long **)(param_1 + 0x60);
  if (plVar20 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      plVar20 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar20 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar20 + 0x370))(&local_e8,plVar20);
  lVar23 = *(long *)puVar7;
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfff7ffff;
  uVar12 = FUN_0277d6c4(&local_e8);
  bVar11 = false;
  if (*(long *)puVar7 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
      bVar11 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0;
    }
    else {
      bVar11 = false;
    }
  }
  uVar21 = 0x3f800000;
  if (!bVar6) {
    uVar21 = 0;
  }
  if (bVar3 && bVar11) {
    uVar21 = 0x3f800000;
  }
  FUN_024726d8(uVar21,param_1);
  plVar20 = *(long **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffbffff;
  if (plVar20 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      plVar20 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar20 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar20 + 0x378))(&local_e8,plVar20);
  lVar23 = *(long *)puVar7;
  uVar12 = FUN_0277d6c4(&local_e8);
  bVar11 = false;
  if (*(long *)puVar7 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
      bVar11 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0;
    }
    else {
      bVar11 = false;
    }
  }
  plVar20 = *(long **)(param_1 + 0x60);
  fVar27 = 1.0;
  if (!bVar6 && !(bool)(bVar11 & bVar3)) {
    fVar27 = 0.0;
  }
  if (plVar20 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      plVar20 = &DAT_05240280;
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar20 = &DAT_05240280;
    }
  }
  fVar26 = 0.001;
  if (0.001 <= fVar27) {
    fVar26 = fVar27;
  }
  *(float *)(plVar20 + 0x2c2) = fVar26;
  (**(code **)(*plVar20 + 0x4e0))((int)plVar20[0x2c1],plVar20);
  lVar25 = *(long *)puVar7;
  uVar12 = FUN_0277d6c4(&local_80);
  lVar23 = *(long *)puVar7;
  if (lVar23 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if (((uVar12 < *(uint *)(lVar25 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
       (uVar12 = FUN_0277d6c4(auStack_68), *(long *)puVar7 != 0)) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
        if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) == 0) {
          bVar6 = true;
        }
        if (!bVar6) {
          if (*(long *)(param_1 + 0x298) != 0) {
            puVar2 = (uint *)(*(long *)(param_1 + 0x298) + 0xc1f4);
            *puVar2 = *puVar2 & 0xfffffbff;
            local_90 = 0xb;
            local_e8 = (undefined *)CONCAT44((int)((ulong)local_e8 >> 0x20),0xb);
            *puVar2 = *puVar2 & 0xfffff7ff;
          }
          *(undefined4 *)(param_1 + 0x21d4) = 0;
          puVar22 = *(undefined8 **)(param_1 + 0x60);
          *(undefined4 *)(param_1 + 0x21cc) = local_80;
          *(int *)(param_1 + 0x21d0) = local_7c;
          if (puVar22 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar14 = __cxa_guard_acquire(&DAT_052461c0);
              puVar22 = &DAT_05240280;
              if (iVar14 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar22 = &DAT_05240280;
            }
          }
          lVar23 = puVar22[0x227];
          if (lVar23 == 0) {
            local_e8 = (undefined *)((ulong)local_e8._4_4_ << 0x20);
            plVar20 = &DAT_04c931a0;
          }
          else {
            uVar12 = *(uint *)(puVar22 + 0x2d3) >> 1 & 1;
            local_e8 = (undefined *)
                       (CONCAT44(local_e8._4_4_,*(uint *)(puVar22 + 0x2d3) >> 1) &
                       0xffffffff00000001);
            uVar13 = 0;
            if (*(long *)(lVar23 + 0x78) != 0) {
              uVar13 = *(uint *)(*(long *)(lVar23 + 0x78) + 0x18);
            }
            if (uVar13 <= uVar12) {
              uVar12 = 0;
            }
            if (*(uint *)(lVar23 + 0x80) <= uVar12) {
              uVar12 = 0;
            }
            plVar20 = (long *)(*(long *)(lVar23 + 0x88) + (long)(int)uVar12 * 0xe8 + 0x60);
          }
          __dest = *(void **)(param_1 + 0x21e0);
          (**(code **)(*plVar20 + 0x18))(plVar20);
          __src = (void *)plVar20[1];
          if (__dest != __src) {
            (**(code **)(*plVar20 + 0x18))(plVar20);
            lVar23 = 0;
            do {
              if (*(char *)(plVar20[1] + lVar23) == '\0') goto LAB_023c9f9c;
              lVar25 = plVar20[1] + lVar23;
              if (*(char *)(lVar25 + 1) == '\0') {
                lVar23 = lVar23 + 1;
                goto LAB_023c9f9c;
              }
              if (*(char *)(lVar25 + 2) == '\0') {
                lVar23 = lVar23 + 2;
                goto LAB_023c9f9c;
              }
              lVar23 = lVar23 + 3;
            } while (lVar23 != 0x80001);
            lVar23 = 0;
LAB_023c9f9c:
            iVar14 = (int)lVar23;
            if (*(int *)(param_1 + 0x21e8) <= (int)lVar23) {
              iVar14 = *(int *)(param_1 + 0x21e8) + -1;
            }
            memcpy(__dest,__src,(long)iVar14);
            *(undefined1 *)((long)__dest + (long)iVar14) = 0;
          }
        }
      }
    }
  }
  return;
}

