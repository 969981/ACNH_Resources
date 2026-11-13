
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01477794(long param_1,int *param_2,byte *param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  if ((param_5 & 1) != 0) {
    lVar9 = *(long *)(param_1 + 0x70);
    if (lVar9 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(uint *)(lVar9 + 0x280);
    }
    if ((((uVar6 < 9) && ((1 << (ulong)(uVar6 & 0x1f) & 0x160U) != 0)) &&
        (local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000), lVar9 != 0)) &&
       (*(int *)(lVar9 + 0x280) != 0)) {
      FUN_03ebb160(lVar9 + 0x278);
    }
  }
  puVar5 = PTR_DAT_04bb43c0;
  iVar8 = *param_2;
  local_68 = 0;
  local_88 = PTR_DAT_04bb2e18 + 0x10;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_80 = 0;
  local_70 = *(undefined4 *)(param_1 + 0x288);
  uStack_6c = *(undefined4 *)(param_1 + 0x28c);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar5 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1 + 0x288);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
        if (lVar9 != 0) {
          local_68 = lVar9;
        }
      }
    }
  }
  uVar6 = iVar8 + 0x20000000U >> 0x1e;
  FUN_01afb1a0(&local_78,&local_88);
  iVar11 = (int)local_80;
  iVar8 = local_80._4_4_;
  if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
    iVar8 = (int)local_80;
    iVar11 = local_80._4_4_;
    if ((*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e & 0x80000001) != 1) {
      iVar8 = local_80._4_4_;
      iVar11 = (int)local_80;
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c8);
  iVar3 = *(int *)(param_1 + 0x2cc);
  local_78._0_4_ = uVar6;
  if ((DAT_051a5ed0 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(&DAT_051a5ed0);
    if (iVar7 != 0) {
      DAT_051a5e90 = PTR_DAT_04bb2010 + 0x10;
      _DAT_051a5e98 = 0x100000000;
      DAT_051a5eb8 = 0xffffffff00000000;
      DAT_051a5ea8 = 1;
      DAT_051a5ec8 = 0xffffffff;
      DAT_051a5ea0 = DAT_051a5e90;
      DAT_051a5eb0 = DAT_051a5e90;
      DAT_051a5ec0 = DAT_051a5e90;
      __cxa_guard_release(&DAT_051a5ed0);
    }
  }
  uVar6 = (uint)local_78;
  if (3 < (uint)local_78) {
    uVar6 = 0;
  }
  iVar7 = (&DAT_051a5e98)[(long)(int)uVar6 * 4];
  iVar1 = (&DAT_051a5e9c)[(long)(int)uVar6 * 4];
  uVar12 = FUN_01477acc(param_1);
  bVar10 = *param_3;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *(byte *)(param_1 + 0x848) = bVar10;
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_4 + 0x14);
  *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_4 + 0x20);
  uVar4 = *(undefined4 *)(param_4 + 0x24);
  *(float *)(param_1 + 0x8c0) =
       ((float)(iVar7 + iVar2) * 5.0 + (float)(iVar11 + iVar2 + -1 + iVar7) * 5.0 + 5.0) * 0.5;
  *(undefined4 *)(param_1 + 0x8c4) = uVar12;
  *(float *)(param_1 + 0x8c8) =
       ((float)(iVar1 + iVar3) * 5.0 + (float)(iVar8 + iVar3 + -1 + iVar1) * 5.0 + 5.0) * 0.5;
  *(undefined4 *)(param_1 + 0x874) = uVar4;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,5);
  lVar9 = *(long *)(param_1 + 0x70);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x280) != 5)) {
    FUN_03ebb160(lVar9 + 0x278);
  }
  return;
}

