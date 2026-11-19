
void FUN_0383daa0(float param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  if (((((*(byte *)(param_2 + 8) >> 2 & 1) == 0) || (param_1 < 0.0)) || (param_1 < 21025.0)) &&
     ((param_3 & 1) == 0)) {
    return;
  }
  FUN_03f45838(param_2 + 0x80);
  lVar2 = *(long *)(param_2 + 0x20);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd8) >> 1 & 1) == 0)) {
    FUN_03bf3a60(lVar2);
    *(byte *)(lVar2 + 0xd8) = *(byte *)(lVar2 + 0xd8) | 2;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 3) {
    if (*(int *)(param_2 + 0x88) != 3) {
      if (*(int *)(param_2 + 0x88) != 2) {
        return;
      }
LAB_0383db58:
      *(undefined4 *)(param_2 + 0x10) = 4;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
      return;
    }
    iVar1 = 2;
  }
  else if (iVar1 == 6) {
    iVar1 = *(int *)(param_2 + 0x88);
    if (iVar1 == 3) goto LAB_0383db58;
    if (iVar1 != 2) {
      return;
    }
  }
  else {
    if (iVar1 != 5) {
      return;
    }
    iVar1 = 4;
  }
  *(int *)(param_2 + 0x10) = iVar1;
  return;
}

