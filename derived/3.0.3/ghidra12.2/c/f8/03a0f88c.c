
void FUN_03a0f88c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bbd510;
  if (*(long *)(param_1 + 0x1d8) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  if (*(long *)(param_1 + 0x2c0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  if (*(long *)(param_1 + 0x3a8) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
  }
  if (*(long *)(param_1 + 0x490) != 0) {
    FUN_039499cc(*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x490) = 0;
  }
  return;
}

