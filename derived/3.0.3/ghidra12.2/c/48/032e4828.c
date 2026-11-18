
void FUN_032e4828(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_60;
  long *local_58;
  undefined4 local_18;
  
  if (param_2 == *(int *)(param_1 + 0x5e8)) {
    return;
  }
  local_18 = 1;
  if (param_2 == 2) {
    local_18 = 2;
    if ((param_3 & 1) != 0) {
      lVar6 = 0x10;
LAB_032e48cc:
      lVar5 = *(long *)PTR_DAT_04bb4fb0;
      uVar3 = FUN_03368ef0(DAT_05734ea0,0);
      lVar4 = *(long *)(lVar5 + 8);
      if (lVar4 != 0) {
        lVar1 = 0;
        if (*(char *)(lVar4 + 0x38) != '\0') {
          lVar1 = lVar4 + 8;
        }
        FUN_03366350(lVar5,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar6 * 8 + 0x3f0),1,
                     uVar3,0);
      }
LAB_032e4928:
      local_60 = PTR_DAT_04bc8e60 + 0x10;
      local_58 = (long *)0x0;
      FUN_032c7c30(param_1 + 0x590,local_18,0,&local_60,0,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      goto LAB_032e4980;
    }
  }
  else if (param_2 == 1) {
    local_18 = 0;
    if ((param_3 & 1) != 0) {
      lVar6 = 0xf;
      goto LAB_032e48cc;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(param_1 + 0x5e8) == 2) {
      uVar2 = 3;
    }
    else {
      uVar2 = 1;
      if (*(int *)(param_1 + 0x5e8) != 1) {
        uVar2 = local_18;
      }
    }
    local_18 = uVar2;
    if ((param_3 & 1) != 0) {
      lVar6 = 0x11;
      goto LAB_032e48cc;
    }
  }
  else if ((param_3 & 1) != 0) goto LAB_032e4928;
  FUN_032c8670(param_1 + 0x590,local_18,0);
LAB_032e4980:
  *(int *)(param_1 + 0x5e8) = param_2;
  return;
}

