
void FUN_02ccbe14(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  FUN_03868c7c(param_1,param_1[0x3854]);
  FUN_03868c7c(param_1,param_1[0x3855]);
  lVar3 = (**(code **)(*param_1 + 0x270))(param_1);
  if (*(int *)(lVar3 + 0x48) - 3U < 5) {
    iVar2 = *(int *)(lVar3 + 0x48);
    if (iVar2 == 6 || iVar2 == 4) {
      uVar4 = 5;
    }
    else {
      if (iVar2 != 3) {
        return;
      }
      lVar5 = *(long *)(lVar3 + 0x58);
      FUN_038e2f80(lVar5 + 0x110);
      plVar1 = (long *)(*(int *)(lVar5 + 0x74) + lVar3);
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
      *(undefined8 *)(lVar3 + 0x58) = 0;
    }
    *(undefined4 *)(lVar3 + 0x48) = uVar4;
  }
  return;
}

