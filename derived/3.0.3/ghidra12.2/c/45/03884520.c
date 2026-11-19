
void FUN_03884520(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x218));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0xb0);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xa8) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar5 = puVar4;
      *(undefined8 **)(param_1 + 0xb0) = puVar5;
      puVar4 = puVar5;
    } while (lVar3 < *(int *)(param_1 + 0xa0));
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  plVar2 = *(long **)(param_1 + 200);
  while (plVar2 != (long *)(param_1 + 0xc0)) {
    plVar1 = (long *)plVar2[1];
    plVar6 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar6 = (long *)plVar2[1];
    }
    if (plVar6 != (long *)0x0) {
      *plVar6 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
    plVar2[-3] = *(long *)(param_1 + 0xd8);
    *(long **)(param_1 + 0xd8) = plVar2 + -3;
    plVar2 = plVar1;
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  FUN_0388d180(*(undefined8 *)(param_1 + 0xf8));
  plVar2 = *(long **)(param_1 + 0x108);
  while (plVar2 != (long *)(param_1 + 0x100)) {
    plVar1 = (long *)plVar2[1];
    plVar6 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar6 = (long *)plVar2[1];
    }
    if (plVar6 != (long *)0x0) {
      *plVar6 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -1;
    plVar2[-0xd] = *(long *)(param_1 + 0x118);
    *(long **)(param_1 + 0x118) = plVar2 + -0xd;
    plVar2 = plVar1;
  }
  plVar2 = *(long **)(param_1 + 0x138);
  while (plVar2 != (long *)(param_1 + 0x130)) {
    plVar1 = (long *)plVar2[1];
    plVar6 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar6 = (long *)plVar2[1];
    }
    if (plVar6 != (long *)0x0) {
      *plVar6 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + -1;
    plVar2[-0xd] = *(long *)(param_1 + 0x148);
    *(long **)(param_1 + 0x148) = plVar2 + -0xd;
    plVar2 = plVar1;
  }
  plVar2 = *(long **)(param_1 + 0x168);
  while (plVar2 != (long *)(param_1 + 0x160)) {
    plVar1 = (long *)plVar2[1];
    plVar6 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar6 = (long *)plVar2[1];
    }
    if (plVar6 != (long *)0x0) {
      *plVar6 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
    plVar2[-0xd] = *(long *)(param_1 + 0x178);
    *(long **)(param_1 + 0x178) = plVar2 + -0xd;
    plVar2 = plVar1;
  }
  if (0 < *(int *)(param_1 + 0x238)) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x248);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x240) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar5 = puVar4;
      *(undefined8 **)(param_1 + 0x248) = puVar5;
      puVar4 = puVar5;
    } while (lVar3 < *(int *)(param_1 + 0x238));
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0xd;
  *(undefined1 *)(param_1 + 0x25c) = 0;
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  **(undefined2 **)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x26b) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x218));
  return;
}

