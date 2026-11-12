
void FUN_009391e0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04928e48;
  puVar3 = PTR_DAT_04bb27c8;
  if (*(char *)(param_1 + 0x14) == '\0') goto LAB_0093929c;
  if (*(char *)(param_1 + 3) != '\0') {
    iVar2 = *(int *)((long)param_1 + 0xa4);
    if (iVar2 == 3) {
      lVar4 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa0);
    }
    else if (iVar2 == 2) {
      lVar4 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x98);
    }
    else {
      if (iVar2 != 1) goto LAB_00939254;
      lVar4 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
    }
    if (lVar4 != 0) {
      FUN_0096e7b0(lVar4,param_1 + 4);
    }
  }
LAB_00939254:
  if (*(char *)(param_1 + 0x14) != '\0') {
    lVar4 = *(long *)puVar3;
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x1164) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x1160) = *(int *)(lVar4 + 0x1160) + -1;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
LAB_0093929c:
  param_1[4] = &PTR_FUN_0498d548;
  return;
}

