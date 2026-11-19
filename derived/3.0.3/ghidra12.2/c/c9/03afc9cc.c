
void FUN_03afc9cc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x170);
  *(undefined1 *)(param_2 + 0x20) = 0;
  if (lVar3 != 0) {
    *(undefined8 *)(param_2 + 0x170) = 0;
    if (*(long *)(param_2 + 0x158) != 0) {
      *(undefined8 *)(*(long *)(param_2 + 0x158) + 8) = *(undefined8 *)(param_2 + 0x160);
    }
    if (*(undefined8 **)(param_2 + 0x160) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0x158);
    }
    *(undefined8 *)(param_2 + 0x158) = 0;
    *(undefined8 *)(param_2 + 0x160) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *(long *)(param_2 + 0x170);
    if (lVar3 != 0) {
      *(undefined8 *)(param_2 + 0x170) = 0;
      if (*(long *)(param_2 + 0x158) != 0) {
        *(undefined8 *)(*(long *)(param_2 + 0x158) + 8) = *(undefined8 *)(param_2 + 0x160);
      }
      if (*(undefined8 **)(param_2 + 0x160) != (undefined8 *)0x0) {
        **(undefined8 **)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0x158);
      }
      *(undefined8 *)(param_2 + 0x158) = 0;
      *(undefined8 *)(param_2 + 0x160) = 0;
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    }
  }
  *(long **)(param_2 + 0x170) = param_1;
  lVar3 = *param_1;
  *param_1 = param_2 + 0x158;
  *(long *)(param_2 + 0x158) = lVar3;
  *(long **)(param_2 + 0x160) = param_1;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = param_2 + 0x158;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  if (*(long *)(param_2 + 0xe0) != 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 400);
  plVar1 = param_1 + 6;
  puVar2 = (undefined8 *)(param_2 + 0x178);
  if (lVar3 != 0) {
    *(undefined8 *)(param_2 + 400) = 0;
    if (*(long *)(param_2 + 0x178) != 0) {
      *(undefined8 *)(*(long *)(param_2 + 0x178) + 8) = *(undefined8 *)(param_2 + 0x180);
    }
    if (*(undefined8 **)(param_2 + 0x180) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x180) = *puVar2;
    }
    *puVar2 = 0;
    *(undefined8 *)(param_2 + 0x180) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  *(long **)(param_2 + 400) = plVar1;
  lVar3 = *plVar1;
  *plVar1 = (long)puVar2;
  *(long *)(param_2 + 0x178) = lVar3;
  *(long **)(param_2 + 0x180) = plVar1;
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 8) = puVar2;
  }
  *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  *(long **)(param_2 + 0xe0) = param_1;
  return;
}

