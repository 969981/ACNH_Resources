
void FUN_03c68250(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *local_68;
  long lStack_60;
  long *local_58;
  
  uVar6 = *(uint *)(param_1 + 0xb);
  plVar1 = param_1 + 9;
  if (0 < (int)uVar6) {
    uVar4 = 0;
    do {
      lVar5 = *plVar1;
      if (uVar4 < uVar6) {
        iVar2 = 0;
        if ((int)param_1[10] <= (int)(uVar4 + *(int *)((long)param_1 + 0x54))) {
          iVar2 = (int)param_1[10];
        }
        lVar5 = lVar5 + (long)(int)(uVar4 + (*(int *)((long)param_1 + 0x54) - iVar2)) * 0x20;
      }
      lVar7 = *(long *)(lVar5 + 0x10);
      if (lVar7 != 0) {
        plVar3 = (long *)(*(int *)(lVar7 + 0x24) + lVar5);
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        uVar6 = *(uint *)(param_1 + 0xb);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar6);
  }
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  lVar7 = param_1[6];
  local_68 = PTR_DAT_04bd3940 + 0x10;
  plVar3 = param_1 + 3;
  lStack_60 = lVar7;
  local_58 = plVar1;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  lVar5 = param_1[4];
  (**(code **)(*plVar3 + 0x18))(plVar3);
  uVar8 = 0;
  do {
    if (*(char *)(param_1[4] + uVar8) == '\0') goto LAB_03c683a0;
    lVar10 = param_1[4] + uVar8;
    if (*(char *)(lVar10 + 1) == '\0') {
      uVar8 = uVar8 + 1;
      goto LAB_03c683a0;
    }
    if (*(char *)(lVar10 + 2) == '\0') {
      uVar8 = uVar8 + 2;
      goto LAB_03c683a0;
    }
    uVar8 = uVar8 + 3;
  } while (uVar8 != 0x80001);
  uVar8 = 0;
LAB_03c683a0:
  if (*(long *)(lVar7 + 8) != lVar7) {
    lVar9 = (long)*(int *)(lVar7 + 0x14);
    lVar10 = *(long *)(lVar7 + 8) - lVar9;
    do {
      plVar3 = *(long **)(lVar10 + 0x40);
      if (((plVar3 != (long *)0x0) || (plVar3 = *(long **)(lVar10 + 0x30), plVar3 != (long *)0x0))
         && (plVar3 = (long *)(**(code **)(*plVar3 + 0x40))
                                        (plVar3,lVar5,uVar8 & 0xffffffff,&local_68),
            plVar3 != (long *)0x0)) {
        lVar5 = (**(code **)(*plVar3 + 0x28))();
        goto LAB_03c6841c;
      }
      lVar10 = *(long *)(lVar10 + lVar9 + 8) - lVar9;
    } while (lVar10 != lVar7 - lVar9);
  }
  lVar5 = 0;
LAB_03c6841c:
  uVar6 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar6) {
    uVar4 = 0;
    do {
      lVar7 = *plVar1;
      if (uVar4 < uVar6) {
        iVar2 = 0;
        if ((int)param_1[10] <= (int)(uVar4 + *(int *)((long)param_1 + 0x54))) {
          iVar2 = (int)param_1[10];
        }
        lVar7 = lVar7 + (long)(int)(uVar4 + (*(int *)((long)param_1 + 0x54) - iVar2)) * 0x20;
      }
      *(undefined1 *)(lVar7 + 0x18) = 0;
      uVar4 = uVar4 + 1;
      uVar6 = *(uint *)(param_1 + 0xb);
    } while ((int)uVar4 < (int)uVar6);
  }
  if (lVar5 != param_1[7]) {
    param_1[7] = lVar5;
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

