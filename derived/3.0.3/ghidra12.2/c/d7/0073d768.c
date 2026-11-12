
undefined8 FUN_0073d768(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x1138) != 0) {
    uVar1 = FUN_03850368();
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_0384fca4(*(undefined8 *)(param_1 + 0x1138),param_2);
      return uVar2;
    }
  }
  return 1;
}

