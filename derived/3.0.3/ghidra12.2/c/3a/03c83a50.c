
void FUN_03c83a50(long *param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  iVar3 = *(int *)((long)param_1 + 0x24);
  iVar2 = (int)param_1[5];
  *(undefined2 *)(param_1 + 4) = 1;
  *(int *)((long)param_1 + 0x24) = iVar2;
  *(int *)(param_1 + 7) = (int)param_1[6];
  if (iVar3 != iVar2) {
    *(int *)(param_1 + 8) = (int)param_1[6];
  }
  if (*(int *)((long)param_1 + 0x2c) == iVar2) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  }
  (**(code **)(*param_1 + 0x40))(param_1,iVar3,iVar2,param_2 & 1);
  plVar1 = param_1 + 9;
  if ((long *)param_1[10] != plVar1) {
    lVar5 = (long)*(int *)((long)param_1 + 0x5c);
    plVar4 = (long *)(param_1[10] - lVar5);
    do {
      (**(code **)(*plVar4 + 0x10))(plVar4,iVar3,*(undefined4 *)((long)param_1 + 0x24),param_2 & 1);
      plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) - lVar5);
    } while (plVar4 != (long *)((long)plVar1 - lVar5));
  }
  iVar3 = (**(code **)(*param_1 + 0x60))
                    (param_1,iVar3,*(undefined4 *)((long)param_1 + 0x24),
                     *(undefined4 *)((long)param_1 + 0x2c));
  if (iVar3 != -0x80000000) {
    *(undefined1 *)(param_1 + 4) = 0;
    *(int *)(param_1 + 5) = iVar3;
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_1 + 0x34);
    *(int *)((long)param_1 + 0x34) = (int)param_1[6];
    (**(code **)(*param_1 + 0x38))(param_1,*(undefined4 *)((long)param_1 + 0x24),iVar3);
    if ((long *)param_1[10] != plVar1) {
      lVar5 = (long)*(int *)((long)param_1 + 0x5c);
      plVar4 = (long *)(param_1[10] - lVar5);
      do {
        (**(code **)(*plVar4 + 8))(plVar4,*(undefined4 *)((long)param_1 + 0x24),iVar3);
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) - lVar5);
      } while (plVar4 != (long *)((long)plVar1 - lVar5));
    }
  }
  return;
}

