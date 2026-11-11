
undefined8 FUN_004a2520(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x10))(param_2 - (ulong)*(ushort *)(param_1 + 0x18),*param_4);
  uVar1 = 0;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0x80040200;
  }
  return uVar1;
}

