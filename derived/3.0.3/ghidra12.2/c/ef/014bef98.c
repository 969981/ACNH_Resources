
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014bef98(long param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  float local_80;
  int local_7c;
  undefined4 uStack_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined *puStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  local_50 = 0;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar4 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar7 + 7);
  local_48 = FUN_017baf44();
  puVar1 = PTR_DAT_04bb43c0;
  local_48 = local_48 & 1;
  puStack_58 = PTR_DAT_04bb6268 + 0x10;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_60 = 0;
  puVar8 = (undefined4 *)(param_1 + 0xc);
  local_68 = *puVar8;
  uStack_64 = *(undefined4 *)(param_1 + 0x10);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = ((uint)uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(puVar8);
      uVar2 = ((uint)uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if (uVar2 < *(uint *)(lVar6 + 0x1d8)) {
        lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8);
        if (lVar6 != 0) {
          local_60 = lVar6;
        }
      }
    }
  }
  local_88 = *(undefined8 *)(param_1 + 0x14);
  local_90 = PTR_DAT_04bbbc20 + 0x10;
  local_80 = *(float *)(param_1 + 0x1c);
  local_7c = *(int *)(param_1 + 0x20);
  uStack_78 = *(undefined4 *)(param_1 + 0x24);
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,local_7c + 0x20000000U >> 0x1e);
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_98 = 0;
  local_a0 = puVar1;
  if (((DAT_051ebdb0 & 1) == 0) && (uVar5 = __cxa_guard_acquire(&DAT_051ebdb0), (int)uVar5 != 0)) {
    DAT_051ebda0 = PTR_DAT_04bb2e18 + 0x10;
    _DAT_051ebda8 = 0x200000002;
    uVar5 = __cxa_guard_release(&DAT_051ebdb0);
  }
  iVar4 = DAT_051ebda8;
  iVar3 = DAT_051ebdac;
  if (((uint)local_c8 & 0x80000001) != 1) {
    iVar4 = DAT_051ebdac;
    iVar3 = DAT_051ebda8;
  }
  uStack_a8 = 0;
  local_b8 = 0;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  fVar9 = (float)local_88 - ((float)iVar3 * 0.5 * 5.0 + -2.5);
  fVar10 = local_80 - ((float)iVar4 * 0.5 * 5.0 + -2.5);
  local_98 = CONCAT44((int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0),
                      (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0));
  puStack_c0 = puVar1;
  local_b0 = puVar1;
  FUN_014bec54(uVar5,&local_c8,&local_90);
  if (*(int *)(param_1 + 0x24) == 1) {
    FUN_01a50ed0(&puStack_58,puVar8,&local_a0,1);
    *(float *)(param_1 + 0x18) = fVar10;
  }
  if ((*(int *)(param_1 + 8) != 1) && ((param_3 & 1) == 0)) {
    FUN_011e56f0(&local_c8,*(undefined4 *)PTR_DAT_04bb3238);
    FUN_011f3520(&puStack_58,*(undefined4 *)(param_1 + 0x24),&local_a0);
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

