
void FUN_0031edb4(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    lVar4 = *(long *)(param_1 + 8);
    if ((iVar3 == 2) || (iVar3 == 1)) {
      param_1 = param_1 + (ulong)param_3 * 8;
    }
    else if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
    lVar1 = *(long *)(lVar4 + 0x1d8);
    lVar2 = *(long *)(lVar4 + 0x1e0);
    lVar5 = *(long *)(param_1 + 0x18);
    *param_2 = lVar1;
    param_2[1] = lVar2;
    *param_2 = (lVar5 - *(long *)(lVar4 + 0x170)) + lVar1;
  }
  return;
}

