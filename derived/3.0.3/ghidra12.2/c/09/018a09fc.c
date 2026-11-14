
void FUN_018a09fc(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (DAT_052ae848 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (DAT_052ae7c8 <= iVar1 && iVar1 <= DAT_052ae7d8) {
      iVar2 = *(int *)(param_1 + 0xc);
      if ((DAT_052ae7cc <= iVar2) && (iVar2 <= DAT_052ae7dc)) {
        lVar3 = (long)(int)((iVar1 - DAT_052ae7c8) + DAT_052ae840 * (iVar2 - DAT_052ae7cc));
        if (DAT_052ae844 <= (uint)(iVar2 - DAT_052ae7cc) ||
            DAT_052ae840 <= (uint)(iVar1 - DAT_052ae7c8)) {
          lVar3 = 0;
        }
        if ('\0' < *(char *)(DAT_052ae848 + lVar3)) {
          *(char *)(DAT_052ae848 + lVar3) = *(char *)(DAT_052ae848 + lVar3) + -1;
        }
      }
    }
  }
  return;
}

