
void FUN_03b6d9c0(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x38);
    lVar9 = (long)*(int *)(param_1 + 0x30) << 3;
    do {
      plVar3 = (long *)(**(code **)(*(long *)*puVar8 + 0x20))();
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))();
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_03b6e5e4();
  }
  if (DAT_05aebc00 != '\0') {
    if (*(char *)(param_1 + 0x60) == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      lVar9 = (long)*(int *)(param_1 + 0x30) << 3;
      do {
        lVar4 = (**(code **)(*(long *)*puVar8 + 0x20))();
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0xc) != -1)) {
          return;
        }
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    if ((*(long **)(param_1 + 0x28) != (long *)0x0) &&
       (uVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))(), (uVar5 & 1) == 0)) {
      return;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar3 = *(long **)(param_1 + 0x38);
      lVar9 = (long)*(int *)(param_1 + 0x30) << 3;
      do {
        lVar4 = (**(code **)(*(long *)*plVar3 + 0x20))();
        if (lVar4 != 0) {
          *(undefined1 *)(*plVar3 + 8) = 0;
        }
        plVar3 = plVar3 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    goto LAB_03b6dc0c;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x38);
    lVar9 = (long)*(int *)(param_1 + 0x30) << 3;
    do {
      lVar4 = (**(code **)(*(long *)*puVar8 + 0x18))();
      if (lVar4 != 0) {
        plVar3 = (long *)(**(code **)(*(long *)*puVar8 + 0x18))();
        uVar5 = (**(code **)(*plVar3 + 0x30))();
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
          plVar3 = *(long **)(param_1 + 0x28);
          goto joined_r0x03b6dae8;
        }
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  uVar7 = 1;
  plVar3 = *(long **)(param_1 + 0x28);
joined_r0x03b6dae8:
  if ((plVar3 == (long *)0x0) || (*(char *)((long)plVar3 + 0x74) == '\0')) {
    if (uVar7 == 0) {
      return;
    }
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x38))();
    if ((uVar7 & uVar2) != 1) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x28);
  }
  if ((char)plVar3[0x24] == '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 3) {
      uVar6 = 2;
    }
    else if (iVar1 == 2) {
      uVar6 = 1;
    }
    else {
      if (iVar1 != 1) goto LAB_03b6dbc8;
      uVar6 = 0;
    }
    FUN_003cd79c(uVar6);
  }
  else {
    FUN_003cd7f4();
  }
LAB_03b6dbc8:
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar3 = *(long **)(param_1 + 0x38);
    lVar9 = (long)*(int *)(param_1 + 0x30) << 3;
    do {
      lVar4 = (**(code **)(*(long *)*plVar3 + 0x18))();
      if (lVar4 != 0) {
        *(undefined1 *)(*plVar3 + 8) = 0;
      }
      plVar3 = plVar3 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
LAB_03b6dc0c:
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  return;
}

