
uint FUN_0124dc64(long param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),4);
  if (((uVar1 & 1) != 0) && ((param_2 & 1) == 0)) {
    uVar1 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),0);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

