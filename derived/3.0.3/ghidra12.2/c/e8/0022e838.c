
void FUN_0022e838(int *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(char *)(param_2 + 8) == '\0') {
    local_24 = 0;
    local_40 = 0x2c09;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
    FUN_002296c4(param_1,&local_40);
    return;
  }
  local_40 = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_40);
  if (*(char *)(*(long *)(param_2 + 0xb0) + 0xb0) == '\0') {
LAB_0022e8d0:
    uVar1 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    if (*(char *)(param_2 + 0xa8) != '\0') {
      FUN_0022e9d8(&local_40,param_2,*(undefined8 *)(param_2 + 0xa0),param_3);
      FUN_00229780(param_1,&local_40);
      local_24 = 0;
      local_40 = 0x2c09;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
      if (*param_1 != local_40) {
        if (*param_1 == 0) {
          *(undefined1 *)(param_2 + 0xa8) = 0;
        }
        goto LAB_0022e8f0;
      }
      goto LAB_0022e8d0;
    }
    FUN_0022e9d8(&local_40,param_2,*(undefined8 *)(param_2 + 0x10),param_3);
    FUN_00229780(param_1,&local_40);
    local_24 = 0;
    local_40 = 0x2c09;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
    if (*param_1 != local_40) {
      if (*param_1 == 0) {
        *(undefined1 *)(param_2 + 0xa8) = 1;
      }
      goto LAB_0022e8f0;
    }
    uVar1 = *(undefined8 *)(param_2 + 0xa0);
  }
  FUN_0022e9d8(&local_40,param_2,uVar1,param_3);
  FUN_00229780(param_1,&local_40);
LAB_0022e8f0:
  if (*param_1 == 0) {
    *(undefined1 *)(*(long *)(param_2 + 0xb0) + 0x6b0) = 1;
    return;
  }
  return;
}

