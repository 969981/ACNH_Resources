
undefined8 FUN_01cd1db0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_2 + 0x58) - 3 < 0xfffffffe) {
    return 0;
  }
  uVar1 = FUN_01c70668(param_1,2 - (uint)*(byte *)(param_2 + 0x58),param_2 + 0x59,
                       *(long *)(param_2 + 0x50) + -1);
  return uVar1;
}

