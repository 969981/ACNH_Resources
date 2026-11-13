
void FUN_01492028(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined4 local_ec;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [2];
  undefined1 auStack_9e [2];
  undefined1 local_9c [2];
  undefined1 auStack_9a [2];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_04bb2720;
  local_90 = 0;
  local_98 = PTR_DAT_04bbfe68 + 0x10;
  lVar17 = *(long *)PTR_DAT_04bb2720;
  if (lVar17 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar7 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_8c = *(undefined4 *)(puVar18 + 7);
  local_88 = FUN_017baf44();
  local_88 = local_88 & 1;
  local_98 = PTR_DAT_04bb3140 + 0x10;
  uVar11 = FUN_014fd6bc(&local_98,param_3[6]);
  if ((uVar11 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_014fd19c(&local_98,param_3 + 2,param_3[6]);
  }
  puVar1 = param_3 + 2;
  uVar9 = FUN_014fe934(&local_98,puVar1,param_3[6]);
  uVar12 = FUN_014feae8(&local_98,puVar1,param_3[6]);
  FUN_014fec20(auStack_9a,&local_98,puVar1,param_3[6]);
  uVar10 = FUN_014ff2b4(&local_98,puVar1,param_3[6]);
  local_9c[0] = *(undefined1 *)(param_3 + 8);
  local_c8 = (undefined *)((ulong)local_c8._4_4_ << 0x20);
  lVar17 = *(long *)puVar3;
  if (lVar17 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar7 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_c8 = (undefined *)CONCAT44(*(undefined4 *)(puVar18 + 7),(undefined4)local_c8);
  uVar6 = FUN_017baf44();
  local_c0 = CONCAT71(local_c0._1_7_,uVar6) & 0xffffffffffffff01;
  local_d0 = PTR_DAT_04bb3140 + 0x10;
  piVar13 = (int *)FUN_014fbd50(&local_d0,param_3[6],puVar1);
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,*piVar13);
  if (*piVar13 != *(int *)PTR_DAT_04bb3238) {
    local_68 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_80,&local_e8,&local_68,0);
    plVar5 = local_80;
    if (local_80 != (long *)0x0) {
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar14 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb5920);
      if ((uVar14 & 1) == 0) {
        local_78._0_2_ = (ushort)(byte)local_78;
      }
    }
    if ((local_78._1_1_ != '\0') && (local_80 != (long *)0x0)) {
      FUN_014719b0(local_80,local_9c);
    }
  }
  if ((uVar11 & 1) != 0) {
    FUN_014fd424(&local_98,uVar8 & 1,puVar1,param_3[6]);
  }
  uVar2 = param_3[6];
  if ((uVar12 & 1) == 0) {
    puVar19 = auStack_a0;
    puVar15 = auStack_a0;
    puVar16 = PTR_DAT_04bb3170;
  }
  else {
    puVar19 = auStack_9e;
    puVar15 = auStack_9e;
    puVar16 = auStack_9a;
  }
  FUN_007ef010(puVar15,puVar16);
  FUN_014fedf8(&local_98,puVar1,uVar2,uVar9,puVar19);
  FUN_014ff470(&local_98,puVar1,param_3[6],uVar10);
  puVar4 = PTR_DAT_04bb43c0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a4 = 0;
  local_e0 = *param_3;
  uStack_dc = param_3[1];
  local_d8 = 0;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = 0;
  local_d0 = *(undefined **)PTR_DAT_04bb37e0;
  puVar16 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = *PTR_DAT_04bb32e0;
  if (7 < local_a8) {
    local_a8 = 0xff;
  }
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  local_e8 = puVar16;
  uVar8 = FUN_0277d6c4(&local_e0);
  if (*(long *)puVar4 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_3);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if (uVar8 < *(uint *)(lVar17 + 0x1d8)) {
        lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar17 != 0) {
          local_d8 = lVar17;
        }
      }
    }
  }
  uVar9 = FUN_01ae98d0(&local_e8);
  local_78 = *param_3;
  local_74 = param_3[1];
  lVar17 = *(long *)puVar4;
  local_70 = 0;
  local_ec = uVar9;
  local_80 = (long *)puVar16;
  uVar8 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar4 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_3);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if (uVar8 < *(uint *)(lVar17 + 0x1d8)) {
        lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar17 != 0) {
          local_70 = lVar17;
        }
      }
    }
  }
  FUN_01afbaa4(&local_68,param_3,&local_ec);
  local_b8 = CONCAT44(local_b8._4_4_,uVar9);
  local_d0 = (undefined *)CONCAT44(uStack_64,local_68);
  local_c0 = *(ulong *)(param_3 + 4);
  uVar9 = FUN_01afb8e8(&local_80);
  local_a4 = 0;
  local_b8 = CONCAT44(uVar9,(undefined4)local_b8);
  uStack_b0 = CONCAT44(param_3[6],param_3[7]);
  FUN_01afbaa4(&local_80,&local_d0,&local_b8);
  local_78 = 0;
  local_68 = (undefined4)local_80;
  uStack_64 = local_80._4_4_;
  lVar17 = *(long *)puVar3;
  if (lVar17 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar7 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar18 + 7);
  uVar6 = FUN_017baf44();
  local_70 = CONCAT71(local_70._1_7_,uVar6) & 0xffffffffffffff01;
  local_80 = (long *)(PTR_DAT_04bb3140 + 0x10);
  uVar11 = FUN_01a50590(&local_80,uStack_b0._4_4_,&local_c8,&local_68);
  if ((uVar11 & 1) != 0) {
    FUN_01afbaa4(&local_68,&local_d0,&local_b8);
    lVar17 = *(long *)puVar3;
    local_78 = 0;
    if (lVar17 == 0) {
      puVar18 = &DAT_055c04a0;
    }
    else {
      puVar18 = &DAT_055c04a0;
      if (*(long *)(lVar17 + 0x330) != 0) {
        puVar18 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar7 = FUN_006bd550(*puVar18,0);
        puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar18 = &DAT_055c04a0;
        }
      }
    }
    local_74 = *(undefined4 *)(puVar18 + 7);
    uVar6 = FUN_017baf44();
    local_70 = CONCAT71(local_70._1_7_,uVar6) & 0xffffffffffffff01;
    local_80 = (long *)(PTR_DAT_04bb3140 + 0x10);
    FUN_01a50970(&local_80,uStack_b0._4_4_,&local_68,&local_c8);
  }
  FUN_01491790(param_1,param_2,&local_d0);
  return;
}

