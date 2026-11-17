
void FUN_02e78da4(long param_1,long param_2)

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
    if (*(int *)(param_2 + 0xc) == 0) {
      if (*(int *)(param_2 + 0x10) != 2) {
        return;
      }
      goto LAB_02e78e4c;
    }
    if (*(int *)(param_2 + 0xc) != 2) {
      return;
    }
    iVar1 = *(int *)(param_2 + 0x10);
  }
  else {
    if (*(int *)(param_2 + 8) != 2) {
      return;
    }
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 2) {
LAB_02e78e4c:
      local_30 = PTR_DAT_04bc4e68 + 0x10;
      local_28 = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
      (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
      return;
    }
  }
  if (iVar1 == 0) {
    local_30 = PTR_DAT_04bc4e68 + 0x10;
    local_28 = 1;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
    (**(code **)(plVar2[3] + 400))(0x3f800000,plVar2[1]);
  }
  return;
}

