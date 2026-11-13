
void FUN_01477544(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  uint local_64;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_80 = (undefined *)0x0;
  local_a0 = 0;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = *(undefined **)(param_1 + 0x288);
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 0x288);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar7 != 0) {
          local_a0 = lVar7;
        }
      }
    }
  }
  FUN_01afb1a0(&local_b0,&local_88);
  local_64 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
  iVar6 = (int)local_80;
  iVar5 = local_80._4_4_;
  if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
    iVar5 = (int)local_80;
    iVar6 = local_80._4_4_;
    if ((local_64 & 0x80000001) != 1) {
      iVar5 = local_80._4_4_;
      iVar6 = (int)local_80;
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c8);
  iVar3 = *(int *)(param_1 + 0x2cc);
  local_b0 = (undefined *)0xfffe;
  iVar6 = iVar6 + iVar2 + -1;
  iVar5 = iVar5 + iVar3 + -1;
  FUN_0277d4ac(&local_b0);
  local_88 = PTR_DAT_04bbd460 + 0x10;
  local_80 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_80);
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_80 = local_b0;
  uStack_70 = 0;
  local_78 = puVar1;
  (**(code **)(**(long **)(param_1 + 0xa90) + 0x110))
            (*(long **)(param_1 + 0xa90),&local_88,PTR_DAT_04bb2150,param_3,param_4);
  local_a0 = 0;
  local_90 = 0;
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  local_a8 = puVar1;
  local_98 = puVar1;
  FUN_0154f6c8(&local_88,&local_b0,0);
  if ((int)local_a0 <= iVar2) {
    iVar2 = (int)local_a0;
  }
  if (local_a0._4_4_ <= iVar3) {
    iVar3 = local_a0._4_4_;
  }
  if (iVar6 <= (int)local_a0) {
    iVar6 = (int)local_a0;
  }
  if (iVar5 <= local_a0._4_4_) {
    iVar5 = local_a0._4_4_;
  }
  if ((int)local_90 <= iVar2) {
    iVar2 = (int)local_90;
  }
  if (local_90._4_4_ <= iVar3) {
    iVar3 = local_90._4_4_;
  }
  if (iVar6 <= (int)local_90) {
    iVar6 = (int)local_90;
  }
  *(int *)(param_2 + 0x10) = iVar2;
  *(int *)(param_2 + 0x14) = iVar3;
  if (iVar5 <= local_90._4_4_) {
    iVar5 = local_90._4_4_;
  }
  *(int *)(param_2 + 0x20) = iVar6;
  *(int *)(param_2 + 0x24) = iVar5;
  return;
}

