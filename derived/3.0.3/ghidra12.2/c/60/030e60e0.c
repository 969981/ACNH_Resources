
void FUN_030e60e0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x220);
  if ((lVar4 != 0) && (1 < *(int *)(lVar4 + 0x10))) {
    iVar3 = *(int *)(param_1 + 0x440);
    iVar1 = iVar3 + 1;
    *(int *)(param_1 + 0x440) = iVar1;
    iVar2 = 0;
    if (iVar1 < *(int *)(lVar4 + 0x10)) {
      iVar2 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x440) = iVar2;
    *(int *)(*(long *)(param_1 + 0x218) + 0x234) = iVar2;
    if (*(long *)(param_1 + 0x530) != 0) {
      FUN_03d66950(param_1,&DAT_056ee780);
      return;
    }
  }
  return;
}

