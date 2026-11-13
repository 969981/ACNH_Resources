
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01477e18(long param_1,int *param_2,byte *param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  if ((param_5 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x70);
    if (lVar8 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(uint *)(lVar8 + 0x280);
    }
    if ((((uVar6 < 9) && ((1 << (ulong)(uVar6 & 0x1f) & 0x160U) != 0)) &&
        (local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000), lVar8 != 0)) &&
       (*(int *)(lVar8 + 0x280) != 0)) {
      FUN_03ebb160(lVar8 + 0x278);
    }
  }
  puVar5 = PTR_DAT_04bb43c0;
  iVar10 = *param_2;
  local_58 = 0;
  local_78 = PTR_DAT_04bb2e18 + 0x10;
  local_60 = *(undefined4 *)(param_1 + 0x288);
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_70 = 0;
  uStack_5c = *(undefined4 *)(param_1 + 0x28c);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar5 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1 + 0x288);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar6 < *(uint *)(lVar8 + 0x1d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8);
        if (lVar8 != 0) {
          local_58 = lVar8;
        }
      }
    }
  }
  uVar6 = iVar10 + 0xa0000000U >> 0x1e;
  FUN_01afb1a0(&local_68,&local_78);
  iVar11 = (int)local_70;
  iVar10 = local_70._4_4_;
  if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
    iVar10 = (int)local_70;
    iVar11 = local_70._4_4_;
    if ((*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e & 0x80000001) != 1) {
      iVar10 = local_70._4_4_;
      iVar11 = (int)local_70;
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c8);
  iVar3 = *(int *)(param_1 + 0x2cc);
  local_68._0_4_ = uVar6;
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
  uVar6 = (uint)local_68;
  if (3 < (uint)local_68) {
    uVar6 = 0;
  }
  iVar7 = (&DAT_051a5e98)[(long)(int)uVar6 * 4];
  iVar1 = (&DAT_051a5e9c)[(long)(int)uVar6 * 4];
  uVar12 = FUN_01477acc(param_1);
  bVar9 = *param_3;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(param_1 + 0x848) = bVar9;
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_4 + 0x14);
  *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_4 + 0x20);
  uVar4 = *(undefined4 *)(param_4 + 0x24);
  *(float *)(param_1 + 0x8c0) =
       ((float)(iVar7 + iVar2) * 5.0 + (float)(iVar11 + iVar2 + -1 + iVar7) * 5.0 + 5.0) * 0.5;
  *(undefined4 *)(param_1 + 0x8c4) = uVar12;
  *(float *)(param_1 + 0x8c8) =
       ((float)(iVar1 + iVar3) * 5.0 + (float)(iVar10 + iVar3 + -1 + iVar1) * 5.0 + 5.0) * 0.5;
  *(undefined4 *)(param_1 + 0x874) = uVar4;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
  lVar8 = *(long *)(param_1 + 0x70);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x280) != 6)) {
    FUN_03ebb160(lVar8 + 0x278);
  }
  return;
}

