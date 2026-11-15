
void FUN_020b5060(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x2f50);
  if (lVar1 != param_1 + 0x2f48) {
    iVar2 = *param_2;
    lVar3 = lVar1 + -0xe0;
    do {
      do {
        lVar3 = *(long *)(lVar3 + 8);
        if ((int *)(lVar3 + -0x10) == (int *)(lVar1 + -0xf0)) goto LAB_020b5090;
      } while (*(int *)(lVar3 + -0x10) != iVar2);
      *(undefined4 *)(lVar3 + -0xc) = 4;
      iVar2 = *param_2;
LAB_020b5090:
      lVar1 = *(long *)(lVar1 + 8);
      lVar3 = lVar1 + -0xe0;
    } while (lVar3 != param_1 + 0x2e68);
  }
  return;
}

