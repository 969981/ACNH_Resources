
undefined4 FUN_03b47678(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  undefined4 uStack_4;
  
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    iVar1 = FUN_02a0c760(*(undefined1 *)(*(long *)(param_1 + 0x30) + 0x10));
    local_8 = 0;
    if (iVar1 != -1) {
      local_8 = iVar1;
    }
    iVar1 = FUN_03b471ec(&local_8);
    if (iVar1 == 1) {
      FUN_003e41d0(&local_8,*(undefined8 *)(param_1 + 0x40));
      if (CONCAT44(uStack_4,local_8) != 0) {
        uVar2 = FUN_003e4074(CONCAT44(uStack_4,local_8),1);
        FUN_003e42a0(&local_8);
        return uVar2;
      }
      FUN_003e42a0(&local_8);
    }
    else if (iVar1 == 0) {
      FUN_003e5df0(&local_8,*(undefined8 *)(param_1 + 0x40));
      if (CONCAT44(uStack_4,local_8) != 0) {
        uVar2 = FUN_003e1660(CONCAT44(uStack_4,local_8),1);
        FUN_003e5ec0(&local_8);
        return uVar2;
      }
      FUN_003e5ec0(&local_8);
    }
  }
  return 0xffffffff;
}

