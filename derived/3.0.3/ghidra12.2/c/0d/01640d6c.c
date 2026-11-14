
void FUN_01640d6c(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_049b5028;
  puVar1 = PTR_DAT_04bb3048 + 0x10;
  param_1[0x38] = puVar1;
  if ((long *)param_1[0x39] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39] + 8))();
  }
  param_1[0x39] = 0;
  param_1[0x36] = puVar1;
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 8))();
  }
  param_1[0x37] = 0;
  if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8 | 4;
    if (param_1[0xe] == 0) {
      if (param_1[0xb] == 0) goto LAB_01640e24;
    }
    else {
      FUN_03f45838(param_1 + 0xc);
      if (param_1[0xb] == 0) {
        *(undefined4 *)((long)param_1 + 0x54) = 0xe;
        goto LAB_01640e24;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 9);
    }
  }
LAB_01640e24:
  FUN_03f457c4(param_1 + 0xc);
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

