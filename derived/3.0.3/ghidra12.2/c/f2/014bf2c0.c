
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014bf2c0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined *local_60;
  int local_58;
  int local_54;
  
  local_80 = 0;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar4 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar9 + 7);
  uVar6 = FUN_017baf44();
  puVar3 = PTR_DAT_04bb2010;
  local_78 = (byte)uVar6 & 1;
  local_88 = PTR_DAT_04bb6268 + 0x10;
  uVar1 = *(int *)(param_2 + 0x14) + 0x20000000U >> 0x1e;
  puVar8 = PTR_DAT_04bb2010 + 0x10;
  local_90 = 0;
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar1);
  local_98 = puVar8;
  if (((DAT_051ebdb0 & 1) == 0) && (uVar6 = __cxa_guard_acquire(&DAT_051ebdb0), (int)uVar6 != 0)) {
    DAT_051ebda0 = PTR_DAT_04bb2e18 + 0x10;
    _DAT_051ebda8 = 0x200000002;
    uVar6 = __cxa_guard_release(&DAT_051ebdb0);
  }
  local_a0 = 0;
  iVar4 = DAT_051ebda8;
  iVar2 = DAT_051ebdac;
  if (((uint)local_c0 & 0x80000001) != 1) {
    iVar4 = DAT_051ebdac;
    iVar2 = DAT_051ebda8;
  }
  local_b0 = 0;
  local_c0 = PTR_DAT_04bbc1a0 + 0x10;
  fVar10 = *(float *)(param_2 + 8) - ((float)iVar2 * 0.5 * 5.0 + -2.5);
  fVar11 = *(float *)(param_2 + 0x10) - ((float)iVar4 * 0.5 * 5.0 + -2.5);
  local_90 = CONCAT44((int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0),
                      (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0));
  puStack_b8 = puVar8;
  puStack_a8 = puVar8;
  FUN_014bec54(uVar6,&local_c0,param_2);
  if (*(int *)(param_1 + 0x24) == 1) {
    FUN_01a50ed0(&local_88,param_1 + 0xc,&local_98,1);
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) goto LAB_014bf4d0;
    local_70 = &puStack_b8;
    local_68 = &puStack_a8;
    local_60 = puVar3 + 0x10;
    iVar4 = local_a0._4_4_ + 1;
    iVar2 = (int)local_b0;
    local_58 = (int)local_b0;
    local_54 = local_b0._4_4_;
    if (iVar4 == local_b0._4_4_) {
      fVar11 = -500.0;
    }
    else {
      fVar11 = -500.0;
      do {
        fVar10 = (float)FUN_013866c0(&local_60,0);
        if (fVar10 <= fVar11) {
          fVar10 = fVar11;
        }
        fVar11 = fVar10;
        if (local_58 < *(int *)(local_68 + 1)) {
          local_58 = local_58 + 1;
        }
        else {
          local_54 = local_54 + 1;
          local_58 = *(int *)(local_70 + 1);
        }
      } while (iVar2 != local_58 || iVar4 != local_54);
    }
  }
  *(float *)(param_1 + 0x18) = fVar11;
LAB_014bf4d0:
  puVar8 = PTR_DAT_04bb43c0;
  local_60 = (undefined *)0x0;
  local_70 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_68 = *(undefined ***)(param_1 + 0xc);
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1 + 0xc);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar5 < *(uint *)(lVar7 + 0x1d8)) {
        puVar8 = *(undefined **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8);
        if (puVar8 != (undefined *)0x0) {
          local_60 = puVar8;
        }
      }
    }
  }
  FUN_01afa2dc(&local_70,uVar1);
  if (*(int *)(param_1 + 8) != 3) {
    local_c8 = (undefined4)local_68;
    uStack_c4 = local_68._4_4_;
    FUN_011f3880(&local_88,*(undefined4 *)(param_2 + 0x18),&local_c8,&local_98);
  }
  FUN_011e58c0(&local_c0,*(undefined4 *)PTR_DAT_04bb3238);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

