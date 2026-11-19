
void FUN_03877560(int *param_1)

{
  long lVar1;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_14;
  
  *param_1 = 0;
  local_40 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_40);
  lVar1 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
  FUN_0022caa0(&local_40);
  FUN_00229780(param_1,&local_40);
  if (*param_1 != 0) {
    local_14 = 0;
    local_40 = 0x10c02;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    if (*param_1 != local_40) {
      if (*(char *)(lVar1 + 0xf0) == '\0') {
        *(undefined1 *)(lVar1 + 0xf0) = 1;
        FUN_00229780(lVar1 + 0xf4,param_1);
        *(undefined4 *)(lVar1 + 0x104) = 0;
        return;
      }
      return;
    }
  }
  FUN_0022cbb0(&local_40);
  FUN_00229780(param_1,&local_40);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  FUN_0022d07c(&local_40);
  FUN_00229780(param_1,&local_40);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  FUN_0022cc60(&local_40);
  FUN_00229780(param_1,&local_40);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  return;
}

