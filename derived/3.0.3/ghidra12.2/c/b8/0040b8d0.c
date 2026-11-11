
long * FUN_0040b8d0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 uStack_28;
  
  if (param_1 != (long *)0x0) {
    local_40[0] = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_30 = local_40;
    uStack_28 = 0x10;
    local_48 = puVar1;
    FUN_0018b070(&local_48,"BinaryMessage",0xffffffffffffffff);
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_48);
    local_48 = puVar1;
    FUN_0018b1a0(&local_48);
    if ((uVar2 & 1) == 0) {
      param_1 = (long *)0x0;
    }
  }
  return param_1;
}

