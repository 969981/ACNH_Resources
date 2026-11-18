
void FUN_03389788(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar2 = *param_1;
  *(long *)(lVar2 + 8) = param_1[8];
  *(long *)(*(long *)puVar1 + 0x6d8) = lVar2;
  if (DAT_05ae63b8 != 0) {
    FUN_0386d810(DAT_05ae63b8,*(undefined8 *)(lVar2 + 8));
  }
  FUN_0386b090(param_2,param_1[0xd]);
  FUN_0386b090(param_2,param_1[0x16]);
  FUN_0386b090(param_2,param_1[0x1a]);
  FUN_0386b090(param_2,param_1[0xf]);
  FUN_0386b090(param_2,param_1[0x15]);
  FUN_0386b090(param_2,param_1[0x18]);
  return;
}

