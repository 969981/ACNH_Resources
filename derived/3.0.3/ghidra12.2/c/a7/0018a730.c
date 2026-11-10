
void FUN_0018a730(undefined4 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  param_1[0x272] = 0x9908b0df;
  uVar2 = 1;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x270) = 1;
  do {
    param_1[uVar2] = param_1[(int)uVar2 - 1] * 0x10dcd;
    uVar1 = param_1[0x270] + 1;
    uVar2 = (ulong)uVar1;
    param_1[0x270] = uVar1;
  } while (uVar1 < 0x270);
  return;
}

