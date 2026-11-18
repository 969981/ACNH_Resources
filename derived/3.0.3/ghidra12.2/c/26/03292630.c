
void FUN_03292630(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
LAB_0329267c:
    lVar2 = param_2[2];
    if (lVar2 != 0) {
      lVar3 = param_2[3];
      goto LAB_03292688;
    }
  }
  else {
    FUN_032ae1e0(param_2);
    lVar2 = *param_2;
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) goto LAB_0329267c;
    lVar3 = param_2[3];
    if (*(long **)(lVar2 + 8) == param_2) {
      if (lVar3 == 0) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      else {
        *(long *)(lVar2 + 8) = lVar3;
        *(undefined8 *)(param_2[3] + 0x10) = 0;
      }
      goto LAB_0329269c;
    }
    lVar2 = param_2[2];
LAB_03292688:
    *(long *)(lVar2 + 0x18) = lVar3;
  }
  if (param_2[3] != 0) {
    *(long *)(param_2[3] + 0x10) = param_2[2];
  }
LAB_0329269c:
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (lVar1 != 0) {
    *param_2 = lVar1;
    lVar2 = *(long *)(lVar1 + 8);
    if (*(long *)(lVar1 + 8) == 0) {
      *(long **)(lVar1 + 8) = param_2;
    }
    else {
      do {
        lVar1 = lVar2;
        lVar2 = *(long *)(lVar1 + 0x18);
      } while (*(long *)(lVar1 + 0x18) != 0);
      *(long **)(lVar1 + 0x18) = param_2;
      param_2[2] = lVar1;
    }
  }
  return;
}

