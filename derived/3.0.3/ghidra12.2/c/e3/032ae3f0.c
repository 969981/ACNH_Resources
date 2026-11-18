
void FUN_032ae3f0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bc8ee8;
  plVar2 = param_1 + 4;
  plVar4 = (long *)*plVar2;
  lVar3 = *(long *)PTR_DAT_04bc8ee8;
  if ((plVar4 != (long *)0x0) &&
     (plVar4 == (long *)(lVar3 + 0x3c0) || plVar4 == (long *)(lVar3 + 0x3b8))) {
    lVar6 = param_1[5];
    lVar5 = param_1[6];
    param_1[6] = 0;
    *plVar2 = 0;
    param_1[5] = 0;
    if ((long *)*plVar4 == plVar2) {
      *plVar4 = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar5;
    }
  }
  if (*(long **)(lVar3 + 0x3b0) == param_1) {
    lVar6 = 0;
    lVar5 = *(long *)(lVar3 + 0x3c0);
    if (*(long *)(lVar3 + 0x3c0) != 0) {
      do {
        lVar6 = lVar5;
        lVar5 = *(long *)(lVar6 + 0x10);
      } while (lVar5 != 0);
      lVar6 = lVar6 + -0x20;
    }
    *(long *)(lVar3 + 0x3b0) = lVar6;
  }
  else if (*(long **)(lVar3 + 0x3a8) == param_1) {
    lVar6 = 0;
    lVar5 = *(long *)(lVar3 + 0x3b8);
    if (*(long *)(lVar3 + 0x3b8) != 0) {
      do {
        lVar6 = lVar5;
        lVar5 = *(long *)(lVar6 + 0x10);
      } while (lVar5 != 0);
      lVar6 = lVar6 + -0x20;
    }
    *(long *)(lVar3 + 0x3a8) = lVar6;
  }
  if ((*(byte *)(param_1 + 0x39) >> 3 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)puVar1;
  if (*(long **)(lVar3 + 0x3b0) == param_1) {
    plVar4 = (long *)*plVar2;
    if ((plVar4 == (long *)0x0) ||
       ((plVar4 != (long *)(lVar3 + 0x3c0) && (plVar4 != (long *)(lVar3 + 0x3b8))))) {
LAB_032ae558:
      lVar6 = 0;
      lVar5 = *(long *)(lVar3 + 0x3c0);
      if (*(long *)(lVar3 + 0x3c0) != 0) {
        do {
          lVar6 = lVar5;
          lVar5 = *(long *)(lVar6 + 0x10);
        } while (lVar5 != 0);
        lVar6 = lVar6 + -0x20;
      }
      *(long *)(lVar3 + 0x3b0) = lVar6;
    }
    else {
      lVar6 = param_1[5];
      lVar5 = param_1[6];
      param_1[6] = 0;
      *plVar2 = 0;
      param_1[5] = 0;
      if ((long *)*plVar4 == plVar2) {
        *plVar4 = lVar5;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 8) = lVar6;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x10) = lVar5;
      }
      if (*(long **)(lVar3 + 0x3b0) == param_1) goto LAB_032ae558;
      if (*(long **)(lVar3 + 0x3a8) == param_1) {
        lVar6 = 0;
        lVar5 = *(long *)(lVar3 + 0x3b8);
        if (*(long *)(lVar3 + 0x3b8) != 0) {
          do {
            lVar6 = lVar5;
            lVar5 = *(long *)(lVar6 + 0x10);
          } while (lVar5 != 0);
          lVar6 = lVar6 + -0x20;
        }
        *(long *)(lVar3 + 0x3a8) = lVar6;
      }
    }
    lVar3 = *(long *)puVar1;
  }
  if (*(long **)(lVar3 + 0x3a8) == param_1) {
    plVar4 = (long *)*plVar2;
    if ((plVar4 != (long *)0x0) &&
       (plVar4 == (long *)(lVar3 + 0x3c0) || plVar4 == (long *)(lVar3 + 0x3b8))) {
      lVar6 = param_1[5];
      lVar5 = param_1[6];
      param_1[6] = 0;
      *plVar2 = 0;
      param_1[5] = 0;
      if ((long *)*plVar4 == plVar2) {
        *plVar4 = lVar5;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 8) = lVar6;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x10) = lVar5;
      }
    }
    if (*(long **)(lVar3 + 0x3b0) == param_1) {
      lVar6 = 0;
      lVar5 = *(long *)(lVar3 + 0x3c0);
      if (*(long *)(lVar3 + 0x3c0) != 0) {
        do {
          lVar6 = lVar5;
          lVar5 = *(long *)(lVar6 + 0x10);
        } while (lVar5 != 0);
        lVar6 = lVar6 + -0x20;
      }
      *(long *)(lVar3 + 0x3b0) = lVar6;
    }
    else if (*(long **)(lVar3 + 0x3a8) == param_1) {
      lVar6 = 0;
      lVar5 = *(long *)(lVar3 + 0x3b8);
      if (*(long *)(lVar3 + 0x3b8) != 0) {
        do {
          lVar6 = lVar5;
          lVar5 = *(long *)(lVar6 + 0x10);
        } while (lVar5 != 0);
        lVar6 = lVar6 + -0x20;
      }
      *(long *)(lVar3 + 0x3a8) = lVar6;
    }
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      lVar6 = param_1[3];
      goto LAB_032ae634;
    }
  }
  else {
    lVar6 = param_1[3];
    if (*(long **)(lVar3 + 8) == param_1) {
      if (lVar6 == 0) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      else {
        *(long *)(lVar3 + 8) = lVar6;
        *(undefined8 *)(param_1[3] + 0x10) = 0;
      }
      goto LAB_032ae68c;
    }
    lVar3 = param_1[2];
LAB_032ae634:
    *(long *)(lVar3 + 0x18) = lVar6;
  }
  if (param_1[3] != 0) {
    *(long *)(param_1[3] + 0x10) = param_1[2];
  }
LAB_032ae68c:
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

