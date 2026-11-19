
void FUN_03c5d3b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0x48))();
    *(undefined8 *)(param_1 + 0x168) = uVar1;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0x50))();
    *(undefined8 *)(param_1 + 0x170) = uVar1;
  }
  if (*(long *)(param_1 + 0xf8) != param_1 + 0xf0) {
    lVar4 = (long)*(int *)(param_1 + 0x104);
    plVar3 = (long *)(*(long *)(param_1 + 0xf8) - lVar4);
    do {
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x58));
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
    } while (plVar3 != (long *)((param_1 + 0xf0) - lVar4));
  }
  if (*(long *)(param_1 + 0x110) != param_1 + 0x108) {
    lVar4 = (long)*(int *)(param_1 + 0x11c);
    plVar3 = (long *)(*(long *)(param_1 + 0x110) - lVar4);
    do {
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x58));
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
    } while (plVar3 != (long *)((param_1 + 0x108) - lVar4));
  }
  if (*(long *)(param_1 + 0x128) != param_1 + 0x120) {
    lVar4 = (long)*(int *)(param_1 + 0x134);
    plVar3 = (long *)(*(long *)(param_1 + 0x128) - lVar4);
    do {
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x58));
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
    } while (plVar3 != (long *)((param_1 + 0x120) - lVar4));
  }
  if (*(long *)(param_1 + 0x140) != param_1 + 0x138) {
    lVar4 = (long)*(int *)(param_1 + 0x14c);
    plVar3 = (long *)(*(long *)(param_1 + 0x140) - lVar4);
    do {
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x58));
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
    } while (plVar3 != (long *)((param_1 + 0x138) - lVar4));
  }
  if (*(long *)(param_1 + 0x158) != param_1 + 0x150) {
    lVar4 = (long)*(int *)(param_1 + 0x164);
    plVar3 = (long *)(*(long *)(param_1 + 0x158) - lVar4);
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
    } while (plVar3 != (long *)((param_1 + 0x150) - lVar4));
  }
  lVar2 = *(long *)(param_1 + 0x168);
  lVar4 = param_1 + 0x90;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != lVar2)) {
    lVar5 = (long)*(int *)(lVar2 + 0x14);
    plVar3 = (long *)(*(long *)(lVar2 + 8) - lVar5);
    do {
      plVar3[6] = lVar4;
      *(undefined1 *)(plVar3 + 8) = 1;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar5 + 8) - lVar5);
    } while (plVar3 != (long *)(lVar2 - lVar5));
  }
  lVar2 = *(long *)(param_1 + 0x170);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != lVar2)) {
    lVar5 = (long)*(int *)(lVar2 + 0x14);
    plVar3 = (long *)(*(long *)(lVar2 + 8) - lVar5);
    do {
      plVar3[6] = lVar4;
      *(undefined1 *)(plVar3 + 8) = 1;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar5 + 8) - lVar5);
    } while (plVar3 != (long *)(lVar2 - lVar5));
  }
  if (*(long *)(param_1 + 0x180) != param_1 + 0x178) {
    lVar2 = (long)*(int *)(param_1 + 0x18c);
    plVar3 = (long *)(*(long *)(param_1 + 0x180) - lVar2);
    do {
      plVar3[6] = lVar4;
      *(undefined1 *)(plVar3 + 8) = 1;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar3 = (long *)(*(long *)((long)plVar3 + lVar2 + 8) - lVar2);
    } while (plVar3 != (long *)((param_1 + 0x178) - lVar2));
  }
  if (*(long *)(param_1 + 0x198) != param_1 + 400) {
    lVar2 = (long)*(int *)(param_1 + 0x1a4);
    lVar4 = *(long *)(param_1 + 0x198) - lVar2;
    do {
      if (*(long *)(lVar4 + 0x90) != lVar4 + 0x88) {
        lVar5 = (long)*(int *)(lVar4 + 0x9c);
        plVar3 = (long *)(*(long *)(lVar4 + 0x90) - lVar5);
        do {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          plVar3 = (long *)(*(long *)((long)plVar3 + lVar5 + 8) - lVar5);
        } while (plVar3 != (long *)((lVar4 + 0x88) - lVar5));
      }
      lVar4 = *(long *)(lVar4 + lVar2 + 8) - lVar2;
    } while (lVar4 != (param_1 + 400) - lVar2);
  }
  return;
}

