
int FUN_03bac208(long param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) || (uVar1 = *(uint *)(lVar3 + 8), uVar1 == 0)
     ) {
    return 0;
  }
  iVar2 = 0;
  if (-1 < (int)*(uint *)(lVar3 + 0x18)) {
    param_3 = *(uint *)(lVar3 + 0x18);
  }
  if ((int)uVar1 <= (int)param_3) {
    param_3 = 0;
  }
  if (param_3 < uVar1) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)param_3 * 8);
    if (lVar3 == 0) {
      return 0;
    }
    switch(param_2) {
    case 0:
      iVar2 = -*(int *)(lVar3 + 0x24);
      break;
    case 1:
      iVar2 = *(int *)(lVar3 + 0x24);
      break;
    case 2:
      iVar2 = -*(int *)(lVar3 + 0x28);
      break;
    case 3:
      iVar2 = *(int *)(lVar3 + 0x28);
      break;
    default:
      iVar2 = 0;
    }
  }
  return iVar2;
}

