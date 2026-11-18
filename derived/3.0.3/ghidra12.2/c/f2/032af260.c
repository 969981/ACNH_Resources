
void FUN_032af260(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x3a8);
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 0x20);
      plVar4 = (long *)*puVar5;
      if ((plVar4 != (long *)0x0) &&
         ((plVar4 == (long *)(param_1 + 0x3c0) || (plVar4 == (long *)(param_1 + 0x3b8))))) {
        lVar3 = *(long *)(lVar2 + 0x28);
        lVar1 = *(long *)(lVar2 + 0x30);
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *puVar5 = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        if ((undefined8 *)*plVar4 == puVar5) {
          *plVar4 = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 8) = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar1;
        }
      }
    }
    if (*(long *)(param_1 + 0x3b0) == lVar2) {
      lVar2 = 0;
      lVar3 = *(long *)(param_1 + 0x3c0);
      if (*(long *)(param_1 + 0x3c0) != 0) {
        do {
          lVar2 = lVar3;
          lVar3 = *(long *)(lVar2 + 0x10);
        } while (lVar3 != 0);
        lVar2 = lVar2 + -0x20;
      }
      *(long *)(param_1 + 0x3b0) = lVar2;
      return;
    }
    if (*(long *)(param_1 + 0x3a8) != lVar2) {
      return;
    }
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x3b8);
    if (*(long *)(param_1 + 0x3b8) == 0) goto LAB_032af3d0;
    do {
      lVar2 = lVar3;
      lVar3 = *(long *)(lVar2 + 0x10);
    } while (*(long *)(lVar2 + 0x10) != 0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x3b0);
    if (lVar2 == 0) {
LAB_032af2c8:
      lVar2 = 0;
      lVar3 = *(long *)(param_1 + 0x3c0);
      if (*(long *)(param_1 + 0x3c0) != 0) {
        do {
          lVar2 = lVar3;
          lVar3 = *(long *)(lVar2 + 0x10);
        } while (lVar3 != 0);
        lVar2 = lVar2 + -0x20;
      }
      *(long *)(param_1 + 0x3b0) = lVar2;
      return;
    }
    puVar5 = (undefined8 *)(lVar2 + 0x20);
    plVar4 = (long *)*puVar5;
    if ((plVar4 == (long *)0x0) ||
       ((plVar4 != (long *)(param_1 + 0x3c0) && (plVar4 != (long *)(param_1 + 0x3b8)))))
    goto LAB_032af2c8;
    lVar3 = *(long *)(lVar2 + 0x28);
    lVar1 = *(long *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *puVar5 = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    if ((undefined8 *)*plVar4 == puVar5) {
      *plVar4 = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar1;
    }
    if (*(long *)(param_1 + 0x3b0) == lVar2) goto LAB_032af2c8;
    if (*(long *)(param_1 + 0x3a8) != lVar2) {
      return;
    }
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x3b8);
    if (*(long *)(param_1 + 0x3b8) == 0) goto LAB_032af3d0;
    do {
      lVar2 = lVar3;
      lVar3 = *(long *)(lVar2 + 0x10);
    } while (*(long *)(lVar2 + 0x10) != 0);
  }
  lVar2 = lVar2 + -0x20;
LAB_032af3d0:
  *(long *)(param_1 + 0x3a8) = lVar2;
  return;
}

