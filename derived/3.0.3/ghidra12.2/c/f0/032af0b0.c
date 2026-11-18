
void FUN_032af0b0(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if ((param_3 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x3a8);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x3b0);
  }
  if (lVar2 == param_2) {
    return;
  }
  plVar3 = (long *)(param_2 + 0x20);
  plVar4 = (long *)*plVar3;
  if ((plVar4 != (long *)0x0) &&
     ((plVar4 == (long *)(param_1 + 0x3c0) || (plVar4 == (long *)(param_1 + 0x3b8))))) {
    lVar2 = *(long *)(param_2 + 0x28);
    lVar5 = *(long *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *plVar3 = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    if ((long *)*plVar4 == plVar3) {
      *plVar4 = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar5;
    }
  }
  if (*(long *)(param_1 + 0x3b0) == param_2) {
    lVar2 = 0;
    lVar5 = *(long *)(param_1 + 0x3c0);
    if (*(long *)(param_1 + 0x3c0) != 0) {
      do {
        lVar2 = lVar5;
        lVar5 = *(long *)(lVar2 + 0x10);
      } while (lVar5 != 0);
      lVar2 = lVar2 + -0x20;
    }
    *(long *)(param_1 + 0x3b0) = lVar2;
    if (*plVar3 != 0) goto LAB_032af15c;
LAB_032af19c:
    if ((param_3 & 1) == 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x3b8);
      if (*(undefined8 **)(param_1 + 0x3b8) == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)(param_1 + 0x3b8);
        *puVar7 = plVar3;
      }
      else {
        do {
          puVar7 = puVar1;
          puVar1 = (undefined8 *)puVar7[2];
        } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
        puVar7[2] = plVar3;
        *(undefined8 **)(param_2 + 0x28) = puVar7;
        puVar7 = (undefined8 *)*puVar7;
      }
      *plVar3 = (long)puVar7;
      lVar2 = *(long *)(param_1 + 0x3b8);
joined_r0x032af164:
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0x3a8) = 0;
        return;
      }
      do {
        lVar5 = lVar2;
        lVar2 = *(long *)(lVar5 + 0x10);
      } while (lVar2 != 0);
      *(long *)(param_1 + 0x3a8) = lVar5 + -0x20;
      return;
    }
    plVar4 = *(long **)(param_1 + 0x3c0);
    if (*(long **)(param_1 + 0x3c0) != (long *)0x0) {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)plVar6[2];
      } while ((long *)plVar6[2] != (long *)0x0);
      plVar6[2] = (long)plVar3;
      *(long **)(param_2 + 0x28) = plVar6;
      *plVar3 = *plVar6;
      goto LAB_032af1cc;
    }
    *(undefined8 *)(param_1 + 0x3c0) = plVar3;
    *plVar3 = param_1 + 0x3c0;
    lVar5 = *(long *)(param_1 + 0x3c0);
    if (*(long *)(param_1 + 0x3c0) == 0) {
      lVar2 = 0;
      goto LAB_032af1e4;
    }
  }
  else {
    if (*(long *)(param_1 + 0x3a8) == param_2) {
      lVar2 = 0;
      lVar5 = *(long *)(param_1 + 0x3b8);
      if (*(long *)(param_1 + 0x3b8) != 0) {
        do {
          lVar2 = lVar5;
          lVar5 = *(long *)(lVar2 + 0x10);
        } while (lVar5 != 0);
        lVar2 = lVar2 + -0x20;
      }
      *(long *)(param_1 + 0x3a8) = lVar2;
    }
    if (*plVar3 == 0) goto LAB_032af19c;
LAB_032af15c:
    if ((param_3 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x3b8);
      goto joined_r0x032af164;
    }
LAB_032af1cc:
    lVar2 = 0;
    lVar5 = *(long *)(param_1 + 0x3c0);
    if (*(long *)(param_1 + 0x3c0) == 0) goto LAB_032af1e4;
  }
  do {
    lVar2 = lVar5;
    lVar5 = *(long *)(lVar2 + 0x10);
  } while (lVar5 != 0);
  lVar2 = lVar2 + -0x20;
LAB_032af1e4:
  *(long *)(param_1 + 0x3b0) = lVar2;
  return;
}

