
void FUN_022904f4(long param_1)

{
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [127];
  undefined1 local_25;
  
  local_25 = 0;
  local_a8 = 0x80;
  local_a4[0] = 0;
  puStack_b0 = local_a4;
  local_b8 = PTR_DAT_04bb2d88 + 0x10;
  FUN_038d1270(&local_b8,&DAT_040c0b52);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0xf0))();
  (**(code **)(*(long *)(param_1 + 0x128) + 0xf0))(param_1 + 0x128);
  (**(code **)(*(long *)(param_1 + 0xf8) + 0xf0))((long *)(param_1 + 0xf8));
  FUN_038d1270(&local_b8,&DAT_040dad0c);
  (**(code **)(*(long *)(param_1 + 0x160) + 0xf0))(param_1 + 0x160);
  (**(code **)(*(long *)(param_1 + 0x1c8) + 0xf0))(param_1 + 0x1c8);
  (**(code **)(*(long *)(param_1 + 0x198) + 0xf0))(param_1 + 0x198);
  FUN_038d1270(&local_b8,&DAT_040e555b);
  (**(code **)(*(long *)(param_1 + 0x200) + 0xf0))(param_1 + 0x200);
  (**(code **)(*(long *)(param_1 + 0x268) + 0xf0))(param_1 + 0x268);
  (**(code **)(*(long *)(param_1 + 0x238) + 0xf0))(param_1 + 0x238);
  FUN_038d1270(&local_b8,&DAT_040c5c54);
  (**(code **)(*(long *)(param_1 + 0x2a0) + 0xf0))(param_1 + 0x2a0);
  (**(code **)(*(long *)(param_1 + 0x308) + 0xf0))(param_1 + 0x308);
  (**(code **)(*(long *)(param_1 + 0x2d8) + 0xf0))(param_1 + 0x2d8);
  return;
}

