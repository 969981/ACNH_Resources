
undefined8 FUN_0025e8ec(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  int local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  local_30 = 0;
  local_40 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_40);
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 3) {
    plVar2 = *(long **)(param_1 + 0x68);
    uVar3 = 0;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(&local_40);
        FUN_00229780(&local_30,&local_40);
        uVar3 = *(undefined8 *)(param_1 + 0x58);
      }
      else {
        local_14 = 0;
        local_40 = 0x10c08;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
        FUN_00229780(&local_30,&local_40);
        uVar3 = *(undefined8 *)(param_1 + 0x58);
      }
      goto joined_r0x0025e958;
    }
    plVar2 = *(long **)(param_1 + 0x68);
    uVar3 = 1;
  }
  (**(code **)(*plVar2 + 0xf8))(&local_40,plVar2,uVar3);
  FUN_00229780(&local_30,&local_40);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
joined_r0x0025e958:
  if (local_30 == 0) {
    local_40 = 0;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_50,&local_40);
    FUN_00220f8c(uVar3,auStack_50);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  FUN_002296c4(auStack_60,&local_30);
  FUN_00220ff8(uVar3,auStack_60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

