
void FUN_026f66e0(long param_1)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  long *plVar2;
  long *plVar3;
  long lVar4;
  size_t __n;
  int iVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if (*(long *)(param_1 + 0x308) != 0 && *(long *)(param_1 + 0x310) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x338));
    lVar4 = *(long *)(param_1 + 0x308);
    if ((lVar4 != 0) && (piVar8 = *(int **)(param_1 + 0x310), piVar8 != (int *)0x0)) {
      if (1 < *piVar8) {
        lVar4 = FUN_038567d0(piVar8,1);
        iVar5 = *(int *)(lVar4 + 0xc);
        if (iVar5 < 1) {
          FUN_038e2e80(piVar8 + 0x16);
          iVar5 = 0;
        }
        *(int *)(lVar4 + 0xc) = iVar5 + 1;
        lVar4 = *(long *)(param_1 + 0x308);
      }
      FUN_038569c0(lVar4);
    }
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x130);
    puVar1 = puVar10 + *(int *)(param_1 + 0x128);
    do {
      plVar9 = (long *)*puVar10;
      __src = (void *)plVar9[1];
      __dest = (void *)plVar9[2];
      if (__src != (void *)0x0 && __dest != (void *)0x0) {
        __n = (**(code **)(*plVar9 + 0x28))(plVar9);
        memcpy(__dest,__src,__n);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9);
        if (plVar9 != (long *)0x0) {
          plVar3 = (long *)plVar9[1];
          while (plVar3 != plVar9) {
            plVar2 = (long *)plVar3[1];
            plVar7 = plVar2;
            if (*plVar3 != 0) {
              *(long **)(*plVar3 + 8) = plVar2;
              plVar7 = (long *)plVar3[1];
            }
            if (plVar7 != (long *)0x0) {
              *plVar7 = *plVar3;
            }
            *plVar3 = 0;
            plVar3[1] = 0;
            *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
            plVar3[-2] = plVar9[3];
            plVar9[3] = (long)(plVar3 + -2);
            plVar3 = plVar2;
          }
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x60);
    if (lVar6 != 0) {
      if (*(void **)(lVar6 + 0x10) != (void *)0x0 && *(void **)(lVar6 + 0x18) != (void *)0x0) {
        memcpy(*(void **)(lVar6 + 0x18),*(void **)(lVar6 + 0x10),0x74a40);
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_026f69a0;
      }
    }
    lVar6 = *(long *)(lVar4 + 0x68);
    if (((lVar6 != 0) && (*(void **)(lVar6 + 0x10) != (void *)0x0)) &&
       (*(void **)(lVar6 + 0x18) != (void *)0x0)) {
      memcpy(*(void **)(lVar6 + 0x18),*(void **)(lVar6 + 0x10),0x74a40);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_026f69a0;
    }
    lVar6 = *(long *)(lVar4 + 0x70);
    if (((lVar6 != 0) && (*(void **)(lVar6 + 0x10) != (void *)0x0)) &&
       (*(void **)(lVar6 + 0x18) != (void *)0x0)) {
      memcpy(*(void **)(lVar6 + 0x18),*(void **)(lVar6 + 0x10),0x74a40);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_026f69a0;
    }
    lVar6 = *(long *)(lVar4 + 0x78);
    if (((lVar6 != 0) && (*(void **)(lVar6 + 0x10) != (void *)0x0)) &&
       (*(void **)(lVar6 + 0x18) != (void *)0x0)) {
      memcpy(*(void **)(lVar6 + 0x18),*(void **)(lVar6 + 0x10),0x74a40);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_026f69a0;
    }
    lVar6 = *(long *)(lVar4 + 0x80);
    if (((lVar6 != 0) && (*(void **)(lVar6 + 0x10) != (void *)0x0)) &&
       (*(void **)(lVar6 + 0x18) != (void *)0x0)) {
      memcpy(*(void **)(lVar6 + 0x18),*(void **)(lVar6 + 0x10),0x74a40);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_026f69a0;
    }
    lVar6 = *(long *)(lVar4 + 0x88);
    if (((lVar6 != 0) && (*(void **)(lVar6 + 0x10) != (void *)0x0)) &&
       (*(void **)(lVar6 + 0x18) != (void *)0x0)) {
      memcpy(*(void **)(lVar6 + 0x18),*(void **)(lVar6 + 0x10),0x74a40);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_026f69a0;
    }
    lVar6 = *(long *)(lVar4 + 0x90);
    if (((lVar6 != 0) && (*(void **)(lVar6 + 0x10) != (void *)0x0)) &&
       (*(void **)(lVar6 + 0x18) != (void *)0x0)) {
      memcpy(*(void **)(lVar6 + 0x18),*(void **)(lVar6 + 0x10),0x74a40);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_026f69a0;
    }
    lVar4 = *(long *)(lVar4 + 0x98);
    if (((lVar4 != 0) && (*(void **)(lVar4 + 0x10) != (void *)0x0)) &&
       (*(void **)(lVar4 + 0x18) != (void *)0x0)) {
      memcpy(*(void **)(lVar4 + 0x18),*(void **)(lVar4 + 0x10),0x74a40);
    }
  }
LAB_026f69a0:
  if (((*(long *)(param_1 + 0x308) == 0) || (*(long *)(param_1 + 0x310) == 0)) ||
     ((nn::os::UnlockMutex((MutexType *)(param_1 + 0x338)), *(long *)(param_1 + 0x308) == 0 ||
      (*(long *)(param_1 + 0x310) == 0)))) {
    return;
  }
  FUN_038568c0();
  FUN_03856a80(*(undefined8 *)(param_1 + 0x308));
  return;
}

