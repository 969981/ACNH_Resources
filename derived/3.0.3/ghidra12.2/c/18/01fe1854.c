
void FUN_01fe1854(long param_1)

{
  undefined8 local_8;
  
  local_8 = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 1;
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,(long)&local_8 + 4,
               &local_8,PTR_DAT_04bc1600,6);
  *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 0x400000;
  return;
}

