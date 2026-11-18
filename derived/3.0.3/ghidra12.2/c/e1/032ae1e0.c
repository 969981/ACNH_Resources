
void FUN_032ae1e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = DAT_0572b998;
  if ((*(byte *)(param_1 + 0x39) >> 3 & 1) != 0) {
    return;
  }
  if (*(long **)(DAT_0572b998 + 0x3b0) == param_1) {
    plVar5 = param_1 + 4;
    plVar2 = (long *)*plVar5;
    if ((plVar2 != (long *)0x0) &&
       (plVar2 == (long *)(DAT_0572b998 + 0x3c0) || plVar2 == (long *)(DAT_0572b998 + 0x3b8))) {
      lVar4 = param_1[5];
      lVar3 = param_1[6];
      param_1[6] = 0;
      *plVar5 = 0;
      param_1[5] = 0;
      if ((long *)*plVar2 == plVar5) {
        *plVar2 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*(long **)(lVar1 + 0x3b0) != param_1) {
        if (*(long **)(lVar1 + 0x3a8) == param_1) {
          lVar4 = 0;
          lVar3 = *(long *)(lVar1 + 0x3b8);
          if (*(long *)(lVar1 + 0x3b8) != 0) {
            do {
              lVar4 = lVar3;
              lVar3 = *(long *)(lVar4 + 0x10);
            } while (lVar3 != 0);
            lVar4 = lVar4 + -0x20;
          }
          *(long *)(lVar1 + 0x3a8) = lVar4;
        }
        goto LAB_032ae2c8;
      }
    }
    lVar4 = 0;
    lVar3 = *(long *)(lVar1 + 0x3c0);
    if (*(long *)(lVar1 + 0x3c0) != 0) {
      do {
        lVar4 = lVar3;
        lVar3 = *(long *)(lVar4 + 0x10);
      } while (lVar3 != 0);
      lVar4 = lVar4 + -0x20;
    }
    *(long *)(lVar1 + 0x3b0) = lVar4;
  }
LAB_032ae2c8:
  lVar1 = DAT_0572b998;
  if (*(long **)(DAT_0572b998 + 0x3a8) == param_1) {
    plVar5 = param_1 + 4;
    plVar2 = (long *)*plVar5;
    if ((plVar2 != (long *)0x0) &&
       (plVar2 == (long *)(DAT_0572b998 + 0x3c0) || plVar2 == (long *)(DAT_0572b998 + 0x3b8))) {
      lVar4 = param_1[5];
      lVar3 = param_1[6];
      param_1[6] = 0;
      *plVar5 = 0;
      param_1[5] = 0;
      if ((long *)*plVar2 == plVar5) {
        *plVar2 = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
    }
    if (*(long **)(lVar1 + 0x3b0) == param_1) {
      lVar4 = 0;
      lVar3 = *(long *)(lVar1 + 0x3c0);
      if (*(long *)(lVar1 + 0x3c0) != 0) {
        do {
          lVar4 = lVar3;
          lVar3 = *(long *)(lVar4 + 0x10);
        } while (lVar3 != 0);
        lVar4 = lVar4 + -0x20;
      }
      *(long *)(lVar1 + 0x3b0) = lVar4;
    }
    else if (*(long **)(lVar1 + 0x3a8) == param_1) {
      lVar4 = 0;
      lVar3 = *(long *)(lVar1 + 0x3b8);
      if (*(long *)(lVar1 + 0x3b8) != 0) {
        do {
          lVar4 = lVar3;
          lVar3 = *(long *)(lVar4 + 0x10);
        } while (lVar3 != 0);
        lVar4 = lVar4 + -0x20;
      }
      *(long *)(lVar1 + 0x3a8) = lVar4;
    }
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      lVar4 = param_1[3];
      goto LAB_032ae384;
    }
  }
  else {
    lVar4 = param_1[3];
    if (*(long **)(lVar1 + 8) == param_1) {
      if (lVar4 == 0) {
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      else {
        *(long *)(lVar1 + 8) = lVar4;
        *(undefined8 *)(param_1[3] + 0x10) = 0;
      }
      goto LAB_032ae3dc;
    }
    lVar1 = param_1[2];
LAB_032ae384:
    *(long *)(lVar1 + 0x18) = lVar4;
  }
  if (param_1[3] != 0) {
    *(long *)(param_1[3] + 0x10) = param_1[2];
  }
LAB_032ae3dc:
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

