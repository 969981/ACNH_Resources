
void FUN_021b18c0(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04bb3968;
  iVar3 = 0;
  do {
    lVar2 = FUN_021c9770(iVar3,1);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1f8) == param_2)) {
      FUN_0208f100(*(long *)puVar1 + 0x1320,iVar3,1,1,0);
      if (iVar3 == *(int *)(param_1 + 0x55ca4)) {
        *(int *)(param_1 + 0x55ca4) = -1;
      }
      if (iVar3 == *(int *)(param_1 + 0x55ca8)) {
        *(undefined4 *)(param_1 + 0x55ca8) = 0xffffffff;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x11);
  return;
}

