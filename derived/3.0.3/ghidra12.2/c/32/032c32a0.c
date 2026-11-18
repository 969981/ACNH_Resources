
void FUN_032c32a0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      lVar2 = param_1[3];
      goto LAB_032c32cc;
    }
  }
  else {
    lVar2 = param_1[3];
    if (*(long **)(lVar1 + 8) == param_1) {
      if (lVar2 == 0) {
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      else {
        *(long *)(lVar1 + 8) = lVar2;
        *(undefined8 *)(param_1[3] + 0x10) = 0;
      }
      goto LAB_032c32fc;
    }
    lVar1 = param_1[2];
LAB_032c32cc:
    *(long *)(lVar1 + 0x18) = lVar2;
  }
  if (param_1[3] != 0) {
    *(long *)(param_1[3] + 0x10) = param_1[2];
  }
LAB_032c32fc:
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    *param_1 = param_2;
    lVar1 = *(long *)(param_2 + 8);
    if (*(long *)(param_2 + 8) == 0) {
      *(long **)(param_2 + 8) = param_1;
    }
    else {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x18);
      } while (*(long *)(lVar2 + 0x18) != 0);
      *(long **)(lVar2 + 0x18) = param_1;
      param_1[2] = lVar2;
    }
    if ((*(ushort *)(param_1 + 10) >> 6 & 1) != 0) {
      param_1[5] = *(long *)(param_2 + 0x28);
    }
  }
  return;
}

