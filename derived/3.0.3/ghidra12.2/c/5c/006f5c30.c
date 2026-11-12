
void FUN_006f5c30(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  
  bVar3 = (**(code **)(*param_2 + 0x50))(param_2);
  *(byte *)(param_1 + 0x14) = bVar3 & 1;
  uVar4 = (**(code **)(*param_2 + 0x58))(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x48))(param_2);
  if (puVar5 == (undefined4 *)0x0) {
    uVar4 = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *puVar5;
    *(undefined4 *)(param_1 + 0x20) = puVar5[1];
    *(undefined4 *)(param_1 + 0x24) = puVar5[2];
    uVar4 = puVar5[3];
  }
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  plVar6 = (long *)(**(code **)(*param_2 + 0x60))(param_2);
  pvVar8 = *(void **)(param_1 + 0x38);
  (**(code **)(*plVar6 + 0x18))();
  pvVar9 = (void *)plVar6[1];
  if (pvVar8 != pvVar9) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = 0;
    do {
      if (*(char *)(plVar6[1] + lVar7) == '\0') goto LAB_006f5d4c;
      lVar1 = plVar6[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_006f5d4c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_006f5d4c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_006f5d4c:
    iVar2 = (int)lVar7;
    if (*(int *)(param_1 + 0x40) <= (int)lVar7) {
      iVar2 = *(int *)(param_1 + 0x40) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar2);
    *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
  }
  plVar6 = (long *)(**(code **)(*param_2 + 0x68))(param_2);
  pvVar8 = *(void **)(param_1 + 0x90);
  (**(code **)(*plVar6 + 0x18))();
  pvVar9 = (void *)plVar6[1];
  if (pvVar8 != pvVar9) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = 0;
    do {
      if (*(char *)(plVar6[1] + lVar7) == '\0') goto LAB_006f5dfc;
      lVar1 = plVar6[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_006f5dfc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_006f5dfc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_006f5dfc:
    iVar2 = (int)lVar7;
    if (*(int *)(param_1 + 0x98) <= (int)lVar7) {
      iVar2 = *(int *)(param_1 + 0x98) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar2);
    *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
  }
  return;
}

