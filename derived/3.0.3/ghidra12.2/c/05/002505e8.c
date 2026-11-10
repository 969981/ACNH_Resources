
undefined4 FUN_002505e8(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0025b4e8(*(undefined8 *)(param_1 + 0x18));
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
  }
  return uVar1;
}

