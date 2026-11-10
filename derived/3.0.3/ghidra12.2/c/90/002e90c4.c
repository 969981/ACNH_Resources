
void FUN_002e90c4(int *param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_04bcb8d8;
  FUN_002bf90c(*(undefined8 *)PTR_DAT_04bcb8d8);
  if (*param_1 != 0) {
    FUN_002bfb10(*(undefined8 *)puVar1);
    return;
  }
  FUN_002c08cc(auStack_30,*(undefined8 *)puVar1);
  FUN_00229780(param_1,auStack_30);
  if (*param_1 != 0) {
    FUN_002c0d80(*(undefined8 *)puVar1);
    FUN_002bfb10(*(undefined8 *)puVar1);
  }
  return;
}

