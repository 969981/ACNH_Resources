
undefined8 FUN_001967c8(undefined8 param_1,long param_2)

{
  undefined4 local_14;
  
  local_14 = (undefined4)*(undefined8 *)(param_2 + 0x18);
  FUN_00196818(param_1,&local_14);
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_00195d60(param_1,*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28),
                 *(long *)(param_2 + 0x18) << 3);
  }
  return param_1;
}

