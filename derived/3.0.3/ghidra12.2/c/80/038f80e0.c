
void FUN_038f80e0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if ((*(uint *)(*(long *)(param_1 + 8) + 0xd0) & 1) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x38;
    nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  }
  plVar8 = *(long **)(param_2 + 0x20);
  plVar10 = plVar8 + 3;
  lVar2 = *plVar10;
  plVar3 = plVar8;
  if (lVar2 != 0) {
    plVar3 = plVar10;
    if (lVar2 != param_2) {
      do {
        lVar4 = lVar2;
        lVar2 = *(long *)(lVar4 + 0x30);
        if (lVar2 == 0) goto LAB_038f8160;
      } while (lVar2 != param_2);
      plVar3 = (long *)(lVar4 + 0x30);
    }
    *plVar3 = *(long *)(param_2 + 0x30);
LAB_038f8160:
    plVar3 = *(long **)(param_2 + 0x20);
    if (plVar3 == (long *)0x0) {
      lVar2 = 0x100000;
      goto LAB_038f8180;
    }
  }
  lVar2 = (*(long *)(param_2 + 8) - plVar3[2]) + 0x100000;
LAB_038f8180:
  (**(code **)(*(long *)plVar8[1] + 0x38))((long *)plVar8[1],lVar2);
  uVar1 = (**(code **)(*(long *)plVar8[1] + 0x90))();
  if (((uVar1 & 1) != 0) && ((*(uint *)(plVar8 + 0x26) & 1) == 0)) {
    plVar3 = (long *)(param_1 + 0x28);
    plVar6 = (long *)0x0;
    plVar7 = plVar3;
    do {
      plVar5 = plVar6;
      plVar6 = (long *)*plVar7;
      plVar7 = plVar6 + 4;
    } while (plVar8 != plVar6);
    if (plVar5 == (long *)0x0) {
      *plVar3 = *(long *)(*plVar3 + 0x20);
    }
    else {
      plVar5[4] = plVar8[4];
    }
    if (plVar8 == *(long **)(param_1 + 0x30)) {
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar5 != (long *)0x0) {
        plVar3 = plVar5;
      }
      *(long **)(param_1 + 0x30) = plVar3;
      lVar2 = *plVar10;
    }
    else {
      lVar2 = *plVar10;
    }
    while (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      lVar4 = *(long *)(lVar2 + 0x30);
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined2 *)(lVar2 + 0x2a) = 0;
      *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) & 0xfe;
      lVar2 = lVar4;
    }
    plVar8[3] = 0;
    if ((int)plVar8[0x25] < 0) {
      (**(code **)PTR_DAT_04bcf348)(plVar8 + 5);
      *(undefined4 *)((long)plVar8 + 300) = 0;
      *(uint *)(plVar8 + 0x25) = *(uint *)(plVar8 + 0x25) & 0x7fffffff;
      plVar3 = (long *)plVar8[1];
    }
    else {
      plVar3 = (long *)plVar8[1];
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
      plVar8[1] = 0;
    }
    if (plVar8[2] != 0) {
      (**(code **)(**(long **)(*plVar8 + 8) + 0x38))();
      plVar8[2] = 0;
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),plVar8);
  }
  if (lVar9 == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
  return;
}

