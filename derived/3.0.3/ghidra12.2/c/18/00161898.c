
undefined8 FUN_00161898(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) & 0xfffffffd;
  FUN_001598a0();
  if (((*(byte *)(param_1 + 0x41e) & 1) == 0) || (uVar1 = FUN_001601f4(param_1), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

