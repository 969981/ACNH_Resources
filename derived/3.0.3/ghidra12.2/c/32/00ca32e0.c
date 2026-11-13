
undefined8 FUN_00ca32e0(long *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *local_40;
  char *local_38;
  undefined *local_30;
  char *local_28;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_28 = PTR_DAT_04bb2120;
  local_38 = PTR_DAT_04bb2120;
  local_30 = local_40;
  FUN_021fe810(&local_30,&local_40);
  if (*local_28 == '\0') {
LAB_00ca33b0:
    if (*local_38 != '\0') {
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar4 = (char *)param_1[1];
      (**(code **)(local_40 + 0x18))(&local_40);
      if (pcVar4 == local_38) goto LAB_00ca3440;
      uVar3 = 0;
      bVar1 = true;
      do {
        if (*(char *)(param_1[1] + uVar3) != local_38[uVar3]) break;
        if (*(char *)(param_1[1] + uVar3) == '\0') {
          if (bVar1) goto LAB_00ca3440;
          break;
        }
        bVar1 = uVar3 < 0x80000;
        uVar3 = uVar3 + 1;
      } while (uVar3 != 0x80001);
    }
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    pcVar4 = (char *)param_1[1];
    (**(code **)(local_30 + 0x18))(&local_30);
    if (pcVar4 != local_28) {
      uVar3 = 0;
      bVar1 = true;
      do {
        if (*(char *)(param_1[1] + uVar3) != local_28[uVar3]) break;
        if (*(char *)(param_1[1] + uVar3) == '\0') {
          if (bVar1) goto LAB_00ca3440;
          break;
        }
        bVar1 = uVar3 < 0x80000;
        uVar3 = uVar3 + 1;
      } while (uVar3 != 0x80001);
      goto LAB_00ca33b0;
    }
LAB_00ca3440:
    uVar2 = 1;
  }
  return uVar2;
}

