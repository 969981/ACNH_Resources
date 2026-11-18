
uint FUN_036e766c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1a70);
  if ((uVar1 & 1) != 0) {
    FUN_0376b510(param_2,*(undefined2 *)(param_1 + 0x1a88));
    FUN_0376b510(param_3,*(undefined2 *)(param_1 + 0x1a8a));
  }
  return uVar1 & 1;
}

