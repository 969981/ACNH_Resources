
undefined8 FUN_01f9bbe8(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((*(ushort *)(param_1 + 0x15a5) >> 0xc & 1) == 0) &&
      ((*(ushort *)((long)param_1 + 0xad2a) >> 0xc & 1) == 0)) &&
     (uVar1 = (**(code **)(*param_1 + 0x540))(), (uVar1 & 1) != 0)) {
    FUN_01fb9bc0(param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

