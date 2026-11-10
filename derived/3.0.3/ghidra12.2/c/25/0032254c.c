
void FUN_0032254c(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 == '\0') {
    lVar2 = *(long *)(param_2 + 0x88);
    if ((lVar2 != 0) && (*(long *)(param_2 + 0x80) != 0)) {
      *(long *)(lVar2 + 0x80) = *(long *)(param_2 + 0x80);
      *(undefined8 *)(*(long *)(param_2 + 0x80) + 0x88) = *(undefined8 *)(param_2 + 0x88);
      return;
    }
    if (*(char **)(param_1 + 0x160) == param_2) {
      *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x80);
      lVar2 = *(long *)(param_2 + 0x80);
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0x168) = 0;
        return;
      }
      goto LAB_00322630;
    }
    if (*(char **)(param_1 + 0x168) == param_2) {
      *(long *)(param_1 + 0x168) = lVar2;
      lVar2 = *(long *)(param_2 + 0x88);
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0x160) = 0;
        return;
      }
      goto LAB_00322614;
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0x88);
    if ((lVar2 != 0) && (*(long *)(param_2 + 0x80) != 0)) {
      *(long *)(lVar2 + 0x80) = *(long *)(param_2 + 0x80);
      *(undefined8 *)(*(long *)(param_2 + 0x80) + 0x88) = *(undefined8 *)(param_2 + 0x88);
      return;
    }
    lVar1 = *(long *)(param_2 + 0x5e0) + (long)*(int *)(param_2 + 0x20) * 8;
    if (*(char **)(lVar1 + 0x4d8) == param_2) {
      *(undefined8 *)(lVar1 + 0x4d8) = *(undefined8 *)(param_2 + 0x80);
      lVar2 = *(long *)(param_2 + 0x80);
      if (lVar2 == 0) {
        *(undefined8 *)(lVar1 + 0x558) = 0;
        return;
      }
LAB_00322630:
      *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_2 + 0x88);
      return;
    }
    if (*(char **)(lVar1 + 0x558) == param_2) {
      *(long *)(lVar1 + 0x558) = lVar2;
      lVar2 = *(long *)(param_2 + 0x88);
      if (lVar2 == 0) {
        *(undefined8 *)(lVar1 + 0x4d8) = 0;
        return;
      }
LAB_00322614:
      *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      return;
    }
  }
  return;
}

