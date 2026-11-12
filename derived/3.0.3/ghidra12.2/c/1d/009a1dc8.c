
void FUN_009a1dc8(long param_1)

{
  undefined *puVar1;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  (**(code **)(*(long *)(param_1 + 0xc0) + 0xf0))((long *)(param_1 + 0xc0));
  (**(code **)(*(long *)(param_1 + 0x2f0) + 0xf0))(param_1 + 0x2f0);
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x130) + 0xf0))();
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x230) + 0xf0))();
  local_45 = 0;
  local_88 = 0x40;
  local_84[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_98 = puVar1;
  puStack_90 = local_84;
  FUN_038d1270(&local_98,&DAT_0407177c,1);
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x130) + 8) + 0xf0))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x230) + 8) + 0xf0))();
  local_88 = 0x40;
  local_45 = 0;
  local_84[0] = 0;
  local_98 = puVar1;
  puStack_90 = local_84;
  FUN_038d1270(&local_98,&DAT_0407177c,2);
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x130) + 0x10) + 0xf0))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x230) + 0x10) + 0xf0))();
  (**(code **)(*(long *)(param_1 + 0x3b0) + 0xf0))(param_1 + 0x3b0);
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0xf0))(param_1 + 0x3e0);
  (**(code **)(*(long *)(param_1 + 800) + 0xf0))(param_1 + 800);
  (**(code **)(*(long *)(param_1 + 0x350) + 0xf0))(param_1 + 0x350);
  return;
}

