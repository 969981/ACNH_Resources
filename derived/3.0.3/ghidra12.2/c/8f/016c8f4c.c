
void FUN_016c8f4c(long *param_1)

{
  void *__s;
  ulong uVar1;
  undefined4 local_44;
  undefined **local_40;
  undefined4 *puStack_38;
  
  if (param_1 != (long *)0x0) {
    __s = (void *)(**(code **)(*param_1 + 0x18))();
    memset(__s,0,0x754);
    local_44 = 0x137;
    uVar1 = FUN_016c905c(0x137);
    if ((uVar1 & 1) != 0) {
      puStack_38 = &local_44;
      local_40 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(param_1,&local_40);
    }
    local_44 = 0x138;
    uVar1 = FUN_016c905c(0x138);
    if ((uVar1 & 1) != 0) {
      puStack_38 = &local_44;
      local_40 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(param_1,&local_40);
    }
    local_44 = 0x139;
    uVar1 = FUN_016c905c(0x139);
    if ((uVar1 & 1) != 0) {
      puStack_38 = &local_44;
      local_40 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(param_1,&local_40);
    }
    local_44 = 0x13a;
    uVar1 = FUN_016c905c(0x13a);
    if ((uVar1 & 1) != 0) {
      puStack_38 = &local_44;
      local_40 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(param_1,&local_40);
    }
    local_44 = 0x13b;
    uVar1 = FUN_016c905c(0x13b);
    if ((uVar1 & 1) != 0) {
      puStack_38 = &local_44;
      local_40 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(param_1,&local_40);
    }
  }
  return;
}

