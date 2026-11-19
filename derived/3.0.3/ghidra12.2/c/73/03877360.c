
void FUN_03877360(int *param_1)

{
  long lVar1;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_14;
  
  local_40 = 0;
  lVar1 = *(long *)(DAT_05ae6a60 + 0x30);
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_40);
  FUN_002bd190(&local_40,4,6,0xb);
  FUN_00229780(param_1,&local_40);
  if (*param_1 == 0) {
    FUN_002bd290(&local_40);
    FUN_00229780(param_1,&local_40);
    if (*param_1 != 0) {
      FUN_00223064(param_1);
    }
    FUN_002bed80(&local_40);
    FUN_00229780(param_1,&local_40);
    if (*param_1 != 0) {
      FUN_00223064(param_1);
    }
    FUN_002bd340(&local_40);
    FUN_00229780(param_1,&local_40);
    if (*param_1 != 0) {
      FUN_00223064(param_1);
    }
  }
  else {
    local_14 = 0;
    local_40 = 0x10c02;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    if ((*param_1 != local_40) && (*(char *)(lVar1 + 0xf0) == '\0')) {
      *(undefined1 *)(lVar1 + 0xf0) = 1;
      FUN_00229780(lVar1 + 0xf4,param_1);
      *(undefined4 *)(lVar1 + 0x104) = 0;
    }
  }
  return;
}

