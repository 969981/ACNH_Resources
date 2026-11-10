
undefined4 FUN_001793d0(long *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00143330(1,0x18);
  *(undefined8 *)(*param_1 + 0x1e8) = uVar1;
  uVar2 = 0x1b;
  if (*(long *)(*param_1 + 0x1e8) != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

