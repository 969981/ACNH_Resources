
undefined4 FUN_0038ad68(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x150) + 4);
  }
  else {
    uVar1 = 0;
    if (param_2 == 0) {
      return **(undefined4 **)(param_1 + 0x150);
    }
  }
  return uVar1;
}

