
void FUN_0224de5c(long param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar3 + 0x800);
  if ((int)uVar2 < 0x1e && *param_2 != 0) {
    piVar1 = (int *)(lVar3 + 0x5d4) + uVar2;
    if (0x1d < uVar2) {
      piVar1 = (int *)(lVar3 + 0x5d4);
    }
    *piVar1 = *param_2;
    *(int *)(lVar3 + 0x800) = *(int *)(lVar3 + 0x800) + 1;
  }
  return;
}

