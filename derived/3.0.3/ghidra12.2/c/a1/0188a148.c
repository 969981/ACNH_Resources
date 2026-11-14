
uint FUN_0188a148(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  lVar4 = *(long *)PTR_DAT_04bb4008;
  if (lVar4 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x100))(param_1);
    uVar3 = FUN_01a12390(lVar4,6,uVar1);
    if ((uVar3 & 1) != 0) {
      pcStack_38 = "WaitMuseum";
      goto LAB_0188a1b8;
    }
  }
  pcStack_38 = "Wait";
LAB_0188a1b8:
  local_40 = PTR_DAT_04bb2020 + 0x10;
  if (param_1[9] == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[9] + 0x60);
    uVar2 = 0;
    if (lVar4 != 0) {
      uVar2 = FUN_0073d870(lVar4,&local_40,param_2,param_3,0);
    }
  }
  return uVar2 & 1;
}

