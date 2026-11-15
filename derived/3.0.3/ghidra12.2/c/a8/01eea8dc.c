
undefined8 FUN_01eea8dc(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x77b0) - 3U < 5) || (uVar1 = 0, *(int *)(param_1 + 0x77b0) == 0x28)) {
    return 0;
  }
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    if (((*(ushort *)(param_1 + 0xad28) & 1) == 0) && ((*(ushort *)(param_1 + 0xad2a) & 1) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

