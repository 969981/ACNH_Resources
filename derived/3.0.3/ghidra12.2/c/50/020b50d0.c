
void FUN_020b50d0(long param_1,int *param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x2f50);
  if (lVar5 == param_1 + 0x2f48) {
    return;
  }
  lVar1 = lVar5 + -0xe0;
LAB_020b5124:
  piVar3 = (int *)(*(long *)(lVar1 + 8) + -0x10);
  piVar2 = (int *)(lVar5 + -0xf0);
  if (piVar3 != piVar2) {
    piVar4 = piVar3;
    do {
      if (*piVar4 == *param_2) {
        *(undefined1 *)(lVar1 + 0xdc) = 1;
        goto LAB_020b5164;
      }
      piVar4 = (int *)(*(long *)(piVar4 + 6) + -0x10);
    } while (piVar4 != piVar2);
  }
  goto LAB_020b5114;
  while (piVar3 = (int *)(*(long *)(piVar3 + 6) + -0x10), piVar3 != piVar2) {
LAB_020b5164:
    if (piVar3[1] == 2) goto LAB_020b5114;
  }
  FUN_020b4d78(param_1);
LAB_020b5114:
  lVar5 = *(long *)(lVar5 + 8);
  lVar1 = lVar5 + -0xe0;
  if (lVar1 == param_1 + 0x2e68) {
    return;
  }
  goto LAB_020b5124;
}

