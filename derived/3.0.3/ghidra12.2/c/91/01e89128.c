
void FUN_01e89128(long param_1)

{
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x12700) == 0) {
    FUN_01e89218(param_1);
  }
  local_38 = 0;
  local_40 = 0;
  FUN_01e89470(param_1,&local_40);
  FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
  *(undefined8 *)(param_1 + 0xa9fc) = 0;
  *(undefined1 *)(param_1 + 0xaa44) = 0;
  local_18 = 0;
  *(undefined8 *)(param_1 + 0xa9f0) = local_40;
  *(undefined4 *)(param_1 + 0xa9f8) = local_38;
  *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(param_1 + 0xaa34);
  *(undefined8 *)(param_1 + 0xaa18) = *(undefined8 *)(param_1 + 0xaa38);
  *(undefined8 *)(param_1 + 0xaa04) = *(undefined8 *)(param_1 + 0xaa24);
  *(undefined8 *)(param_1 + 0xaa0c) = *(undefined8 *)(param_1 + 0xaa2c);
  *(undefined4 *)(param_1 + 0xaa20) = *(undefined4 *)(param_1 + 0xaa40);
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,(long)&local_18 + 4,
               &local_18,PTR_DAT_04bc1600,6);
  return;
}

