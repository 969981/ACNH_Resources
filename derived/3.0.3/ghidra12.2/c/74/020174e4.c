
void FUN_020174e4(long param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [127];
  undefined1 local_25;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined8 local_18;
  
  local_d8 = 0;
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0;
  local_d4 = 0x3f800000;
  puStack_b0 = local_a4;
  local_a8 = 0x80;
  local_25 = 0;
  local_a4[0] = 0;
  local_b8 = PTR_DAT_04bb2d88 + 0x10;
  local_18 = 0;
  local_1b = 0;
  local_cc = 0;
  local_c4 = 0;
  local_20 = 7;
  local_1c = *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x224);
  *(undefined2 *)(param_1 + 0x60e4) = *param_2;
  *(undefined1 *)(param_1 + 0x60e6) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x60e7) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x60e8) = *(undefined4 *)(param_2 + 2);
  FUN_017327f0(*(undefined8 *)(param_1 + 0x60b8),param_2,param_3,&local_e8,0xffffffff);
  return;
}

