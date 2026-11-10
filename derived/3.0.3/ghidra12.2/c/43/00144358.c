
undefined8 FUN_00144358(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x1178) != 0) {
    return 0;
  }
  lVar1 = FUN_00143330(param_2,200);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0xc18) = param_2;
    *(long *)(param_1 + 0x1178) = lVar1;
    *(undefined8 *)(param_1 + 0x1180) = 1;
  }
  return uVar2;
}

