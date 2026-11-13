
void FUN_01479214(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x2d0) == 0) {
    local_60 = 0;
    local_50 = 0;
    local_80 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_78 = PTR_DAT_04bb2010 + 0x10;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = *(undefined4 *)(param_1 + 0x288);
    local_70 = 0;
    uStack_3c = *(undefined4 *)(param_1 + 0x28c);
    local_38 = 0;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    puStack_68 = puStack_78;
    uVar2 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(param_1 + 0x288);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if (uVar2 < *(uint *)(lVar5 + 0x1d8)) {
          lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8);
          if (lVar5 != 0) {
            local_38 = lVar5;
          }
        }
      }
    }
    FUN_01afb1a0(&local_48,auStack_58);
    iVar4 = (int)local_50;
    iVar3 = local_50._4_4_;
    if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
      iVar3 = (int)local_50;
      iVar4 = local_50._4_4_;
      if ((*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e & 0x80000001) != 1) {
        iVar3 = local_50._4_4_;
        iVar4 = (int)local_50;
      }
    }
    local_70 = *(undefined8 *)(param_1 + 0x2c8);
    local_60 = CONCAT44(iVar3 + *(int *)(param_1 + 0x2cc) + -1,
                        iVar4 + *(int *)(param_1 + 0x2c8) + -1);
    local_48 = (undefined *)CONCAT44(local_48._4_4_,*(undefined4 *)(param_1 + 0x230));
    FUN_014ae800(param_1 + 0x380,&local_80,&local_48);
  }
  return;
}

