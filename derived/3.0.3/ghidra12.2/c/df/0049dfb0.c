
void FUN_0049dfb0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  param_1[2] = 1;
  *param_1 = &PTR_LAB_04866bf0;
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = param_2;
  puVar1 = (undefined1 *)FUN_00426720(PTR_DAT_048607b8,1,1,0,0,(long)param_1 + 0x34);
  param_1[5] = puVar1;
  if (*(int *)(param_1 + 6) != 1) {
    *(undefined4 *)(param_1 + 6) = 1;
  }
  *puVar1 = 0;
  if (*(int *)(param_1 + 6) != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  param_1[3] = 0;
  param_1[4] = param_1[5];
  param_1[8] = 0;
  return;
}

