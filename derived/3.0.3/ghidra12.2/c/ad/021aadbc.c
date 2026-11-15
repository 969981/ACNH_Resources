
void FUN_021aadbc(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)(param_1 + 4);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if (*(int *)(param_1 + 0x40) < 1) {
      piVar4 = &DAT_053da288;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x3c) + -1;
      iVar1 = 0;
      if (*(int *)(param_1 + 0x38) <= iVar2) {
        iVar1 = *(int *)(param_1 + 0x38);
      }
      piVar4 = (int *)(*(long *)(param_1 + 0x30) + (long)(iVar2 - iVar1) * 0x10 + 4);
    }
  }
  else {
    piVar4 = (int *)(param_1 + 0x68);
  }
  local_18 = *piVar4;
  if (local_18 == 0) {
    uVar3 = 0;
  }
  else {
    if (local_18 == 2) {
      iVar1 = *(int *)(param_1 + 0x1fc);
      local_1c = 7;
      if (iVar1 == 0) {
        local_1c = 5;
      }
      else if (iVar1 == 5) {
        local_1c = 6;
      }
      else if (iVar1 == 2) {
        local_1c = 4;
      }
      FUN_021dc210(&local_14,&local_1c,0,1);
      return;
    }
    if (local_18 != 1) {
      return;
    }
    uVar3 = 1;
  }
  FUN_0208f100(*(long *)PTR_DAT_04bb3968 + 0x1320,local_14,1,uVar3,0);
  return;
}

