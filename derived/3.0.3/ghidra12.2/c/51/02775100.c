
bool FUN_02775100(undefined8 param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *local_60;
  undefined1 *puStack_58;
  undefined *local_50;
  char *local_48;
  undefined4 local_40;
  char local_3c [7];
  undefined1 local_35;
  
  if (param_2 == (long *)0x0) {
    return false;
  }
  local_48 = local_3c;
  *(undefined1 *)param_2[1] = 0;
  local_35 = 0;
  local_3c[0] = '\0';
  local_40 = 8;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  FUN_02774cf0(param_1,&local_50);
  if (*local_48 == '\0') {
    return false;
  }
  (**(code **)(local_50 + 0x18))(&local_50);
  (**(code **)(local_50 + 0x18))(&local_50);
  if (local_48 == "alp") {
LAB_027751e4:
    puStack_58 = &DAT_040aaf55;
  }
  else {
    uVar2 = 0;
    bVar1 = true;
    do {
      if (local_48[uVar2] != (&DAT_040716fb)[uVar2]) break;
      if (local_48[uVar2] == '\0') {
        if (bVar1) goto LAB_027751e4;
        break;
      }
      bVar1 = uVar2 < 0x80000;
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x80001);
    (**(code **)(local_50 + 0x18))(&local_50);
    (**(code **)(local_50 + 0x18))(&local_50);
    if (local_48 != "alw") {
      uVar2 = 0;
      bVar1 = true;
      do {
        if (local_48[uVar2] != (&DAT_040aaf55)[uVar2]) break;
        if (local_48[uVar2] == '\0') {
          if (bVar1) goto LAB_02775270;
          break;
        }
        bVar1 = uVar2 < 0x80000;
        uVar2 = uVar2 + 1;
      } while (uVar2 != 0x80001);
      goto LAB_02775294;
    }
LAB_02775270:
    puStack_58 = &DAT_040716fb;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  (**(code **)(*param_2 + 0x10))(param_2,&local_60);
LAB_02775294:
  return *(char *)param_2[1] != '\0';
}

