
void FUN_014ef9f0(long param_1,undefined8 param_2)

{
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [40];
  
  local_60 = *(undefined8 *)(param_1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  local_68 = PTR_DAT_04bbbc20 + 0x10;
  local_50 = *(undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x74) != '\0') {
    FUN_014edb38(param_1,auStack_48,param_1 + 0x20);
    local_58 = CONCAT44(local_58._4_4_,*(float *)(param_1 + 0x30) + 0.0);
    local_60 = CONCAT44(*(undefined4 *)(param_1 + 0x2c),*(float *)(param_1 + 0x28) + 0.0);
  }
  FUN_014edb38(param_1,param_2,&local_68);
  return;
}

