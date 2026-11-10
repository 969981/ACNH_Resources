
void FUN_001f78e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  uVar1 = FUN_001abe40();
  FUN_00193030(uVar1,*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28),
               *(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  return;
}

