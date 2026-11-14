
undefined8 FUN_01dbf570(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 8) == 0) ||
     (uVar1 = FUN_01d9a760(*(long *)(param_1 + 8),param_2,param_3,0), (uVar1 & 1) == 0)) {
    uVar2 = 0;
    if (param_3 != 0) {
      *(undefined8 *)(param_3 + 8) = 0x32ffffffff;
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

