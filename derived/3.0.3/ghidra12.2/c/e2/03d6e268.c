
void FUN_03d6e268(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined *local_30;
  undefined4 local_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 8) == 1) {
    if (*(int *)(param_2 + 0xc) == 1) {
      if (*(int *)(param_2 + 0x10) != 0) {
        return;
      }
      goto LAB_03d6e310;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      return;
    }
    iVar1 = *(int *)(param_2 + 0x10);
  }
  else {
    if (*(int *)(param_2 + 8) != 2) {
      return;
    }
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
LAB_03d6e310:
      local_30 = PTR_DAT_04bc4e68 + 0x10;
      local_28 = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
      (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
      return;
    }
  }
  if (iVar1 == 1) {
    local_30 = PTR_DAT_04bc4e68 + 0x10;
    local_28 = 1;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
    (**(code **)(plVar2[3] + 400))(0x3f800000,plVar2[1]);
  }
  return;
}

