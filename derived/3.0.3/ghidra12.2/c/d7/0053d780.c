
void FUN_0053d780(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_048df700;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  puVar1 = (undefined8 *)FUN_00426720(PTR_DAT_048607b8,7,8,0,0,(long)param_1 + 0x24);
  param_1[3] = puVar1;
  if (*(int *)(param_1 + 4) != 7) {
    *(undefined4 *)(param_1 + 4) = 7;
  }
  *puVar1 = &LAB_0053d860;
  *(undefined1 **)(param_1[3] + 8) = &LAB_0053d860;
  *(undefined1 **)(param_1[3] + 0x10) = &LAB_0053d860;
  *(undefined1 **)(param_1[3] + 0x18) = &LAB_0053d860;
  *(undefined1 **)(param_1[3] + 0x20) = &LAB_0053d860;
  *(undefined1 **)(param_1[3] + 0x28) = &LAB_0053d860;
  *(undefined1 **)(param_1[3] + 0x30) = &LAB_0053d860;
  *(undefined1 **)(param_1[3] + 8) = &LAB_0053d870;
  *(undefined1 **)(param_1[3] + 0x10) = &LAB_0053d880;
  return;
}

