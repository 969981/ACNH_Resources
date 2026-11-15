
void FUN_0227ca5c(long param_1,uint *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_2;
  }
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x6dc);
    uVar2 = *param_2;
  }
  if (uVar2 == 2) {
    if (*(int *)(param_1 + 0x6d8) < *(int *)(param_1 + 0x6dc)) {
      *(int *)(param_1 + 0x6d8) = *(int *)(param_1 + 0x6d8) + 1;
      return;
    }
    if (lVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar1 + 0x280);
      if (((iVar3 == 5) || (iVar3 == 3)) || (iVar3 == 5)) goto LAB_0227cb5c;
    }
    if ((iVar3 == 3) || ((*(byte *)(param_1 + 0x29e) >> 2 & 1) != 0)) {
LAB_0227cb5c:
      *(undefined4 *)(param_1 + 0x6d8) = 0;
      return;
    }
  }
  if (lVar1 == 0) {
    iVar3 = 0;
LAB_0227cb70:
    if (iVar3 != 7) goto LAB_0227cbbc;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x280);
    if (iVar3 != 8) goto LAB_0227cb70;
  }
  if (uVar2 < 2) {
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x6dc);
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(lVar1 + 0x280) == 2) {
      return;
    }
    FUN_03ebb160(lVar1 + 0x278,2);
    return;
  }
LAB_0227cbbc:
  if ((lVar1 == 0) || (*(uint *)(lVar1 + 0x280) == *param_2)) {
    return;
  }
  FUN_03ebb160(lVar1 + 0x278);
  return;
}

