
void FUN_00480b90(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_150 [18];
  undefined8 local_c0 [18];
  
  FUN_004225b0(local_c0);
  FUN_00480870(param_1,param_2,local_c0);
  FUN_004225b0(local_150);
  FUN_00480870(param_1 + 0x10,param_2,local_150);
  puVar1 = &DAT_0407ebb1;
  if (*(char *)(param_1 + 0x20) != '\0') {
    puVar1 = (undefined8 *)&DAT_040d759c;
  }
  FUN_00422d90(param_3,"%s%s/%s",puVar1,local_c0[0],local_150[0]);
  FUN_00422550(local_150);
  FUN_00422550(local_c0);
  return;
}

