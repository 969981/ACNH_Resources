
undefined8 FUN_0386fa90(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined *local_50;
  char *local_48;
  long local_28;
  
  plVar3 = *(long **)(param_1 + 0x1d0);
  if (plVar3 != (long *)0x0) {
    if (plVar3[1] != 0) {
      if (param_3 == (long *)0x0) {
        return 0;
      }
      if (*(char *)param_2[1] != '\0') {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar4 = (char *)param_2[1];
        local_50 = PTR_DAT_04bc0cb8 + 0x10;
        local_48 = (char *)CONCAT44(local_48._4_4_,0x18);
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
        local_50 = PTR_DAT_04bb2020 + 0x10;
        local_48 = pcVar4;
        (**(code **)(plVar3[3] + 0x1a0))(&local_28,plVar3[1],&local_50);
        *param_3 = local_28;
        if (local_28 != 0) {
          return 1;
        }
      }
      goto LAB_0386fb80;
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "RootPane";
    uVar1 = FUN_0386f830(param_1,&local_50,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
LAB_0386fb80:
  if (*(char *)param_2[1] != '\0') {
    plVar3 = *(long **)(param_1 + 0x58);
    local_50 = (undefined *)0x0;
    if ((plVar3 == (long *)0x0) ||
       ((**(code **)(*plVar3 + 0x28))(plVar3,&local_50), local_50 == (undefined *)0x0)) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)0x0;
      if (*(long *)(local_50 + 0xb8) != 0) {
        plVar3 = (long *)(local_50 + 0xb8);
      }
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    if (plVar3 == (long *)0x0) {
      *param_3 = 0;
    }
    else {
      lVar2 = FUN_00364ec0(plVar3,param_2[1]);
      *param_3 = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

