
void FUN_00269270(long param_1)

{
  undefined *puVar1;
  
  FUN_03875e50(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x198) = 0xff;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_03875e50(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x220) = 0xff;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  FUN_03875e50(param_1 + 0x238);
  *(undefined1 *)(param_1 + 0x2a8) = 0xff;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  FUN_03875e50(param_1 + 0x2c0);
  *(undefined1 *)(param_1 + 0x330) = 0xff;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  if (*(char *)(param_1 + 0xd1) != '\0') {
    FUN_00269dd0(param_1);
    FUN_00269780(param_1);
    puVar1 = PTR_DAT_04bc1510;
    *(undefined1 *)(param_1 + 0xd1) = 0;
    *(undefined1 *)(*(long *)puVar1 + 0x5b) = 1;
  }
  return;
}

