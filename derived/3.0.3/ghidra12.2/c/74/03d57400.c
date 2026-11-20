
void FUN_03d57400(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar3 = (int)param_1[0xe];
  while (iVar3 != 0) {
    lVar5 = param_1[0xd];
    if (iVar3 < 1) {
      lVar5 = 0;
    }
    plVar2 = (long *)0x0;
    if (lVar5 != 0) {
      plVar2 = (long *)(lVar5 - *(int *)((long)param_1 + 0x74));
    }
    uVar4 = 5;
    iVar3 = (int)plVar2[9];
    if (iVar3 == 6 || iVar3 == 4) {
LAB_03d574d8:
      *(undefined4 *)(plVar2 + 9) = uVar4;
    }
    else if (iVar3 == 3) {
      lVar5 = plVar2[0xb];
      FUN_038e2f80(lVar5 + 0x110);
      plVar1 = (long *)((long)*(int *)(lVar5 + 0x74) + (long)plVar2);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar5 + 0x70) = *(int *)(lVar5 + 0x70) + -1;
      FUN_038e3040(lVar5 + 0x110);
      uVar4 = 2;
      plVar2[0xb] = 0;
      goto LAB_03d574d8;
    }
    if ((int)plVar2[9] == 5) {
      uVar4 = 7;
LAB_03d57434:
      *(undefined4 *)(plVar2 + 9) = uVar4;
    }
    else if ((int)plVar2[9] == 2) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
      uVar4 = 8;
      goto LAB_03d57434;
    }
    FUN_03d57600(plVar2);
    iVar3 = (int)param_1[0xe];
  }
  if (4 < (int)param_1[9] - 3U) {
    return;
  }
  iVar3 = (int)param_1[9];
  uVar4 = 5;
  if ((iVar3 == 6) || (iVar3 == 4)) {
LAB_03d57590:
    *(undefined4 *)(param_1 + 9) = uVar4;
  }
  else if (iVar3 == 3) {
    lVar5 = param_1[0xb];
    FUN_038e2f80(lVar5 + 0x110);
    plVar2 = (long *)((long)*(int *)(lVar5 + 0x74) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar5 + 0x70) = *(int *)(lVar5 + 0x70) + -1;
    FUN_038e3040(lVar5 + 0x110);
    uVar4 = 2;
    param_1[0xb] = 0;
    goto LAB_03d57590;
  }
  if ((int)param_1[9] == 5) {
    uVar4 = 7;
  }
  else {
    if ((int)param_1[9] != 2) goto LAB_03d575dc;
    (**(code **)(*param_1 + 0x30))(param_1);
    uVar4 = 8;
  }
  *(undefined4 *)(param_1 + 9) = uVar4;
LAB_03d575dc:
  FUN_03d57600(param_1);
  return;
}

