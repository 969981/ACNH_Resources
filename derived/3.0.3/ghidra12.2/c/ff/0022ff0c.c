
void FUN_0022ff0c(long param_1)

{
  if (*(long *)(param_1 + 0x16d8) != 0) {
    FUN_00221064();
  }
  if (*(long *)(param_1 + 0x16e0) != 0) {
    FUN_00221064();
  }
  if (*(int *)(param_1 + 0x16e8) == 1) {
    FUN_00221064(param_1 + 0x16e8);
  }
  FUN_00240b90(param_1 + 0x18);
  FUN_00240b90(param_1 + 0x900);
  (**(code **)(*(long *)(param_1 + 0x11e8) + 0x18))(param_1 + 0x11e8);
  (**(code **)(*(long *)(param_1 + 0x1450) + 0x18))(param_1 + 0x1450);
  (**(code **)(**(long **)(param_1 + 0x16c0) + 0x40))();
  FUN_002915fc(param_1);
  *(undefined8 *)(param_1 + 0x16c8) = 0;
  *(undefined4 *)(param_1 + 0x16d0) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x16d8) = 0;
  *(undefined8 *)(param_1 + 0x16e0) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x2000) = 0;
  return;
}

