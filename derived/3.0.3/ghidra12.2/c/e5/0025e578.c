
undefined8 FUN_0025e578(long param_1)

{
  undefined8 uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0') {
    uVar1 = 5;
    switch(*(int *)(param_1 + 0x68)) {
    case 1:
      goto switchD_0025e5c8_caseD_1;
    case 2:
      FUN_00258170(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x98));
      FUN_00258d78(*(undefined8 *)(param_1 + 0xb0));
      local_24 = 0;
      goto LAB_0025e5f0;
    case 3:
      FUN_002296c4(&local_24,param_1 + 0x6c);
      break;
    case 4:
      goto switchD_0025e5c8_caseD_4;
    default:
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x68) == 1) {
      FUN_002210f0();
    }
switchD_0025e5c8_caseD_4:
    local_24 = 0x6c05;
LAB_0025e5f0:
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  }
  FUN_00229780(param_1 + 0x9c,&local_24);
  uVar1 = 0;
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcd610;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalAllowParticipatingJob::WaitBackgroundJobEnd";
switchD_0025e5c8_caseD_1:
  return uVar1;
}

