
void FUN_01c6ea30(long param_1)

{
  undefined8 uVar1;
  undefined *local_38;
  undefined1 local_30;
  undefined8 local_2c;
  
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_01c68940(param_1 + 0x10,0,0,0);
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_01c68940(param_1 + 0x30,0,0,0);
  *(undefined2 *)(param_1 + 0x48) = 0xffff;
  FUN_01c6ec00(param_1 + 0xc0,0,0,0);
  uVar1 = *(undefined8 *)PTR_DAT_04bc0ff0;
  FUN_001865b0(param_1 + 0x50,uVar1);
  FUN_001865b0(param_1 + 0x58,uVar1);
  FUN_001865b0(param_1 + 0x60,uVar1);
  FUN_001865b0(param_1 + 0x68,uVar1);
  *(undefined4 *)(param_1 + 0x70) = 0;
  local_38 = PTR_DAT_04bc0fe8;
  *(undefined2 *)(param_1 + 0x90) = 0;
  local_30 = 0;
  local_38 = local_38 + 0x10;
  local_2c = 0x1400000000;
  FUN_001fed98(param_1 + 0x98,&local_38);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_01c66e30(param_1 + 0x78,0,0,0);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  return;
}

