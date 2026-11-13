
undefined8 FUN_01308e48(long param_1)

{
  byte bVar1;
  undefined *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  undefined1 auStack_8 [8];
  
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  local_40 = PTR_DAT_04bb2018 + 0x10;
  local_30 = *(undefined4 *)(param_1 + 0x20);
  uStack_2c = *(undefined4 *)(param_1 + 0x24);
  local_28 = param_1 + 0x28;
  bVar1 = FUN_012ed218(auStack_8,&local_40);
  *(byte *)(param_1 + 0xb4) = bVar1 & 1;
  return 1;
}

