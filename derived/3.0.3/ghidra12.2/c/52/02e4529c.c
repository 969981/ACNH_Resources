
void FUN_02e4529c(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x2b0);
  lVar6 = *(long *)PTR_DAT_04bb21d0;
  if ((*(char *)(lVar6 + 0xf78) == '\0') || (*(int *)(lVar6 + 0xc4) != 0)) {
    if ((*(int *)(lVar6 + 0x78) == 0) || (*(int *)(lVar6 + 0xc4) != 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 0x2b0) = uVar5;
  bVar2 = *(byte *)(param_1 + 0x2b4);
  if (iVar1 != *(int *)(param_1 + 0x2b0)) {
    plVar7 = (long *)(param_1 + 0x50);
    uVar4 = (**(code **)(*plVar7 + 8))(plVar7);
    if ((uVar4 & 1) != 0) {
      local_18 = 1;
      (**(code **)*plVar7)(plVar7,&local_18);
    }
  }
  bVar3 = FUN_02e453a4(param_1);
  *(byte *)(param_1 + 0x2b4) = bVar3 & 1;
  if (bVar2 != (bVar3 & 1)) {
    plVar7 = (long *)(param_1 + 0x50);
    uVar4 = (**(code **)(*plVar7 + 8))(plVar7);
    if ((uVar4 & 1) != 0) {
      local_14 = 2;
      (**(code **)*plVar7)(plVar7,&local_14);
    }
  }
  return;
}

