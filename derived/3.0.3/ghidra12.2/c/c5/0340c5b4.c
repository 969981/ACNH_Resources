
void FUN_0340c5b4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined1 uStack_29;
  uint local_28;
  uint local_24;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 6) != 0) {
    iVar5 = 0;
    if (*(int *)(param_1 + 5) <= *(int *)((long)param_1 + 0x2c)) {
      iVar5 = *(int *)(param_1 + 5);
    }
    piVar4 = (int *)(param_1[4] + (long)(*(int *)((long)param_1 + 0x2c) - iVar5) * 0x78);
    iVar5 = *piVar4;
    if (iVar5 == 1) {
      iVar5 = piVar4[2];
      (**(code **)*param_1)(&uStack_29,param_1);
      lVar2 = FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),iVar5,&uStack_29);
      if (lVar2 != 0) {
        return;
      }
      iVar5 = *(int *)(param_1 + 6);
      if (0 < iVar5) {
        iVar1 = 0;
        if (*(int *)((long)param_1 + 0x2c) + 1 < *(int *)(param_1 + 5)) {
          iVar1 = *(int *)((long)param_1 + 0x2c) + 1;
        }
        *(int *)((long)param_1 + 0x2c) = iVar1;
        *(int *)(param_1 + 6) = iVar5 + -1;
        iVar5 = iVar5 + -1;
      }
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        iVar5 = 0;
        if (*(int *)(param_1 + 5) <= *(int *)((long)param_1 + 0x2c)) {
          iVar5 = *(int *)(param_1 + 5);
        }
        iVar5 = *(int *)(param_1[4] + (long)(*(int *)((long)param_1 + 0x2c) - iVar5) * 0x78);
        uVar3 = 3;
        if (iVar5 != 0) {
          uVar3 = (uint)(iVar5 == 1);
        }
      }
      local_24 = uVar3;
      goto LAB_0340c6a8;
    }
    uVar3 = 3;
    if (iVar5 != 0) {
      uVar3 = 0;
    }
  }
  local_28 = uVar3;
LAB_0340c6a8:
  FUN_03ebb160(param_1 + 0x35,uVar3);
  return;
}

