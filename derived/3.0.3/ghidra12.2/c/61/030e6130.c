
void FUN_030e6130(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(param_1 + 0x220);
  if ((lVar2 != 0) && (1 < *(int *)(lVar2 + 0x10))) {
    iVar1 = *(int *)(param_1 + 0x440);
    iVar3 = iVar1 + -1;
    *(int *)(param_1 + 0x440) = iVar3;
    if (iVar1 < 1) {
      iVar3 = *(int *)(lVar2 + 0x10) + -1;
      *(int *)(param_1 + 0x440) = iVar3;
    }
    *(int *)(*(long *)(param_1 + 0x218) + 0x234) = iVar3;
    if (*(long *)(param_1 + 0x530) != 0) {
      FUN_03d66950(param_1,&DAT_056ee780);
      return;
    }
  }
  return;
}

