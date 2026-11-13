
void FUN_01470a84(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_50 = 0;
  uStack_3c = *(undefined4 *)(param_1 + 0x28c);
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *(undefined4 *)(param_1 + 0x288);
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1 + 0x288);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
        local_38 = lVar5;
      }
    }
  }
  FUN_01afb1a0(&local_48,auStack_58);
  iVar4 = local_50._4_4_;
  if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
    iVar4 = (int)local_50;
    iVar1 = local_50._4_4_;
    if ((*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e & 0x80000001) != 1) {
      iVar4 = local_50._4_4_;
      iVar1 = (int)local_50;
    }
    local_50._0_4_ = iVar1;
  }
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x2cc);
  iVar1 = *(int *)(param_1 + 0x2cc);
  *(int *)(param_2 + 0x20) = (int)local_50 + *(int *)(param_1 + 0x2c8) + -1;
  *(int *)(param_2 + 0x24) = iVar4 + iVar1 + -1;
  return;
}

