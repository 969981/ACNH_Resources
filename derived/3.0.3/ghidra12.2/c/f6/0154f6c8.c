
void FUN_0154f6c8(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_70 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  puVar7 = (undefined4 *)(param_1 + 8);
  local_78 = *puVar7;
  uStack_74 = *(undefined4 *)(param_1 + 0xc);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_80 = puVar1;
  uVar4 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(puVar7);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
        local_70 = lVar8;
      }
    }
  }
  local_88 = 0;
  FUN_01afb1a0(&local_80,auStack_90);
  local_60 = *(undefined4 *)(param_1 + 8);
  uStack_5c = *(undefined4 *)(param_1 + 0xc);
  lVar8 = *(long *)puVar3;
  local_58 = 0;
  local_68 = puVar1;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(puVar7);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
        local_58 = lVar8;
      }
    }
  }
  uVar5 = FUN_01ae5f4c(&local_68);
  if ((uVar5 & 1) == 0) {
    uVar4 = FUN_01ae98d0(&local_68);
  }
  else {
    uVar4 = FUN_01afa5ec(&local_68);
  }
  iVar6 = local_88._4_4_;
  if ((param_3 & 1) == 0) {
    iVar6 = (int)local_88;
    iVar2 = local_88._4_4_;
    if ((uVar4 & 0x80000001) != 1) {
      iVar6 = local_88._4_4_;
      iVar2 = (int)local_88;
    }
    local_88._0_4_ = iVar2;
  }
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x1c);
  *(int *)(param_2 + 0x20) = (int)local_88 + *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_2 + 0x24) = iVar6 + iVar2 + -1;
  return;
}

