
void FUN_0025d39c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar4 = &local_50;
  lVar2 = FUN_0025b4e8(*(undefined8 *)(param_2 + 0x68),*param_4);
  if (*(byte *)(lVar2 + 8) < 9) {
    if (*(byte *)(lVar2 + 8) != 8) {
      local_40 = 0x641f;
      goto LAB_0025d490;
    }
    if (*(int *)(lVar2 + 4) != *(int *)(param_4 + 1)) {
      local_40 = 0x6c51;
      goto LAB_0025d490;
    }
    plVar3 = *(long **)(*(long *)(param_2 + 0x68) + 0x408);
    (**(code **)(*plVar3 + 0x40))(&local_40,plVar3,*(undefined8 *)(param_2 + 0x60),param_4);
    if (local_40 == 0) {
      *(undefined8 *)(param_2 + 0x58) = param_3;
      FUN_00220f24(param_3);
      FUN_00220f78(*(undefined8 *)(param_2 + 0x58));
      FUN_002211bc(*(undefined8 *)(*(long *)(param_2 + 0x68) + 0x408),1);
      lVar2 = *(long *)(param_2 + 0x68);
      local_50 = 0;
      *(undefined1 *)(lVar2 + 0x485) = 0;
      puVar1 = PTR_FUN_04bcd630;
      *(undefined1 *)(lVar2 + 0x571) = 1;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LocalConnectNetworkJob::WaitConnectNetwork";
      local_24 = 0;
      *(undefined **)(param_2 + 0x30) = puVar1;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      goto LAB_0025d4ac;
    }
  }
  else {
    local_40 = 0x641e;
LAB_0025d490:
    local_50 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  }
  piVar4 = &local_40;
LAB_0025d4ac:
  FUN_002296c4(param_1,piVar4);
  return;
}

