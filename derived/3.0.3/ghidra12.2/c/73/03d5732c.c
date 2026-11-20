
void FUN_03d5732c(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar2 = (int)param_1[9];
  if (iVar2 == 6 || iVar2 == 4) {
    uVar3 = 5;
  }
  else {
    if (iVar2 != 3) goto LAB_03d573bc;
    lVar4 = param_1[0xb];
    FUN_038e2f80(lVar4 + 0x110);
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x74) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + -1;
    FUN_038e3040(lVar4 + 0x110);
    uVar3 = 2;
    param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 9) = uVar3;
LAB_03d573bc:
  if ((int)param_1[9] == 5) {
    uVar3 = 7;
  }
  else {
    if ((int)param_1[9] != 2) {
      return;
    }
    (**(code **)(*param_1 + 0x30))(param_1);
    uVar3 = 8;
  }
  *(undefined4 *)(param_1 + 9) = uVar3;
  return;
}

