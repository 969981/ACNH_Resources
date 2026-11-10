
void FUN_00314428(long param_1)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_0018a58c(param_1 + 0x68,&DAT_0407ebb1);
  local_14 = 0;
  FUN_00313980(param_1 + 0x90,6,&local_14);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar1 = DAT_04c57e48;
  FUN_001865b0(param_1 + 0xc0,DAT_04c57e48);
  FUN_001865b0(param_1 + 200,uVar1);
  FUN_0031a464(param_1);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  FUN_0031a4ac(param_1,0x61,0);
  return;
}

